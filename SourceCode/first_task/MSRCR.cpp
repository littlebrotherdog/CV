/* Msrcr_opencv4.cpp
 * Updated to use OpenCV4 C++ API, preserving original signatures and behavior.
 */

#include "MSRCR.h"
#include <opencv2/imgproc.hpp>
#include <opencv2/core.hpp>
#include <vector>
#include <cmath>

using namespace cv;
using std::vector;

vector<double> Msrcr::CreateKernel(double sigma)
{
    if (sigma > 300) sigma = 300;
    int half = (int)floor(sigma * 6) / 2;
    int ksize = half * 2 + 1;
    vector<double> kernel(ksize);
    double sum = 0;
    for (int i = 0; i < ksize; ++i) {
        int x = i - half;
        double v = std::exp(-(x * x) / (2 * sigma * sigma));
        kernel[i] = v;
        sum += v;
    }
    for (double &v : kernel) v /= sum;
    return kernel;
}

vector<int> Msrcr::CreateFastKernel(double sigma)
{
    if (sigma > 300) sigma = 300;
    int half = (int)floor(sigma * 6) / 2;
    int ksize = half * 2 + 1;
    auto fp = CreateKernel(sigma);
    vector<int> kernel(ksize);
    for (int i = 0; i < ksize; ++i)
        kernel[i] = double2int(fp[i]);
    return kernel;
}

void Msrcr::FilterGaussian(Mat* img, double sigma)
{
    if (sigma > 300) sigma = 300;
    int half = (int)floor(sigma * 6) / 2;
    int ksize = half * 2 + 1;
    GaussianBlur(*img, *img, Size(ksize, ksize), sigma, sigma, BORDER_REFLECT);
}

void Msrcr::FilterGaussian(Mat src, Mat &dst, double sigma)
{
    if (sigma > 300) sigma = 300;
    int half = (int)floor(sigma * 6) / 2;
    int ksize = half * 2 + 1;
    GaussianBlur(src, dst, Size(ksize, ksize), sigma, sigma, BORDER_REFLECT);
}

void Msrcr::FastFilter(Mat* img, double sigma)
{
    if (sigma > 300) sigma = 300;
    int half = (int)floor(sigma * 6) / 2;
    int ksize = half * 2 + 1;
    if (ksize < 3) return;
    if (ksize < 10) {
        GaussianBlur(*img, *img, Size(ksize, ksize), sigma, sigma, BORDER_REFLECT);
    } else {
        if (img->cols < 2 || img->rows < 2) return;
        Mat down;
        pyrDown(*img, down, Size(img->cols/2, img->rows/2));
        FastFilter(&down, sigma/2.0);
        pyrUp(down, *img, img->size());
    }
}

void Msrcr::FastFilter(Mat src, Mat &dst, double sigma)
{
    dst = src.clone();
    FastFilter(&dst, sigma);
}

void Msrcr::Retinex(Mat* img, double sigma, int gain, int offset)
{
    Mat src = *img;
    Mat fA, fB, fC;
    src.convertTo(fA, CV_32F);
    log(fA, fB);
    Mat blur;
    FastFilter(src, blur, sigma);
    blur.convertTo(fA, CV_32F);
    log(fA, fC);
    Mat result = fB - fC;
    result.convertTo(src, src.type(), gain, offset);
    *img = src;
}

void Msrcr::Retinex(Mat src, Mat &dst, double sigma, int gain, int offset)
{
    dst = src.clone();
    Retinex(&dst, sigma, gain, offset);
}

void Msrcr::MultiScaleRetinex(Mat* img, vector<double> weights, vector<double> sigmas, int gain, int offset)
{
    Mat src = *img;
    int scales = (int)sigmas.size();
    Mat logOrig;
    src.convertTo(logOrig, CV_32F);
    log(logOrig, logOrig);
    double wsum = 0;
    for (double w : weights) wsum += w;
    if (wsum != 1.0) logOrig *= wsum;
    Mat MSR = logOrig.clone();
    for (int i = 0; i < scales; ++i) {
        Mat blur;
        FastFilter(src, blur, sigmas[i]);
        Mat logBlur;
        blur.convertTo(logBlur, CV_32F);
        log(logBlur, logBlur);
        MSR -= logBlur * weights[i];
    }
    MSR.convertTo(src, src.type(), gain, offset);
    *img = src;
}

void Msrcr::MultiScaleRetinex(Mat src, Mat &dst, vector<double> weights, vector<double> sigmas, int gain, int offset)
{
    dst = src.clone();
    MultiScaleRetinex(&dst, weights, sigmas, gain, offset);
}

void Msrcr::MultiScaleRetinexCR(Mat* img, vector<double> weights, vector<double> sigmas, int gain, int offset, double restoration_factor, double color_gain)
{
    Mat src = *img;
    Mat MSR;
    MultiScaleRetinex(&src, weights, sigmas, gain, offset);
    MSR = src.clone();
    if (src.channels() > 1) {
        vector<Mat> channels;
        split(src, channels);
        Mat sum = Mat::zeros(src.size(), CV_32F);
        for (auto &ch : channels) {
            Mat f;
            ch.convertTo(f, CV_32F);
            sum += f;
        }
        for (auto &ch : channels) {
            Mat f;
            ch.convertTo(f, CV_32F);
            Mat weighted;
            divide(f, sum, weighted, restoration_factor);
            log(weighted, weighted);
            ch = weighted * color_gain;
        }
        Mat color_restored;
        merge(channels, color_restored);
        MSR = color_restored;
    }
    MSR.convertTo(src, src.type(), gain, offset);
    *img = src;
}

void Msrcr::MultiScaleRetinexCR(Mat src, Mat &dst, vector<double> weights, vector<double> sigmas, int gain, int offset, double restoration_factor, double color_gain)
{
    dst = src.clone();
    MultiScaleRetinexCR(&dst, weights, sigmas, gain, offset, restoration_factor, color_gain);
}

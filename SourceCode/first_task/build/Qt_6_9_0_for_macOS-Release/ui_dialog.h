/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *lblOriginal;
    QLabel *lblProcessed;
    QPushButton *ritnex;
    QPushButton *dark;
    QPushButton *btnOpenImage;
    QLabel *label;
    QPushButton *Sritnex;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(1188, 657);
        lblOriginal = new QLabel(Dialog);
        lblOriginal->setObjectName("lblOriginal");
        lblOriginal->setGeometry(QRect(30, 80, 541, 431));
        lblOriginal->setMouseTracking(true);
        lblOriginal->setAutoFillBackground(true);
        lblProcessed = new QLabel(Dialog);
        lblProcessed->setObjectName("lblProcessed");
        lblProcessed->setGeometry(QRect(610, 80, 541, 431));
        lblProcessed->setAutoFillBackground(true);
        lblProcessed->setFrameShadow(QFrame::Sunken);
        ritnex = new QPushButton(Dialog);
        ritnex->setObjectName("ritnex");
        ritnex->setGeometry(QRect(860, 600, 121, 41));
        dark = new QPushButton(Dialog);
        dark->setObjectName("dark");
        dark->setGeometry(QRect(1030, 600, 101, 41));
        btnOpenImage = new QPushButton(Dialog);
        btnOpenImage->setObjectName("btnOpenImage");
        btnOpenImage->setGeometry(QRect(130, 600, 151, 41));
        btnOpenImage->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(260, 10, 641, 71));
        label->setStyleSheet(QString::fromUtf8("font: 36pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));
        Sritnex = new QPushButton(Dialog);
        Sritnex->setObjectName("Sritnex");
        Sritnex->setGeometry(QRect(680, 600, 131, 41));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(160, 530, 91, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\271\274\345\234\206\";"));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(860, 520, 91, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\271\274\345\234\206\";"));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(1010, 20, 171, 16));
        label_4->setStyleSheet(QString::fromUtf8("font: 10pt \"\351\273\221\344\275\223\";\n"
"text-decoration: underline;"));
        label_5 = new QLabel(Dialog);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(300, 610, 191, 16));
        label_5->setStyleSheet(QString::fromUtf8("\n"
"font: 10pt \"\351\273\221\344\275\223\";"));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "\345\214\227\344\272\244\350\247\206\350\247\211\345\256\236\350\267\265-\345\233\276\345\203\217\345\242\236\345\274\272", nullptr));
        lblOriginal->setText(QString());
        lblProcessed->setText(QString());
        ritnex->setText(QCoreApplication::translate("Dialog", "\345\244\232\351\200\232\351\201\223Ritinex", nullptr));
        dark->setText(QCoreApplication::translate("Dialog", "\346\232\227\351\200\232\351\201\223", nullptr));
        btnOpenImage->setText(QCoreApplication::translate("Dialog", "\346\211\223\345\274\200\344\270\200\345\274\240\345\233\276\347\211\207", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "\346\204\237\347\237\245\345\242\236\345\274\272\347\263\273\347\273\237--\351\235\231\346\200\201\345\233\276\345\203\217\345\242\236\345\274\272", nullptr));
        Sritnex->setText(QCoreApplication::translate("Dialog", "\345\215\225\351\200\232\351\201\223Ritinex", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "\345\216\237\345\247\213\345\233\276\347\211\207", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "\345\242\236\345\274\272\345\233\276\347\211\207", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "Version1.0 By \345\214\227\344\272\244\346\234\261\345\256\217\346\242\201", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-weight:600; color:red\">\346\263\250\346\204\217\357\274\232\350\267\257\345\276\204\344\270\215\350\203\275\346\230\257\344\270\255\346\226\207\350\267\257\345\276\204</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H

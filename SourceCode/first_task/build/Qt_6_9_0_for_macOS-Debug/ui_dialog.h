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
        lblProcessed->setFrameShadow(QFrame::Shadow::Sunken);
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
        label->setGeometry(QRect(430, 10, 311, 71));
        label->setStyleSheet(QString::fromUtf8("font: 36pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";"));
        Sritnex = new QPushButton(Dialog);
        Sritnex->setObjectName("Sritnex");
        Sritnex->setGeometry(QRect(680, 600, 131, 41));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(190, 520, 91, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\271\274\345\234\206\";"));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(860, 520, 91, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\271\274\345\234\206\";"));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(1000, 30, 81, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(true);
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("font: 10pt \"\351\273\221\344\275\223\";\n"
"text-decoration: underline;"));
        label_5 = new QLabel(Dialog);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(310, 610, 191, 16));
        label_5->setStyleSheet(QString::fromUtf8("\n"
"font: 10pt \"\351\273\221\344\275\223\";"));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "\351\241\271\347\233\256\345\256\236\350\267\265\357\274\232\346\204\237\347\237\245\345\242\236\345\274\272\347\263\273\347\273\237\350\256\276\350\256\241\357\274\210\344\270\215\350\211\257\350\247\206\350\247\211\346\235\241\344\273\266\344\270\213\347\232\204\345\233\276\345\203\217/\350\247\206\351\242\221\345\242\236\345\274\272\357\274\211", nullptr));
        lblOriginal->setText(QString());
        lblProcessed->setText(QString());
        ritnex->setText(QCoreApplication::translate("Dialog", "\345\244\232\351\200\232\351\201\223Ritinex", nullptr));
        dark->setText(QCoreApplication::translate("Dialog", "\346\232\227\351\200\232\351\201\223", nullptr));
        btnOpenImage->setText(QCoreApplication::translate("Dialog", "open a pic", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "\346\204\237\347\237\245\345\242\236\345\274\272\347\263\273\347\273\237\350\256\276\350\256\241", nullptr));
        Sritnex->setText(QCoreApplication::translate("Dialog", "\345\215\225\351\200\232\351\201\223Ritinex", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Vanilla", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Reinforcement", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "24125226-\350\200\277\351\243\232", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-weight:600; color:#ff0000;\">English Path</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H

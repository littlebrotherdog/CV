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
    QPushButton *btnOpenCamera;
    QLabel *label;
    QPushButton *btnPauseOrResume;
    QPushButton *Ritinex;
    QLabel *lblProcessed_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(1144, 629);
        lblOriginal = new QLabel(Dialog);
        lblOriginal->setObjectName("lblOriginal");
        lblOriginal->setGeometry(QRect(50, 70, 501, 441));
        lblOriginal->setContextMenuPolicy(Qt::ContextMenuPolicy::PreventContextMenu);
        lblOriginal->setAutoFillBackground(true);
        btnOpenCamera = new QPushButton(Dialog);
        btnOpenCamera->setObjectName("btnOpenCamera");
        btnOpenCamera->setGeometry(QRect(80, 570, 201, 51));
        btnOpenCamera->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\271\274\345\234\206\";\n"
"font: 14pt \"\351\273\221\344\275\223\";"));
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(450, 10, 321, 41));
        label->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\232\266\344\271\246\";\n"
"font: 28pt \"\351\232\266\344\271\246\";"));
        btnPauseOrResume = new QPushButton(Dialog);
        btnPauseOrResume->setObjectName("btnPauseOrResume");
        btnPauseOrResume->setGeometry(QRect(380, 580, 101, 41));
        btnPauseOrResume->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        Ritinex = new QPushButton(Dialog);
        Ritinex->setObjectName("Ritinex");
        Ritinex->setGeometry(QRect(800, 570, 141, 51));
        Ritinex->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        lblProcessed_2 = new QLabel(Dialog);
        lblProcessed_2->setObjectName("lblProcessed_2");
        lblProcessed_2->setGeometry(QRect(600, 60, 501, 441));
        lblProcessed_2->setAutoFillBackground(true);
        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(220, 530, 61, 21));
        label_2->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\271\274\345\234\206\";"));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(840, 520, 71, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\271\274\345\234\206\";"));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(960, 10, 171, 16));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "\351\241\271\347\233\256\345\256\236\350\267\265\357\274\232\346\204\237\347\237\245\345\242\236\345\274\272\347\263\273\347\273\237\350\256\276\350\256\241\357\274\210\344\270\215\350\211\257\350\247\206\350\247\211\346\235\241\344\273\266\344\270\213\347\232\204\345\233\276\345\203\217/\350\247\206\351\242\221\345\242\236\345\274\272\357\274\211", nullptr));
        lblOriginal->setText(QString());
        btnOpenCamera->setText(QCoreApplication::translate("Dialog", "start", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "\350\247\206\351\242\221\346\204\237\347\237\245\345\242\236\345\274\272\347\263\273\347\273\237", nullptr));
        btnPauseOrResume->setText(QCoreApplication::translate("Dialog", "pause", nullptr));
        Ritinex->setText(QCoreApplication::translate("Dialog", "Ritinex", nullptr));
        lblProcessed_2->setText(QString());
        label_2->setText(QCoreApplication::translate("Dialog", "originalImg", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "processedImg", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "24125226-\350\200\277\351\243\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H

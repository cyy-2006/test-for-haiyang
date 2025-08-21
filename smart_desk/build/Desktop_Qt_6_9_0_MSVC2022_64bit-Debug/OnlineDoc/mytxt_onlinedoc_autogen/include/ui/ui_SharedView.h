/********************************************************************************
** Form generated from reading UI file 'SharedView.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHAREDVIEW_H
#define UI_SHAREDVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SharedView
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *passwdEdit;
    QPushButton *yesBtn;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QTextEdit *textBrowser;
    QHBoxLayout *horizontalLayout;
    QPushButton *selectBtn;
    QLineEdit *readfileEdit_2;
    QLineEdit *createEdit;
    QPushButton *buildBtn;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *linkBtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeBtn;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *sendmsgBtn;
    QLineEdit *msgEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SharedView)
    {
        if (SharedView->objectName().isEmpty())
            SharedView->setObjectName("SharedView");
        SharedView->resize(335, 514);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SharedView->sizePolicy().hasHeightForWidth());
        SharedView->setSizePolicy(sizePolicy);
        SharedView->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(SharedView);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(5, -1, -1, -1);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(-1, -1, 0, -1);
        label_2 = new QLabel(SharedView);
        label_2->setObjectName("label_2");

        horizontalLayout_4->addWidget(label_2);

        passwdEdit = new QLineEdit(SharedView);
        passwdEdit->setObjectName("passwdEdit");

        horizontalLayout_4->addWidget(passwdEdit);

        yesBtn = new QPushButton(SharedView);
        yesBtn->setObjectName("yesBtn");

        horizontalLayout_4->addWidget(yesBtn);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 5);
        horizontalLayout_4->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(SharedView);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(label);

        textBrowser = new QTextEdit(SharedView);
        textBrowser->setObjectName("textBrowser");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(textBrowser);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 5);

        gridLayout->addLayout(horizontalLayout_2, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        selectBtn = new QPushButton(SharedView);
        selectBtn->setObjectName("selectBtn");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(selectBtn->sizePolicy().hasHeightForWidth());
        selectBtn->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(selectBtn);

        readfileEdit_2 = new QLineEdit(SharedView);
        readfileEdit_2->setObjectName("readfileEdit_2");

        horizontalLayout->addWidget(readfileEdit_2);

        createEdit = new QLineEdit(SharedView);
        createEdit->setObjectName("createEdit");

        horizontalLayout->addWidget(createEdit);

        buildBtn = new QPushButton(SharedView);
        buildBtn->setObjectName("buildBtn");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(buildBtn->sizePolicy().hasHeightForWidth());
        buildBtn->setSizePolicy(sizePolicy3);
        buildBtn->setMaximumSize(QSize(40, 25));

        horizontalLayout->addWidget(buildBtn);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 3);
        horizontalLayout->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayout, 6, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        linkBtn = new QPushButton(SharedView);
        linkBtn->setObjectName("linkBtn");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(linkBtn->sizePolicy().hasHeightForWidth());
        linkBtn->setSizePolicy(sizePolicy4);
        linkBtn->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_5->addWidget(linkBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        closeBtn = new QPushButton(SharedView);
        closeBtn->setObjectName("closeBtn");
        sizePolicy4.setHeightForWidth(closeBtn->sizePolicy().hasHeightForWidth());
        closeBtn->setSizePolicy(sizePolicy4);
        closeBtn->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_5->addWidget(closeBtn);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 5);
        horizontalLayout_5->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        sendmsgBtn = new QPushButton(SharedView);
        sendmsgBtn->setObjectName("sendmsgBtn");
        sizePolicy2.setHeightForWidth(sendmsgBtn->sizePolicy().hasHeightForWidth());
        sendmsgBtn->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(sendmsgBtn);

        msgEdit = new QLineEdit(SharedView);
        msgEdit->setObjectName("msgEdit");

        horizontalLayout_3->addWidget(msgEdit);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 10);

        gridLayout->addLayout(horizontalLayout_3, 5, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_3 = new QLabel(SharedView);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy5);

        horizontalLayout_6->addWidget(label_3);

        comboBox = new QComboBox(SharedView);
        comboBox->setObjectName("comboBox");

        horizontalLayout_6->addWidget(comboBox);

        horizontalLayout_6->setStretch(0, 1);

        gridLayout->addLayout(horizontalLayout_6, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 1);
        gridLayout->setRowStretch(2, 1);
        gridLayout->setRowStretch(4, 7);
        gridLayout->setRowStretch(5, 1);
        gridLayout->setRowStretch(6, 2);
        QWidget::setTabOrder(passwdEdit, sendmsgBtn);
        QWidget::setTabOrder(sendmsgBtn, msgEdit);
        QWidget::setTabOrder(msgEdit, selectBtn);
        QWidget::setTabOrder(selectBtn, readfileEdit_2);

        retranslateUi(SharedView);

        QMetaObject::connectSlotsByName(SharedView);
    } // setupUi

    void retranslateUi(QWidget *SharedView)
    {
        SharedView->setWindowTitle(QCoreApplication::translate("SharedView", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("SharedView", "\345\205\261\344\272\253\345\217\243\344\273\244       ", nullptr));
        passwdEdit->setText(QString());
        yesBtn->setText(QCoreApplication::translate("SharedView", "\347\241\256\350\256\244\n"
"\350\216\267\345\217\226", nullptr));
        label->setText(QCoreApplication::translate("SharedView", "\344\272\244\n"
"\344\272\222\n"
"\344\277\241\n"
"\346\201\257", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("SharedView", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\350\277\231\346\230\257\344\270\200\344\270\252\345\205\261\344\272\253csv\346\226\207\344\273\266\347\232\204\345\212\237\350\203\275\351\241\271\357\274\214\347\224\250\346\210\267\350\203\275\344\273\216\347\256\241\347\220\206\350\200\205\346\211\213\344\270\255\350\216\267\345\217\226\345\217\243\344\273\244\343\200\202<br />\347\224\250\346\210\267\346"
                        "\240\271\346\215\256\345\217\243\344\273\244\350\216\267\345\217\226\350\257\245\347\256\241\347\220\206\350\200\205\347\232\204\346\211\200\346\234\211\345\205\261\344\272\253\346\226\207\344\273\266\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\351\200\232\350\277\207\345\217\243\344\273\244\344\272\222\350\201\224\345\220\216\357\274\214\347\224\250\346\210\267\345\257\271csv\346\226\207\344\273\266\347\232\204\345\242\236\345\210\240\346\224\271\346\237\245\351\203\275\350\203\275\350\242\253\345\205\266\345\256\203\347\224\250\346\210\267\346\211\200\347\237\245</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\347\224\250\346\210\267\350\277\230\350\203\275\345\220\221\344\272\222\350\201\224\347\232\204\347\224\250\346\210\267\345\217\221\351\200\201\346"
                        "\226\207\346\234\254\346\266\210\346\201\257</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\357\274\210\344\272\244\344\272\222\344\277\241\346\201\257\345\217\257\345\205\250\351\200\211\346\270\205\351\231\244\357\274\211</span></p></body></html>", nullptr));
        selectBtn->setText(QCoreApplication::translate("SharedView", "\351\200\211\346\213\251\351\234\200\n"
"\345\205\261\344\272\253\347\232\204\346\226\207\344\273\266", nullptr));
        readfileEdit_2->setText(QString());
        createEdit->setInputMask(QString());
        createEdit->setPlaceholderText(QCoreApplication::translate("SharedView", "\345\217\243\344\273\244", nullptr));
        buildBtn->setText(QCoreApplication::translate("SharedView", "\347\241\256\350\256\244", nullptr));
        linkBtn->setText(QCoreApplication::translate("SharedView", "\350\277\236\346\216\245", nullptr));
        closeBtn->setText(QCoreApplication::translate("SharedView", "\345\205\263\351\227\255", nullptr));
        sendmsgBtn->setText(QCoreApplication::translate("SharedView", "\345\217\221\n"
"\344\277\241\346\201\257", nullptr));
        label_3->setText(QCoreApplication::translate("SharedView", "\351\200\211\346\213\251\345\205\261\344\272\253\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SharedView: public Ui_SharedView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHAREDVIEW_H

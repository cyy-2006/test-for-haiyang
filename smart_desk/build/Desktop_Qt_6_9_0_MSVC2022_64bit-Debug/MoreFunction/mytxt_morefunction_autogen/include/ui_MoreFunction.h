/********************************************************************************
** Form generated from reading UI file 'MoreFunction.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOREFUNCTION_H
#define UI_MOREFUNCTION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MoreFunction
{
public:
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QTextEdit *textEdit;

    void setupUi(QWidget *MoreFunction)
    {
        if (MoreFunction->objectName().isEmpty())
            MoreFunction->setObjectName("MoreFunction");
        MoreFunction->resize(478, 329);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::HelpAbout));
        MoreFunction->setWindowIcon(icon);
        gridLayout = new QGridLayout(MoreFunction);
        gridLayout->setObjectName("gridLayout");
        label_4 = new QLabel(MoreFunction);
        label_4->setObjectName("label_4");
        QFont font;
        font.setPointSize(10);
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(MoreFunction);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(0, 20));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 0, 1, 1, 1);

        label = new QLabel(MoreFunction);
        label->setObjectName("label");
        label->setFont(font);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        lineEdit = new QLineEdit(MoreFunction);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setFont(font);

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        label_2 = new QLabel(MoreFunction);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        textEdit = new QTextEdit(MoreFunction);
        textEdit->setObjectName("textEdit");
        textEdit->setFont(font);

        gridLayout->addWidget(textEdit, 2, 1, 1, 1);


        retranslateUi(MoreFunction);

        QMetaObject::connectSlotsByName(MoreFunction);
    } // setupUi

    void retranslateUi(QWidget *MoreFunction)
    {
        MoreFunction->setWindowTitle(QCoreApplication::translate("MoreFunction", "\346\233\264\345\244\232\345\212\237\350\203\275", nullptr));
        label_4->setText(QCoreApplication::translate("MoreFunction", "SmartDesk", nullptr));
        label_5->setText(QCoreApplication::translate("MoreFunction", "\346\202\250\345\234\250github\344\270\212\347\232\204stars\346\230\257\345\257\271\346\210\221\346\234\200\345\244\247\347\232\204\346\224\257\346\214\201\357\274\201", nullptr));
        label->setText(QCoreApplication::translate("MoreFunction", "github\345\234\260\345\235\200", nullptr));
        lineEdit->setText(QCoreApplication::translate("MoreFunction", "https://github.com/3548848289/SmartDesk", nullptr));
        label_2->setText(QCoreApplication::translate("MoreFunction", "\346\226\260\345\212\237\350\203\275\346\236\204\346\203\263", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MoreFunction", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1.\347\276\216\345\214\226\345\211\252\345\210\207\346\235\277<br />2.\345\242\236\345\274\272\345\257\271xlsx\346\226\207\344\273\266\347\232\204\346\223\215\344\275\234</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MoreFunction: public Ui_MoreFunction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOREFUNCTION_H

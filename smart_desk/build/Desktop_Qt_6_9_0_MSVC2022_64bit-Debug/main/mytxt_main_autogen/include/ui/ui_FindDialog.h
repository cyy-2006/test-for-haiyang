/********************************************************************************
** Form generated from reading UI file 'FindDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDDIALOG_H
#define UI_FINDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FindDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *findButton;
    QPushButton *findAllButton;
    QCheckBox *backwardCheckBox;
    QLabel *label;
    QLineEdit *lineEdit;
    QCheckBox *caseCheckBox;

    void setupUi(QDialog *FindDialog)
    {
        if (FindDialog->objectName().isEmpty())
            FindDialog->setObjectName("FindDialog");
        FindDialog->resize(281, 143);
        gridLayout = new QGridLayout(FindDialog);
        gridLayout->setObjectName("gridLayout");
        findButton = new QPushButton(FindDialog);
        findButton->setObjectName("findButton");

        gridLayout->addWidget(findButton, 1, 1, 1, 1);

        findAllButton = new QPushButton(FindDialog);
        findAllButton->setObjectName("findAllButton");

        gridLayout->addWidget(findAllButton, 2, 1, 1, 1);

        backwardCheckBox = new QCheckBox(FindDialog);
        backwardCheckBox->setObjectName("backwardCheckBox");

        gridLayout->addWidget(backwardCheckBox, 2, 0, 1, 1);

        label = new QLabel(FindDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(FindDialog);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        caseCheckBox = new QCheckBox(FindDialog);
        caseCheckBox->setObjectName("caseCheckBox");

        gridLayout->addWidget(caseCheckBox, 1, 0, 1, 1);

        QWidget::setTabOrder(lineEdit, findButton);
        QWidget::setTabOrder(findButton, findAllButton);
        QWidget::setTabOrder(findAllButton, caseCheckBox);
        QWidget::setTabOrder(caseCheckBox, backwardCheckBox);

        retranslateUi(FindDialog);

        findButton->setDefault(false);


        QMetaObject::connectSlotsByName(FindDialog);
    } // setupUi

    void retranslateUi(QDialog *FindDialog)
    {
        FindDialog->setWindowTitle(QCoreApplication::translate("FindDialog", "\346\237\245\346\211\276", nullptr));
        findButton->setText(QCoreApplication::translate("FindDialog", "\346\237\245\346\211\276", nullptr));
        findAllButton->setText(QCoreApplication::translate("FindDialog", "\346\237\245\346\211\276\346\211\200\346\234\211", nullptr));
        backwardCheckBox->setText(QCoreApplication::translate("FindDialog", "\345\217\215\345\220\221\346\237\245\346\211\276", nullptr));
        label->setText(QCoreApplication::translate("FindDialog", "    \346\237\245\346\211\276\345\206\205\345\256\271:", nullptr));
        caseCheckBox->setText(QCoreApplication::translate("FindDialog", "\345\214\271\351\205\215\345\244\247\345\260\217\345\206\231", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindDialog: public Ui_FindDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDDIALOG_H

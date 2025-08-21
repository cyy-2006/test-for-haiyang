/********************************************************************************
** Form generated from reading UI file 'FileRestoreWid.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILERESTOREWID_H
#define UI_FILERESTOREWID_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FileRestoreWid
{
public:
    QGridLayout *gridLayout;
    QPushButton *restoreBtn;
    QLabel *label_2;
    QPushButton *saveasBtn;
    QLabel *label;
    QLineEdit *initpathEdit;
    QDateTimeEdit *dateTimeEdit;
    QLineEdit *filenameEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *FileRestoreWid)
    {
        if (FileRestoreWid->objectName().isEmpty())
            FileRestoreWid->setObjectName("FileRestoreWid");
        FileRestoreWid->resize(470, 319);
        gridLayout = new QGridLayout(FileRestoreWid);
        gridLayout->setObjectName("gridLayout");
        restoreBtn = new QPushButton(FileRestoreWid);
        restoreBtn->setObjectName("restoreBtn");

        gridLayout->addWidget(restoreBtn, 3, 1, 1, 1);

        label_2 = new QLabel(FileRestoreWid);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 1, 1, 1);

        saveasBtn = new QPushButton(FileRestoreWid);
        saveasBtn->setObjectName("saveasBtn");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(saveasBtn->sizePolicy().hasHeightForWidth());
        saveasBtn->setSizePolicy(sizePolicy);
        saveasBtn->setMaximumSize(QSize(16777215, 30));

        gridLayout->addWidget(saveasBtn, 3, 3, 1, 1);

        label = new QLabel(FileRestoreWid);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 1, 1, 1);

        initpathEdit = new QLineEdit(FileRestoreWid);
        initpathEdit->setObjectName("initpathEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(initpathEdit->sizePolicy().hasHeightForWidth());
        initpathEdit->setSizePolicy(sizePolicy1);
        initpathEdit->setMaximumSize(QSize(16777215, 30));

        gridLayout->addWidget(initpathEdit, 2, 2, 1, 2);

        dateTimeEdit = new QDateTimeEdit(FileRestoreWid);
        dateTimeEdit->setObjectName("dateTimeEdit");
        sizePolicy.setHeightForWidth(dateTimeEdit->sizePolicy().hasHeightForWidth());
        dateTimeEdit->setSizePolicy(sizePolicy);
        dateTimeEdit->setMaximumSize(QSize(16777215, 30));
        dateTimeEdit->setReadOnly(true);

        gridLayout->addWidget(dateTimeEdit, 1, 2, 1, 2);

        filenameEdit = new QLineEdit(FileRestoreWid);
        filenameEdit->setObjectName("filenameEdit");
        sizePolicy1.setHeightForWidth(filenameEdit->sizePolicy().hasHeightForWidth());
        filenameEdit->setSizePolicy(sizePolicy1);
        filenameEdit->setMaximumSize(QSize(16777215, 30));

        gridLayout->addWidget(filenameEdit, 0, 2, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(FileRestoreWid);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        label_4 = new QLabel(FileRestoreWid);
        label_4->setObjectName("label_4");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setMaximumSize(QSize(25, 25));
        label_4->setScaledContents(true);

        horizontalLayout->addWidget(label_4);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);


        retranslateUi(FileRestoreWid);

        QMetaObject::connectSlotsByName(FileRestoreWid);
    } // setupUi

    void retranslateUi(QDialog *FileRestoreWid)
    {
        FileRestoreWid->setWindowTitle(QCoreApplication::translate("FileRestoreWid", "\345\244\207\344\273\275\346\226\207\344\273\266\350\257\246\346\203\205", nullptr));
        restoreBtn->setText(QCoreApplication::translate("FileRestoreWid", "\350\277\230\345\216\237\346\226\207\344\273\266\350\207\263\345\216\237\350\267\257\345\276\204", nullptr));
        label_2->setText(QCoreApplication::translate("FileRestoreWid", "\345\216\237\350\267\257\345\276\204", nullptr));
        saveasBtn->setText(QCoreApplication::translate("FileRestoreWid", "\345\217\246\345\255\230\344\270\272", nullptr));
        label->setText(QCoreApplication::translate("FileRestoreWid", "\344\270\212\344\274\240\346\227\266\351\227\264", nullptr));
        filenameEdit->setPlaceholderText(QCoreApplication::translate("FileRestoreWid", "\350\256\276\347\275\256\344\270\213\350\275\275\347\232\204\346\226\207\344\273\266\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("FileRestoreWid", "\350\257\246\346\203\205", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FileRestoreWid: public Ui_FileRestoreWid {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILERESTOREWID_H

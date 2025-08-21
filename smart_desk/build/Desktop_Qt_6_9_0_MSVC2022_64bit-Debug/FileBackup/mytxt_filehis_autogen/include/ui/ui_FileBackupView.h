/********************************************************************************
** Form generated from reading UI file 'FileBackupView.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEBACKUPVIEW_H
#define UI_FILEBACKUPVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileBackupView
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *fileListComboBox;
    QPushButton *pushButton;
    QPushButton *refreshBtn;
    QLabel *label_2;
    QListWidget *backupList;
    QLabel *label;

    void setupUi(QWidget *FileBackupView)
    {
        if (FileBackupView->objectName().isEmpty())
            FileBackupView->setObjectName("FileBackupView");
        FileBackupView->resize(253, 381);
        FileBackupView->setMinimumSize(QSize(0, 0));
        gridLayout = new QGridLayout(FileBackupView);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(1);
        horizontalLayout->setObjectName("horizontalLayout");
        fileListComboBox = new QComboBox(FileBackupView);
        fileListComboBox->setObjectName("fileListComboBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fileListComboBox->sizePolicy().hasHeightForWidth());
        fileListComboBox->setSizePolicy(sizePolicy);
        fileListComboBox->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(fileListComboBox);

        pushButton = new QPushButton(FileBackupView);
        pushButton->setObjectName("pushButton");
        pushButton->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMaximumSize(QSize(40, 16777215));

        horizontalLayout->addWidget(pushButton);

        refreshBtn = new QPushButton(FileBackupView);
        refreshBtn->setObjectName("refreshBtn");
        sizePolicy1.setHeightForWidth(refreshBtn->sizePolicy().hasHeightForWidth());
        refreshBtn->setSizePolicy(sizePolicy1);
        refreshBtn->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(refreshBtn);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        label_2 = new QLabel(FileBackupView);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        backupList = new QListWidget(FileBackupView);
        backupList->setObjectName("backupList");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(backupList->sizePolicy().hasHeightForWidth());
        backupList->setSizePolicy(sizePolicy2);
        backupList->setSpacing(8);

        gridLayout->addWidget(backupList, 8, 0, 1, 1);

        label = new QLabel(FileBackupView);
        label->setObjectName("label");

        gridLayout->addWidget(label, 7, 0, 1, 1);


        retranslateUi(FileBackupView);

        QMetaObject::connectSlotsByName(FileBackupView);
    } // setupUi

    void retranslateUi(QWidget *FileBackupView)
    {
        FileBackupView->setWindowTitle(QCoreApplication::translate("FileBackupView", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("FileBackupView", "\350\260\203\346\225\264", nullptr));
        refreshBtn->setText(QCoreApplication::translate("FileBackupView", "\345\210\267\346\226\260", nullptr));
        label_2->setText(QCoreApplication::translate("FileBackupView", "\346\217\220\344\272\244\350\277\207\347\232\204\346\226\207\344\273\266", nullptr));
        label->setText(QCoreApplication::translate("FileBackupView", "\346\217\220\344\272\244\345\216\206\345\217\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileBackupView: public Ui_FileBackupView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEBACKUPVIEW_H

/********************************************************************************
** Form generated from reading UI file 'FileBackupWid.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEBACKUPWID_H
#define UI_FILEBACKUPWID_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_FileBackupWid
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *save;
    QSpacerItem *horizontalSpacer;
    QPushButton *canle;
    QGridLayout *gridLayout;
    QLineEdit *edit_path;
    QLineEdit *edit_name;
    QLabel *label_path;
    QLabel *label_name;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *FileBackupWid)
    {
        if (FileBackupWid->objectName().isEmpty())
            FileBackupWid->setObjectName("FileBackupWid");
        FileBackupWid->resize(375, 191);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::EditCopy));
        FileBackupWid->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(FileBackupWid);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        save = new QPushButton(FileBackupWid);
        save->setObjectName("save");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(save->sizePolicy().hasHeightForWidth());
        save->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(save);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        canle = new QPushButton(FileBackupWid);
        canle->setObjectName("canle");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(canle->sizePolicy().hasHeightForWidth());
        canle->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(canle);

        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 1);

        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        edit_path = new QLineEdit(FileBackupWid);
        edit_path->setObjectName("edit_path");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(edit_path->sizePolicy().hasHeightForWidth());
        edit_path->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(edit_path, 2, 1, 1, 1);

        edit_name = new QLineEdit(FileBackupWid);
        edit_name->setObjectName("edit_name");
        sizePolicy2.setHeightForWidth(edit_name->sizePolicy().hasHeightForWidth());
        edit_name->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(edit_name, 0, 1, 1, 1);

        label_path = new QLabel(FileBackupWid);
        label_path->setObjectName("label_path");

        gridLayout->addWidget(label_path, 2, 0, 1, 1);

        label_name = new QLabel(FileBackupWid);
        label_name->setObjectName("label_name");

        gridLayout->addWidget(label_name, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 3);
        gridLayout->setRowStretch(2, 1);

        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 1, 0, 1, 1);

        gridLayout_2->setRowStretch(0, 4);

        retranslateUi(FileBackupWid);

        QMetaObject::connectSlotsByName(FileBackupWid);
    } // setupUi

    void retranslateUi(QDialog *FileBackupWid)
    {
        FileBackupWid->setWindowTitle(QCoreApplication::translate("FileBackupWid", "\346\226\207\344\273\266\345\244\207\344\273\275", nullptr));
        save->setText(QCoreApplication::translate("FileBackupWid", "\344\277\235\345\255\230", nullptr));
        canle->setText(QCoreApplication::translate("FileBackupWid", "\345\217\226\346\266\210", nullptr));
        edit_name->setText(QString());
        label_path->setText(QCoreApplication::translate("FileBackupWid", "\344\277\235\345\255\230\350\267\257\345\276\204", nullptr));
        label_name->setText(QCoreApplication::translate("FileBackupWid", "\346\226\207\344\273\266\345\220\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileBackupWid: public Ui_FileBackupWid {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEBACKUPWID_H

/********************************************************************************
** Form generated from reading UI file 'DownloadView.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLOADVIEW_H
#define UI_DOWNLOADVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DownloadView
{
public:
    QGridLayout *gridLayout;
    QCheckBox *chkBoxOpen;
    QLineEdit *editURL;
    QLabel *label2;
    QPushButton *btnDownload;
    QLabel *label;
    QProgressBar *progressBar;
    QPushButton *btnDefaultPath;
    QLineEdit *editPath;

    void setupUi(QWidget *DownloadView)
    {
        if (DownloadView->objectName().isEmpty())
            DownloadView->setObjectName("DownloadView");
        DownloadView->resize(299, 271);
        gridLayout = new QGridLayout(DownloadView);
        gridLayout->setObjectName("gridLayout");
        chkBoxOpen = new QCheckBox(DownloadView);
        chkBoxOpen->setObjectName("chkBoxOpen");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(chkBoxOpen->sizePolicy().hasHeightForWidth());
        chkBoxOpen->setSizePolicy(sizePolicy);
        chkBoxOpen->setChecked(true);

        gridLayout->addWidget(chkBoxOpen, 3, 0, 1, 1);

        editURL = new QLineEdit(DownloadView);
        editURL->setObjectName("editURL");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(editURL->sizePolicy().hasHeightForWidth());
        editURL->setSizePolicy(sizePolicy1);
        editURL->setCursorPosition(0);
        editURL->setClearButtonEnabled(true);

        gridLayout->addWidget(editURL, 0, 1, 1, 1);

        label2 = new QLabel(DownloadView);
        label2->setObjectName("label2");

        gridLayout->addWidget(label2, 2, 0, 1, 1);

        btnDownload = new QPushButton(DownloadView);
        btnDownload->setObjectName("btnDownload");
        sizePolicy1.setHeightForWidth(btnDownload->sizePolicy().hasHeightForWidth());
        btnDownload->setSizePolicy(sizePolicy1);
        btnDownload->setMaximumSize(QSize(10000, 16777215));

        gridLayout->addWidget(btnDownload, 3, 1, 1, 1);

        label = new QLabel(DownloadView);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        progressBar = new QProgressBar(DownloadView);
        progressBar->setObjectName("progressBar");
        sizePolicy1.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy1);
        progressBar->setValue(0);

        gridLayout->addWidget(progressBar, 2, 1, 1, 1);

        btnDefaultPath = new QPushButton(DownloadView);
        btnDefaultPath->setObjectName("btnDefaultPath");
        sizePolicy.setHeightForWidth(btnDefaultPath->sizePolicy().hasHeightForWidth());
        btnDefaultPath->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnDefaultPath, 1, 0, 1, 1);

        editPath = new QLineEdit(DownloadView);
        editPath->setObjectName("editPath");
        sizePolicy1.setHeightForWidth(editPath->sizePolicy().hasHeightForWidth());
        editPath->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(editPath, 1, 1, 1, 1);

        QWidget::setTabOrder(editURL, btnDefaultPath);
        QWidget::setTabOrder(btnDefaultPath, editPath);
        QWidget::setTabOrder(editPath, chkBoxOpen);
        QWidget::setTabOrder(chkBoxOpen, btnDownload);

        retranslateUi(DownloadView);

        QMetaObject::connectSlotsByName(DownloadView);
    } // setupUi

    void retranslateUi(QWidget *DownloadView)
    {
        DownloadView->setWindowTitle(QCoreApplication::translate("DownloadView", "Form", nullptr));
        chkBoxOpen->setText(QCoreApplication::translate("DownloadView", "\345\256\214\346\210\220\345\220\216\346\211\223\345\274\200", nullptr));
        editURL->setText(QString());
        label2->setText(QCoreApplication::translate("DownloadView", "\344\270\213\350\275\275\350\277\233\345\272\246", nullptr));
        btnDownload->setText(QCoreApplication::translate("DownloadView", "\344\270\213\350\275\275", nullptr));
        label->setText(QCoreApplication::translate("DownloadView", "URL:", nullptr));
        btnDefaultPath->setText(QCoreApplication::translate("DownloadView", "\351\200\211\346\213\251\n"
"\350\267\257\345\276\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DownloadView: public Ui_DownloadView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLOADVIEW_H

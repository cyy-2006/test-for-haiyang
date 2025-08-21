/********************************************************************************
** Form generated from reading UI file 'Setting.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Setting
{
public:
    QGridLayout *gridLayout_5;
    QTreeWidget *treeWidget;
    QStackedWidget *stackedWidget;
    QWidget *all_setting;
    QGridLayout *gridLayout_4;
    QLabel *all_setting_label2;
    QCheckBox *all_setting_checkBox;
    QLabel *all_setting_label1;
    QSpinBox *all_setting_spinBox;
    QWidget *file_system;
    QGridLayout *gridLayout_6;
    QLabel *file_system_label;
    QLineEdit *file_system_lineEdit;
    QPushButton *file_system_Btn;
    QWidget *file_see;
    QGridLayout *gridLayout_2;
    QLabel *file_see_label1;
    QCheckBox *file_see_checkBox2;
    QSpinBox *file_see_spinBox;
    QCheckBox *file_see_checkBox4;
    QCheckBox *file_see_checkBox3;
    QCheckBox *file_see_checkBox1;
    QLabel *file_see_label2;
    QSpacerItem *file_see_spacer;
    QWidget *email_service;
    QGridLayout *gridLayout;
    QLabel *email_service_label_1;
    QLineEdit *email_service_lineEdit_1;
    QLabel *email_service_label_2;
    QLineEdit *email_service_lineEdit_2;
    QLabel *email_service_label_3;
    QLineEdit *email_service_lineEdit_3;
    QLabel *email_service_label_4;
    QLineEdit *email_service_lineEdit_4;
    QLabel *email_service_label_5;
    QLineEdit *email_service_lineEdit_5;
    QLabel *email_service_label_6;
    QLineEdit *email_service_lineEdit_6;
    QWidget *file_backup;
    QGridLayout *gridLayout_7;
    QLineEdit *file_backup_lineEdit1;
    QLabel *file_backup_label1;
    QPushButton *file_backup_Btn;
    QLabel *file_backup_label2;
    QLineEdit *file_backup_lineEdit2;
    QWidget *tag_schedule;
    QGridLayout *gridLayout_8;
    QLabel *tag_schedule_label4;
    QTimeEdit *tag_schedule_timeEdit3;
    QTimeEdit *tag_schedule_timeEdit2;
    QLabel *tag_schedule_label3;
    QLabel *tag_schedule_label5;
    QComboBox *tag_schedule_comboBox;
    QTimeEdit *tag_schedule_timeEdit1;
    QLabel *tag_schedule_label1;
    QLabel *tag_schedule_label2;
    QWidget *clip_board;
    QGridLayout *gridLayout_9;
    QLabel *clip_board_label1;
    QSpinBox *clip_board_spinBox;
    QLabel *clip_board_label2;
    QWidget *server_config;
    QGridLayout *gridLayout_10;
    QLabel *server_config_label5;
    QLabel *server_config_label1;
    QLabel *server_confi_label6;
    QLineEdit *server_config_lineEdit3;
    QLabel *server_config_label4;
    QLineEdit *server_config_lineEdit4;
    QLabel *server_config_label3;
    QLabel *server_config_label2;
    QLineEdit *server_config_lineEdit1;
    QLineEdit *server_config_lineEdit2;

    void setupUi(QWidget *Setting)
    {
        if (Setting->objectName().isEmpty())
            Setting->setObjectName("Setting");
        Setting->resize(500, 400);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::WeatherClear));
        Setting->setWindowIcon(icon);
        gridLayout_5 = new QGridLayout(Setting);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(6, 0, -1, 0);
        treeWidget = new QTreeWidget(Setting);
        treeWidget->headerItem()->setText(0, QString());
        new QTreeWidgetItem(treeWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem3);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem4);
        new QTreeWidgetItem(__qtreewidgetitem4);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem5);
        QTreeWidgetItem *__qtreewidgetitem6 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem6);
        treeWidget->setObjectName("treeWidget");

        gridLayout_5->addWidget(treeWidget, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(Setting);
        stackedWidget->setObjectName("stackedWidget");
        all_setting = new QWidget();
        all_setting->setObjectName("all_setting");
        gridLayout_4 = new QGridLayout(all_setting);
        gridLayout_4->setObjectName("gridLayout_4");
        all_setting_label2 = new QLabel(all_setting);
        all_setting_label2->setObjectName("all_setting_label2");

        gridLayout_4->addWidget(all_setting_label2, 1, 0, 1, 1);

        all_setting_checkBox = new QCheckBox(all_setting);
        all_setting_checkBox->setObjectName("all_setting_checkBox");

        gridLayout_4->addWidget(all_setting_checkBox, 1, 1, 1, 1);

        all_setting_label1 = new QLabel(all_setting);
        all_setting_label1->setObjectName("all_setting_label1");

        gridLayout_4->addWidget(all_setting_label1, 0, 0, 1, 1);

        all_setting_spinBox = new QSpinBox(all_setting);
        all_setting_spinBox->setObjectName("all_setting_spinBox");

        gridLayout_4->addWidget(all_setting_spinBox, 0, 1, 1, 1);

        stackedWidget->addWidget(all_setting);
        file_system = new QWidget();
        file_system->setObjectName("file_system");
        gridLayout_6 = new QGridLayout(file_system);
        gridLayout_6->setObjectName("gridLayout_6");
        file_system_label = new QLabel(file_system);
        file_system_label->setObjectName("file_system_label");
        file_system_label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_6->addWidget(file_system_label, 0, 0, 1, 1);

        file_system_lineEdit = new QLineEdit(file_system);
        file_system_lineEdit->setObjectName("file_system_lineEdit");

        gridLayout_6->addWidget(file_system_lineEdit, 0, 1, 1, 1);

        file_system_Btn = new QPushButton(file_system);
        file_system_Btn->setObjectName("file_system_Btn");

        gridLayout_6->addWidget(file_system_Btn, 0, 2, 1, 1);

        stackedWidget->addWidget(file_system);
        file_see = new QWidget();
        file_see->setObjectName("file_see");
        gridLayout_2 = new QGridLayout(file_see);
        gridLayout_2->setObjectName("gridLayout_2");
        file_see_label1 = new QLabel(file_see);
        file_see_label1->setObjectName("file_see_label1");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(file_see_label1->sizePolicy().hasHeightForWidth());
        file_see_label1->setSizePolicy(sizePolicy);
        file_see_label1->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        file_see_label1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(file_see_label1, 0, 0, 1, 1);

        file_see_checkBox2 = new QCheckBox(file_see);
        file_see_checkBox2->setObjectName("file_see_checkBox2");

        gridLayout_2->addWidget(file_see_checkBox2, 3, 1, 1, 1);

        file_see_spinBox = new QSpinBox(file_see);
        file_see_spinBox->setObjectName("file_see_spinBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(file_see_spinBox->sizePolicy().hasHeightForWidth());
        file_see_spinBox->setSizePolicy(sizePolicy1);
        file_see_spinBox->setMinimumSize(QSize(100, 0));
        file_see_spinBox->setBaseSize(QSize(1, 0));

        gridLayout_2->addWidget(file_see_spinBox, 0, 1, 1, 1);

        file_see_checkBox4 = new QCheckBox(file_see);
        file_see_checkBox4->setObjectName("file_see_checkBox4");

        gridLayout_2->addWidget(file_see_checkBox4, 4, 1, 1, 1);

        file_see_checkBox3 = new QCheckBox(file_see);
        file_see_checkBox3->setObjectName("file_see_checkBox3");

        gridLayout_2->addWidget(file_see_checkBox3, 4, 0, 1, 1);

        file_see_checkBox1 = new QCheckBox(file_see);
        file_see_checkBox1->setObjectName("file_see_checkBox1");

        gridLayout_2->addWidget(file_see_checkBox1, 3, 0, 1, 1);

        file_see_label2 = new QLabel(file_see);
        file_see_label2->setObjectName("file_see_label2");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(file_see_label2->sizePolicy().hasHeightForWidth());
        file_see_label2->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(file_see_label2, 2, 0, 1, 1);

        file_see_spacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout_2->addItem(file_see_spacer, 1, 0, 1, 1);

        stackedWidget->addWidget(file_see);
        email_service = new QWidget();
        email_service->setObjectName("email_service");
        gridLayout = new QGridLayout(email_service);
        gridLayout->setObjectName("gridLayout");
        email_service_label_1 = new QLabel(email_service);
        email_service_label_1->setObjectName("email_service_label_1");

        gridLayout->addWidget(email_service_label_1, 0, 0, 1, 1);

        email_service_lineEdit_1 = new QLineEdit(email_service);
        email_service_lineEdit_1->setObjectName("email_service_lineEdit_1");

        gridLayout->addWidget(email_service_lineEdit_1, 0, 1, 1, 1);

        email_service_label_2 = new QLabel(email_service);
        email_service_label_2->setObjectName("email_service_label_2");

        gridLayout->addWidget(email_service_label_2, 1, 0, 1, 1);

        email_service_lineEdit_2 = new QLineEdit(email_service);
        email_service_lineEdit_2->setObjectName("email_service_lineEdit_2");

        gridLayout->addWidget(email_service_lineEdit_2, 1, 1, 1, 1);

        email_service_label_3 = new QLabel(email_service);
        email_service_label_3->setObjectName("email_service_label_3");

        gridLayout->addWidget(email_service_label_3, 2, 0, 1, 1);

        email_service_lineEdit_3 = new QLineEdit(email_service);
        email_service_lineEdit_3->setObjectName("email_service_lineEdit_3");

        gridLayout->addWidget(email_service_lineEdit_3, 2, 1, 1, 1);

        email_service_label_4 = new QLabel(email_service);
        email_service_label_4->setObjectName("email_service_label_4");

        gridLayout->addWidget(email_service_label_4, 3, 0, 1, 1);

        email_service_lineEdit_4 = new QLineEdit(email_service);
        email_service_lineEdit_4->setObjectName("email_service_lineEdit_4");

        gridLayout->addWidget(email_service_lineEdit_4, 3, 1, 1, 1);

        email_service_label_5 = new QLabel(email_service);
        email_service_label_5->setObjectName("email_service_label_5");

        gridLayout->addWidget(email_service_label_5, 4, 0, 1, 1);

        email_service_lineEdit_5 = new QLineEdit(email_service);
        email_service_lineEdit_5->setObjectName("email_service_lineEdit_5");

        gridLayout->addWidget(email_service_lineEdit_5, 4, 1, 1, 1);

        email_service_label_6 = new QLabel(email_service);
        email_service_label_6->setObjectName("email_service_label_6");

        gridLayout->addWidget(email_service_label_6, 5, 0, 1, 1);

        email_service_lineEdit_6 = new QLineEdit(email_service);
        email_service_lineEdit_6->setObjectName("email_service_lineEdit_6");

        gridLayout->addWidget(email_service_lineEdit_6, 5, 1, 1, 1);

        stackedWidget->addWidget(email_service);
        file_backup = new QWidget();
        file_backup->setObjectName("file_backup");
        gridLayout_7 = new QGridLayout(file_backup);
        gridLayout_7->setObjectName("gridLayout_7");
        file_backup_lineEdit1 = new QLineEdit(file_backup);
        file_backup_lineEdit1->setObjectName("file_backup_lineEdit1");

        gridLayout_7->addWidget(file_backup_lineEdit1, 0, 1, 1, 1);

        file_backup_label1 = new QLabel(file_backup);
        file_backup_label1->setObjectName("file_backup_label1");
        file_backup_label1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_7->addWidget(file_backup_label1, 0, 0, 1, 1);

        file_backup_Btn = new QPushButton(file_backup);
        file_backup_Btn->setObjectName("file_backup_Btn");

        gridLayout_7->addWidget(file_backup_Btn, 0, 2, 1, 1);

        file_backup_label2 = new QLabel(file_backup);
        file_backup_label2->setObjectName("file_backup_label2");

        gridLayout_7->addWidget(file_backup_label2, 1, 0, 1, 1);

        file_backup_lineEdit2 = new QLineEdit(file_backup);
        file_backup_lineEdit2->setObjectName("file_backup_lineEdit2");

        gridLayout_7->addWidget(file_backup_lineEdit2, 1, 1, 1, 1);

        stackedWidget->addWidget(file_backup);
        tag_schedule = new QWidget();
        tag_schedule->setObjectName("tag_schedule");
        gridLayout_8 = new QGridLayout(tag_schedule);
        gridLayout_8->setObjectName("gridLayout_8");
        tag_schedule_label4 = new QLabel(tag_schedule);
        tag_schedule_label4->setObjectName("tag_schedule_label4");

        gridLayout_8->addWidget(tag_schedule_label4, 4, 0, 1, 1);

        tag_schedule_timeEdit3 = new QTimeEdit(tag_schedule);
        tag_schedule_timeEdit3->setObjectName("tag_schedule_timeEdit3");

        gridLayout_8->addWidget(tag_schedule_timeEdit3, 5, 1, 1, 1);

        tag_schedule_timeEdit2 = new QTimeEdit(tag_schedule);
        tag_schedule_timeEdit2->setObjectName("tag_schedule_timeEdit2");

        gridLayout_8->addWidget(tag_schedule_timeEdit2, 4, 1, 1, 1);

        tag_schedule_label3 = new QLabel(tag_schedule);
        tag_schedule_label3->setObjectName("tag_schedule_label3");

        gridLayout_8->addWidget(tag_schedule_label3, 2, 0, 1, 1);

        tag_schedule_label5 = new QLabel(tag_schedule);
        tag_schedule_label5->setObjectName("tag_schedule_label5");

        gridLayout_8->addWidget(tag_schedule_label5, 5, 0, 1, 1);

        tag_schedule_comboBox = new QComboBox(tag_schedule);
        tag_schedule_comboBox->addItem(QString());
        tag_schedule_comboBox->addItem(QString());
        tag_schedule_comboBox->addItem(QString());
        tag_schedule_comboBox->setObjectName("tag_schedule_comboBox");

        gridLayout_8->addWidget(tag_schedule_comboBox, 0, 1, 1, 1);

        tag_schedule_timeEdit1 = new QTimeEdit(tag_schedule);
        tag_schedule_timeEdit1->setObjectName("tag_schedule_timeEdit1");

        gridLayout_8->addWidget(tag_schedule_timeEdit1, 2, 1, 1, 1);

        tag_schedule_label1 = new QLabel(tag_schedule);
        tag_schedule_label1->setObjectName("tag_schedule_label1");

        gridLayout_8->addWidget(tag_schedule_label1, 0, 0, 1, 1);

        tag_schedule_label2 = new QLabel(tag_schedule);
        tag_schedule_label2->setObjectName("tag_schedule_label2");
        sizePolicy2.setHeightForWidth(tag_schedule_label2->sizePolicy().hasHeightForWidth());
        tag_schedule_label2->setSizePolicy(sizePolicy2);

        gridLayout_8->addWidget(tag_schedule_label2, 1, 1, 1, 1);

        stackedWidget->addWidget(tag_schedule);
        clip_board = new QWidget();
        clip_board->setObjectName("clip_board");
        gridLayout_9 = new QGridLayout(clip_board);
        gridLayout_9->setObjectName("gridLayout_9");
        clip_board_label1 = new QLabel(clip_board);
        clip_board_label1->setObjectName("clip_board_label1");

        gridLayout_9->addWidget(clip_board_label1, 0, 0, 1, 1);

        clip_board_spinBox = new QSpinBox(clip_board);
        clip_board_spinBox->setObjectName("clip_board_spinBox");
        clip_board_spinBox->setMaximum(240);
        clip_board_spinBox->setValue(24);

        gridLayout_9->addWidget(clip_board_spinBox, 0, 1, 1, 1);

        clip_board_label2 = new QLabel(clip_board);
        clip_board_label2->setObjectName("clip_board_label2");

        gridLayout_9->addWidget(clip_board_label2, 1, 0, 1, 1);

        stackedWidget->addWidget(clip_board);
        server_config = new QWidget();
        server_config->setObjectName("server_config");
        gridLayout_10 = new QGridLayout(server_config);
        gridLayout_10->setObjectName("gridLayout_10");
        server_config_label5 = new QLabel(server_config);
        server_config_label5->setObjectName("server_config_label5");

        gridLayout_10->addWidget(server_config_label5, 3, 0, 1, 1);

        server_config_label1 = new QLabel(server_config);
        server_config_label1->setObjectName("server_config_label1");

        gridLayout_10->addWidget(server_config_label1, 0, 0, 1, 1);

        server_confi_label6 = new QLabel(server_config);
        server_confi_label6->setObjectName("server_confi_label6");

        gridLayout_10->addWidget(server_confi_label6, 4, 0, 1, 1);

        server_config_lineEdit3 = new QLineEdit(server_config);
        server_config_lineEdit3->setObjectName("server_config_lineEdit3");

        gridLayout_10->addWidget(server_config_lineEdit3, 3, 2, 1, 1);

        server_config_label4 = new QLabel(server_config);
        server_config_label4->setObjectName("server_config_label4");

        gridLayout_10->addWidget(server_config_label4, 2, 0, 1, 1);

        server_config_lineEdit4 = new QLineEdit(server_config);
        server_config_lineEdit4->setObjectName("server_config_lineEdit4");

        gridLayout_10->addWidget(server_config_lineEdit4, 4, 2, 1, 1);

        server_config_label3 = new QLabel(server_config);
        server_config_label3->setObjectName("server_config_label3");

        gridLayout_10->addWidget(server_config_label3, 1, 0, 1, 1);

        server_config_label2 = new QLabel(server_config);
        server_config_label2->setObjectName("server_config_label2");
        sizePolicy2.setHeightForWidth(server_config_label2->sizePolicy().hasHeightForWidth());
        server_config_label2->setSizePolicy(sizePolicy2);

        gridLayout_10->addWidget(server_config_label2, 0, 2, 1, 1);

        server_config_lineEdit1 = new QLineEdit(server_config);
        server_config_lineEdit1->setObjectName("server_config_lineEdit1");

        gridLayout_10->addWidget(server_config_lineEdit1, 1, 2, 1, 1);

        server_config_lineEdit2 = new QLineEdit(server_config);
        server_config_lineEdit2->setObjectName("server_config_lineEdit2");

        gridLayout_10->addWidget(server_config_lineEdit2, 2, 2, 1, 1);

        stackedWidget->addWidget(server_config);

        gridLayout_5->addWidget(stackedWidget, 0, 1, 1, 1);

        gridLayout_5->setColumnStretch(0, 1);
        gridLayout_5->setColumnStretch(1, 2);
        QWidget::setTabOrder(treeWidget, all_setting_spinBox);
        QWidget::setTabOrder(all_setting_spinBox, all_setting_checkBox);
        QWidget::setTabOrder(all_setting_checkBox, file_system_lineEdit);
        QWidget::setTabOrder(file_system_lineEdit, file_system_Btn);
        QWidget::setTabOrder(file_system_Btn, email_service_lineEdit_1);
        QWidget::setTabOrder(email_service_lineEdit_1, email_service_lineEdit_2);
        QWidget::setTabOrder(email_service_lineEdit_2, email_service_lineEdit_3);
        QWidget::setTabOrder(email_service_lineEdit_3, email_service_lineEdit_4);
        QWidget::setTabOrder(email_service_lineEdit_4, email_service_lineEdit_5);
        QWidget::setTabOrder(email_service_lineEdit_5, email_service_lineEdit_6);
        QWidget::setTabOrder(email_service_lineEdit_6, file_backup_lineEdit1);
        QWidget::setTabOrder(file_backup_lineEdit1, file_backup_Btn);
        QWidget::setTabOrder(file_backup_Btn, tag_schedule_comboBox);
        QWidget::setTabOrder(tag_schedule_comboBox, tag_schedule_timeEdit1);

        retranslateUi(Setting);

        stackedWidget->setCurrentIndex(7);


        QMetaObject::connectSlotsByName(Setting);
    } // setupUi

    void retranslateUi(QWidget *Setting)
    {
        Setting->setWindowTitle(QCoreApplication::translate("Setting", "\350\256\276\347\275\256", nullptr));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->topLevelItem(0);
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("Setting", "\346\200\273\344\275\223\350\256\276\347\275\256", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("Setting", "\346\226\207\344\273\266\347\263\273\347\273\237", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("Setting", "\351\273\230\350\256\244\344\275\277\347\224\250\347\233\256\345\275\225", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("Setting", "\346\226\207\344\273\266\346\237\245\347\234\213", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem3->child(0);
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("Setting", "\345\255\227\344\275\223\345\244\247\345\260\217", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem3->child(1);
        ___qtreewidgetitem5->setText(0, QCoreApplication::translate("Setting", "\346\223\215\344\275\234\347\252\227\345\217\243\345\217\257\350\247\201\346\200\247", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem6->setText(0, QCoreApplication::translate("Setting", "\351\202\256\344\273\266\346\234\215\345\212\241", nullptr));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem6->child(0);
        ___qtreewidgetitem7->setText(0, QCoreApplication::translate("Setting", "\346\224\266\345\217\221\344\272\272", nullptr));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem6->child(1);
        ___qtreewidgetitem8->setText(0, QCoreApplication::translate("Setting", "\350\256\276\347\275\256", nullptr));
        QTreeWidgetItem *___qtreewidgetitem9 = treeWidget->topLevelItem(4);
        ___qtreewidgetitem9->setText(0, QCoreApplication::translate("Setting", "\346\226\207\344\273\266\345\244\207\344\273\275", nullptr));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem9->child(0);
        ___qtreewidgetitem10->setText(0, QCoreApplication::translate("Setting", "\345\244\207\344\273\275\350\267\257\345\276\204", nullptr));
        QTreeWidgetItem *___qtreewidgetitem11 = treeWidget->topLevelItem(5);
        ___qtreewidgetitem11->setText(0, QCoreApplication::translate("Setting", "\345\244\207\345\277\230\346\227\245\347\250\213", nullptr));
        QTreeWidgetItem *___qtreewidgetitem12 = ___qtreewidgetitem11->child(0);
        ___qtreewidgetitem12->setText(0, QCoreApplication::translate("Setting", "\345\210\260\346\234\237\346\217\220\351\206\222\346\226\271\345\274\217", nullptr));
        QTreeWidgetItem *___qtreewidgetitem13 = ___qtreewidgetitem11->child(1);
        ___qtreewidgetitem13->setText(0, QCoreApplication::translate("Setting", "\346\217\220\345\211\215\345\244\232\344\271\205\346\217\220\351\206\222", nullptr));
        QTreeWidgetItem *___qtreewidgetitem14 = treeWidget->topLevelItem(6);
        ___qtreewidgetitem14->setText(0, QCoreApplication::translate("Setting", "\345\211\252\345\210\207\345\255\227\346\235\277", nullptr));
        QTreeWidgetItem *___qtreewidgetitem15 = ___qtreewidgetitem14->child(0);
        ___qtreewidgetitem15->setText(0, QCoreApplication::translate("Setting", "\345\210\235\345\247\213", nullptr));
        QTreeWidgetItem *___qtreewidgetitem16 = treeWidget->topLevelItem(7);
        ___qtreewidgetitem16->setText(0, QCoreApplication::translate("Setting", "\346\234\215\345\212\241\345\231\250\351\205\215\347\275\256", nullptr));
        QTreeWidgetItem *___qtreewidgetitem17 = ___qtreewidgetitem16->child(0);
        ___qtreewidgetitem17->setText(0, QCoreApplication::translate("Setting", "IP\345\234\260\345\235\200", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled);

        all_setting_label2->setText(QCoreApplication::translate("Setting", "\346\211\230\347\233\230", nullptr));
        all_setting_checkBox->setText(QCoreApplication::translate("Setting", "\346\230\257\345\220\246\345\220\257\347\224\250", nullptr));
        all_setting_label1->setText(QCoreApplication::translate("Setting", "\345\205\250\345\261\200\345\255\227\344\275\223\345\244\247\345\260\217", nullptr));
        file_system_label->setText(QCoreApplication::translate("Setting", "\351\273\230\350\256\244\n"
"\345\220\257\347\224\250\n"
"\347\233\256\345\275\225", nullptr));
        file_system_Btn->setText(QCoreApplication::translate("Setting", "\351\200\211\345\217\226\n"
"\350\267\257\345\276\204", nullptr));
        file_see_label1->setText(QCoreApplication::translate("Setting", "\345\255\227\344\275\223\345\244\247\345\260\217", nullptr));
        file_see_checkBox2->setText(QCoreApplication::translate("Setting", "csv\346\226\207\344\273\266", nullptr));
        file_see_checkBox4->setText(QCoreApplication::translate("Setting", "image\346\226\207\344\273\266", nullptr));
        file_see_checkBox3->setText(QCoreApplication::translate("Setting", "xlsx\346\226\207\344\273\266", nullptr));
        file_see_checkBox1->setText(QCoreApplication::translate("Setting", "txt\346\226\207\344\273\266", nullptr));
        file_see_label2->setText(QCoreApplication::translate("Setting", "\346\226\207\344\273\266\346\223\215\344\275\234\347\252\227\345\217\243\345\217\257\350\247\201\346\200\247", nullptr));
        email_service_label_1->setText(QCoreApplication::translate("Setting", "\346\234\215\345\212\241\345\231\250", nullptr));
        email_service_label_2->setText(QCoreApplication::translate("Setting", "\347\224\250\346\210\267\345\220\215", nullptr));
        email_service_label_3->setText(QCoreApplication::translate("Setting", "\345\257\206\347\240\201", nullptr));
        email_service_label_4->setText(QCoreApplication::translate("Setting", "\347\253\257\345\217\243", nullptr));
        email_service_label_5->setText(QCoreApplication::translate("Setting", "\345\217\221\344\273\266\344\272\272", nullptr));
        email_service_label_6->setText(QCoreApplication::translate("Setting", "\346\224\266\344\273\266\344\272\272", nullptr));
        file_backup_label1->setText(QCoreApplication::translate("Setting", "\347\250\213\345\272\217\n"
"\345\244\207\344\273\275\n"
"\347\233\256\345\275\225", nullptr));
        file_backup_Btn->setText(QCoreApplication::translate("Setting", "\351\200\211\345\217\226\n"
"\350\267\257\345\276\204", nullptr));
        file_backup_label2->setText(QCoreApplication::translate("Setting", "\344\272\221\347\253\257IP\345\234\260\345\235\200", nullptr));
        tag_schedule_label4->setText(QCoreApplication::translate("Setting", "\346\257\217\346\254\241\346\217\220\351\206\222\351\227\264\351\232\224\346\227\266\351\227\264", nullptr));
        tag_schedule_label3->setText(QCoreApplication::translate("Setting", "\346\217\220\345\211\215\345\244\232\344\271\205\346\217\220\351\206\222", nullptr));
        tag_schedule_label5->setText(QCoreApplication::translate("Setting", "\351\200\232\347\237\245\346\266\210\346\201\257\346\230\276\347\244\272\346\227\266\351\227\264", nullptr));
        tag_schedule_comboBox->setItemText(0, QCoreApplication::translate("Setting", "\344\270\215\346\217\220\351\206\222", nullptr));
        tag_schedule_comboBox->setItemText(1, QCoreApplication::translate("Setting", "\345\274\271\347\252\227\346\217\220\351\206\222", nullptr));
        tag_schedule_comboBox->setItemText(2, QCoreApplication::translate("Setting", "\351\202\256\344\273\266\346\217\220\351\206\222", nullptr));

        tag_schedule_label1->setText(QCoreApplication::translate("Setting", "\346\217\220\351\206\222\346\226\271\345\274\217", nullptr));
        tag_schedule_label2->setText(QCoreApplication::translate("Setting", "\345\215\225\344\275\215\345\235\207\344\270\272\357\274\210\346\227\266:\345\210\206\357\274\211", nullptr));
        clip_board_label1->setText(QCoreApplication::translate("Setting", "\345\210\235\345\247\213\345\212\240\350\275\275\345\244\232\344\271\205\347\232\204\350\256\260\345\275\225", nullptr));
        clip_board_label2->setText(QCoreApplication::translate("Setting", "\345\215\225\344\275\215\357\274\232\345\260\217\346\227\266", nullptr));
        server_config_label5->setText(QCoreApplication::translate("Setting", "\345\205\261\344\272\253\346\226\207\346\241\243", nullptr));
        server_config_label1->setText(QCoreApplication::translate("Setting", "IP\347\253\257\345\217\243", nullptr));
        server_confi_label6->setText(QCoreApplication::translate("Setting", "\347\224\250\346\210\267\344\277\241\346\201\257", nullptr));
        server_config_label4->setText(QCoreApplication::translate("Setting", "\346\217\220\344\272\244\346\226\207\344\273\266", nullptr));
        server_config_label3->setText(QCoreApplication::translate("Setting", "\344\272\221\347\253\257\345\244\207\344\273\275", nullptr));
        server_config_label2->setText(QCoreApplication::translate("Setting", "\344\276\213\345\246\202\357\274\232127.0.0.1:5000", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Setting: public Ui_Setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H

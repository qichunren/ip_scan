/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLabel *loadingLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QLabel *label_local_ip;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *tableWidget;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton_31;
    QPushButton *pushButton_19;
    QPushButton *pushButton_27;
    QPushButton *pushButton_33;
    QPushButton *pushButton_26;
    QPushButton *pushButton_8;
    QPushButton *pushButton_2;
    QPushButton *pushButton_24;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QPushButton *pushButton_12;
    QPushButton *testSSH_Button;
    QPushButton *pushButton_15;
    QPushButton *pushButton_11;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_18;
    QPushButton *pushButton_25;
    QPushButton *pushButton_28;
    QPushButton *pushButton_20;
    QPushButton *pushButton_32;
    QPushButton *pushButton_4;
    QPushButton *pushButton_22;
    QPushButton *pushButton_13;
    QPushButton *pushButton_30;
    QPushButton *showOnlineDevicesButton;
    QPushButton *pushButton_14;
    QPushButton *pushButton_10;
    QPushButton *pushButton_21;
    QPushButton *pushButton_23;
    QPushButton *pushButton_29;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *onlineCount_label;
    QLabel *label_4;
    QPushButton *pushButton_34;
    QPushButton *rebootButton;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(956, 627);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 10, -1);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(lineEdit);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        sizePolicy1.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(lineEdit_2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        loadingLabel = new QLabel(centralwidget);
        loadingLabel->setObjectName(QStringLiteral("loadingLabel"));

        horizontalLayout->addWidget(loadingLabel);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        label_local_ip = new QLabel(centralwidget);
        label_local_ip->setObjectName(QStringLiteral("label_local_ip"));
        label_local_ip->setMinimumSize(QSize(62, 0));

        horizontalLayout->addWidget(label_local_ip);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setMinimumSize(QSize(381, 300));

        horizontalLayout_2->addWidget(tableWidget);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 4, 0, 1, 1);

        pushButton_31 = new QPushButton(centralwidget);
        pushButton_31->setObjectName(QStringLiteral("pushButton_31"));

        gridLayout->addWidget(pushButton_31, 7, 0, 1, 1);

        pushButton_19 = new QPushButton(centralwidget);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));

        gridLayout->addWidget(pushButton_19, 2, 3, 1, 1);

        pushButton_27 = new QPushButton(centralwidget);
        pushButton_27->setObjectName(QStringLiteral("pushButton_27"));

        gridLayout->addWidget(pushButton_27, 4, 4, 1, 1);

        pushButton_33 = new QPushButton(centralwidget);
        pushButton_33->setObjectName(QStringLiteral("pushButton_33"));

        gridLayout->addWidget(pushButton_33, 5, 4, 1, 1);

        pushButton_26 = new QPushButton(centralwidget);
        pushButton_26->setObjectName(QStringLiteral("pushButton_26"));

        gridLayout->addWidget(pushButton_26, 3, 4, 1, 1);

        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        gridLayout->addWidget(pushButton_8, 7, 1, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 6, 0, 1, 1);

        pushButton_24 = new QPushButton(centralwidget);
        pushButton_24->setObjectName(QStringLiteral("pushButton_24"));

        gridLayout->addWidget(pushButton_24, 7, 3, 1, 1);

        pushButton_16 = new QPushButton(centralwidget);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));

        gridLayout->addWidget(pushButton_16, 8, 4, 1, 1);

        pushButton_17 = new QPushButton(centralwidget);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));

        gridLayout->addWidget(pushButton_17, 0, 4, 1, 1);

        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));

        gridLayout->addWidget(pushButton_12, 4, 1, 1, 1);

        testSSH_Button = new QPushButton(centralwidget);
        testSSH_Button->setObjectName(QStringLiteral("testSSH_Button"));

        gridLayout->addWidget(testSSH_Button, 0, 1, 1, 1);

        pushButton_15 = new QPushButton(centralwidget);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));

        gridLayout->addWidget(pushButton_15, 8, 1, 1, 1);

        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));

        gridLayout->addWidget(pushButton_11, 3, 1, 1, 1);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 3, 0, 1, 1);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        gridLayout->addWidget(pushButton_7, 2, 0, 1, 1);

        pushButton_18 = new QPushButton(centralwidget);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));

        gridLayout->addWidget(pushButton_18, 0, 3, 1, 1);

        pushButton_25 = new QPushButton(centralwidget);
        pushButton_25->setObjectName(QStringLiteral("pushButton_25"));

        gridLayout->addWidget(pushButton_25, 2, 4, 1, 1);

        pushButton_28 = new QPushButton(centralwidget);
        pushButton_28->setObjectName(QStringLiteral("pushButton_28"));

        gridLayout->addWidget(pushButton_28, 6, 4, 1, 1);

        pushButton_20 = new QPushButton(centralwidget);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));

        gridLayout->addWidget(pushButton_20, 3, 3, 1, 1);

        pushButton_32 = new QPushButton(centralwidget);
        pushButton_32->setObjectName(QStringLiteral("pushButton_32"));

        gridLayout->addWidget(pushButton_32, 8, 3, 1, 1);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 5, 0, 1, 1);

        pushButton_22 = new QPushButton(centralwidget);
        pushButton_22->setObjectName(QStringLiteral("pushButton_22"));

        gridLayout->addWidget(pushButton_22, 5, 3, 1, 1);

        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));

        gridLayout->addWidget(pushButton_13, 5, 1, 1, 1);

        pushButton_30 = new QPushButton(centralwidget);
        pushButton_30->setObjectName(QStringLiteral("pushButton_30"));

        gridLayout->addWidget(pushButton_30, 8, 0, 1, 1);

        showOnlineDevicesButton = new QPushButton(centralwidget);
        showOnlineDevicesButton->setObjectName(QStringLiteral("showOnlineDevicesButton"));

        gridLayout->addWidget(showOnlineDevicesButton, 0, 0, 1, 1);

        pushButton_14 = new QPushButton(centralwidget);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));

        gridLayout->addWidget(pushButton_14, 6, 1, 1, 1);

        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));

        gridLayout->addWidget(pushButton_10, 2, 1, 1, 1);

        pushButton_21 = new QPushButton(centralwidget);
        pushButton_21->setObjectName(QStringLiteral("pushButton_21"));

        gridLayout->addWidget(pushButton_21, 4, 3, 1, 1);

        pushButton_23 = new QPushButton(centralwidget);
        pushButton_23->setObjectName(QStringLiteral("pushButton_23"));

        gridLayout->addWidget(pushButton_23, 6, 3, 1, 1);

        pushButton_29 = new QPushButton(centralwidget);
        pushButton_29->setObjectName(QStringLiteral("pushButton_29"));

        gridLayout->addWidget(pushButton_29, 7, 4, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 9, 0, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        onlineCount_label = new QLabel(centralwidget);
        onlineCount_label->setObjectName(QStringLiteral("onlineCount_label"));

        horizontalLayout_3->addWidget(onlineCount_label);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(label_4, 0, Qt::AlignLeft);

        pushButton_34 = new QPushButton(centralwidget);
        pushButton_34->setObjectName(QStringLiteral("pushButton_34"));
        sizePolicy1.setHeightForWidth(pushButton_34->sizePolicy().hasHeightForWidth());
        pushButton_34->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(pushButton_34, 0, Qt::AlignLeft);

        rebootButton = new QPushButton(centralwidget);
        rebootButton->setObjectName(QStringLiteral("rebootButton"));
        sizePolicy1.setHeightForWidth(rebootButton->sizePolicy().hasHeightForWidth());
        rebootButton->setSizePolicy(sizePolicy1);
        rebootButton->setAutoFillBackground(false);
        rebootButton->setStyleSheet(QStringLiteral("* { background-color: rgb(255,125,100) }"));

        horizontalLayout_3->addWidget(rebootButton, 0, Qt::AlignLeft);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 956, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "From", 0));
        label_2->setText(QApplication::translate("MainWindow", "To", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Scan", 0));
        loadingLabel->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "\346\234\254\346\234\272IP:", 0));
        label_local_ip->setText(QString());
        pushButton_5->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_31->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_19->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_27->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_33->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_26->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_8->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_24->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_16->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_17->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_12->setText(QApplication::translate("MainWindow", "PushButton", 0));
        testSSH_Button->setText(QApplication::translate("MainWindow", "testSSH", 0));
        pushButton_15->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_11->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_18->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_25->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_28->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_20->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_32->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_22->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_13->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_30->setText(QApplication::translate("MainWindow", "PushButton", 0));
        showOnlineDevicesButton->setText(QApplication::translate("MainWindow", "\345\217\252\346\230\276\347\244\272\345\234\250\347\272\277", 0));
        pushButton_14->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_10->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_21->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_23->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_29->setText(QApplication::translate("MainWindow", "PushButton", 0));
        onlineCount_label->setText(QApplication::translate("MainWindow", "0", 0));
        label_4->setText(QApplication::translate("MainWindow", "\345\217\260\345\234\250\347\272\277", 0));
        pushButton_34->setText(QApplication::translate("MainWindow", "PushButton", 0));
#ifndef QT_NO_TOOLTIP
        rebootButton->setToolTip(QApplication::translate("MainWindow", "Reboot devices", 0));
#endif // QT_NO_TOOLTIP
        rebootButton->setText(QApplication::translate("MainWindow", "Reboot", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QWidget *topPanel;
    QHBoxLayout *horizontalLayout;
    QLabel *currentDateTime;
    QSpacerItem *horizontalSpacer;
    QPushButton *restartButton;
    QPushButton *shutdownButton;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *logo;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QWidget *loginForm;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label;
    QLineEdit *username;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QLineEdit *password;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setStyleSheet(QLatin1String("#centralWidget { background: rgba(32, 80, 96, 100); }\n"
"#topPanel { background-color:\n"
"qlineargradient(spread:reflect, x1:0.5, y1:0, x2:0, y2:0,\n"
"stop:0 rgba(91, 204, 233, 100), stop:1 rgba(32, 80, 96,\n"
"100)); }\n"
"#loginForm\n"
"{\n"
"background: rgba(0, 0, 0, 80);\n"
"border-radius: 8px;\n"
"}\n"
"QLabel { color: white; }\n"
"QLineEdit { border-radius: 3px; }\n"
"QPushButton\n"
"{\n"
"color: white;\n"
"background-color: #27a9e3;\n"
"border-width: 0px;\n"
"border-radius: 3px;\n"
"}\n"
"QPushButton:hover { background-color: #66c011; }\n"
"#centralWidget\n"
"{\n"
"background: rgba(32, 80, 96, 100);\n"
"border-image: url(:/images/source/login.png);\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        topPanel = new QWidget(centralWidget);
        topPanel->setObjectName(QStringLiteral("topPanel"));
        horizontalLayout = new QHBoxLayout(topPanel);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        currentDateTime = new QLabel(topPanel);
        currentDateTime->setObjectName(QStringLiteral("currentDateTime"));

        horizontalLayout->addWidget(currentDateTime);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        restartButton = new QPushButton(topPanel);
        restartButton->setObjectName(QStringLiteral("restartButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(restartButton->sizePolicy().hasHeightForWidth());
        restartButton->setSizePolicy(sizePolicy);
        restartButton->setMinimumSize(QSize(55, 55));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/source/restart.png"), QSize(), QIcon::Normal, QIcon::Off);
        restartButton->setIcon(icon);
        restartButton->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(restartButton);

        shutdownButton = new QPushButton(topPanel);
        shutdownButton->setObjectName(QStringLiteral("shutdownButton"));
        sizePolicy.setHeightForWidth(shutdownButton->sizePolicy().hasHeightForWidth());
        shutdownButton->setSizePolicy(sizePolicy);
        shutdownButton->setMinimumSize(QSize(55, 55));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/source/shutdown.png"), QSize(), QIcon::Normal, QIcon::Off);
        shutdownButton->setIcon(icon1);
        shutdownButton->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(shutdownButton);


        verticalLayout->addWidget(topPanel);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, 0);
        logo = new QLabel(centralWidget);
        logo->setObjectName(QStringLiteral("logo"));
        sizePolicy.setHeightForWidth(logo->sizePolicy().hasHeightForWidth());
        logo->setSizePolicy(sizePolicy);
        logo->setMinimumSize(QSize(150, 150));
        logo->setStyleSheet(QStringLiteral(""));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/images/source/logo.png")));

        horizontalLayout_2->addWidget(logo);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, 0);
        loginForm = new QWidget(centralWidget);
        loginForm->setObjectName(QStringLiteral("loginForm"));
        sizePolicy.setHeightForWidth(loginForm->sizePolicy().hasHeightForWidth());
        loginForm->setSizePolicy(sizePolicy);
        loginForm->setMinimumSize(QSize(350, 200));
        loginForm->setStyleSheet(QLatin1String("#loginForm{\n"
"border: 1px solid;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(loginForm);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(35, 35, 35, 35);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label = new QLabel(loginForm);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_8->addWidget(label);

        username = new QLineEdit(loginForm);
        username->setObjectName(QStringLiteral("username"));
        username->setMinimumSize(QSize(0, 25));

        horizontalLayout_8->addWidget(username);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_2 = new QLabel(loginForm);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_7->addWidget(label_2);

        password = new QLineEdit(loginForm);
        password->setObjectName(QStringLiteral("password"));
        password->setMinimumSize(QSize(0, 25));

        horizontalLayout_7->addWidget(password);


        verticalLayout_2->addLayout(horizontalLayout_7);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        pushButton = new QPushButton(loginForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(0, 25));

        verticalLayout_2->addWidget(pushButton);


        horizontalLayout_3->addWidget(loginForm);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        currentDateTime->setText(QApplication::translate("MainWindow", "4th october", 0));
        restartButton->setText(QString());
        shutdownButton->setText(QString());
        logo->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Usernam", 0));
        label_2->setText(QApplication::translate("MainWindow", "Password", 0));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave;
    QAction *actionClear;
    QAction *action2px;
    QAction *action5px;
    QAction *action10px;
    QAction *actionBlack;
    QAction *actionWhite;
    QAction *actionRed;
    QAction *actionGreen;
    QAction *actionBlue;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuBrush_Size;
    QMenu *menuBrush_Color;
    QMenu *menuType_here;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QStringLiteral("actionClear"));
        action2px = new QAction(MainWindow);
        action2px->setObjectName(QStringLiteral("action2px"));
        action5px = new QAction(MainWindow);
        action5px->setObjectName(QStringLiteral("action5px"));
        action10px = new QAction(MainWindow);
        action10px->setObjectName(QStringLiteral("action10px"));
        actionBlack = new QAction(MainWindow);
        actionBlack->setObjectName(QStringLiteral("actionBlack"));
        actionWhite = new QAction(MainWindow);
        actionWhite->setObjectName(QStringLiteral("actionWhite"));
        actionRed = new QAction(MainWindow);
        actionRed->setObjectName(QStringLiteral("actionRed"));
        actionGreen = new QAction(MainWindow);
        actionGreen->setObjectName(QStringLiteral("actionGreen"));
        actionBlue = new QAction(MainWindow);
        actionBlue->setObjectName(QStringLiteral("actionBlue"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuBrush_Size = new QMenu(menuBar);
        menuBrush_Size->setObjectName(QStringLiteral("menuBrush_Size"));
        menuBrush_Color = new QMenu(menuBar);
        menuBrush_Color->setObjectName(QStringLiteral("menuBrush_Color"));
        menuType_here = new QMenu(menuBar);
        menuType_here->setObjectName(QStringLiteral("menuType_here"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuBrush_Size->menuAction());
        menuBar->addAction(menuBrush_Color->menuAction());
        menuBar->addAction(menuType_here->menuAction());
        menuFile->addAction(actionSave);
        menuFile->addAction(actionClear);
        menuBrush_Size->addAction(action2px);
        menuBrush_Size->addAction(action5px);
        menuBrush_Size->addAction(action10px);
        menuBrush_Color->addAction(actionBlack);
        menuBrush_Color->addAction(actionWhite);
        menuBrush_Color->addAction(actionRed);
        menuBrush_Color->addAction(actionGreen);
        menuBrush_Color->addAction(actionBlue);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0));
        actionClear->setText(QApplication::translate("MainWindow", "Clear", 0));
        action2px->setText(QApplication::translate("MainWindow", "2px", 0));
        action5px->setText(QApplication::translate("MainWindow", "5px", 0));
        action10px->setText(QApplication::translate("MainWindow", "10px", 0));
        actionBlack->setText(QApplication::translate("MainWindow", "Black", 0));
        actionWhite->setText(QApplication::translate("MainWindow", "White", 0));
        actionRed->setText(QApplication::translate("MainWindow", "Red", 0));
        actionGreen->setText(QApplication::translate("MainWindow", "Green", 0));
        actionBlue->setText(QApplication::translate("MainWindow", "Blue", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuBrush_Size->setTitle(QApplication::translate("MainWindow", "Brush Size", 0));
        menuBrush_Color->setTitle(QApplication::translate("MainWindow", "Brush Color", 0));
        menuType_here->setTitle(QApplication::translate("MainWindow", "Type here", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

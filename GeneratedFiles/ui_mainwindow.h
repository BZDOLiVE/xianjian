/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
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
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *btnNewStart;
    QPushButton *btnLoadMemory;
    QPushButton *btnExitGame;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1080, 720);
        MainWindow->setMinimumSize(QSize(1080, 720));
        MainWindow->setMaximumSize(QSize(1080, 720));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/renwu/zhaolinger"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setIconSize(QSize(30, 30));
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btnNewStart = new QPushButton(centralWidget);
        btnNewStart->setObjectName(QStringLiteral("btnNewStart"));
        btnNewStart->setGeometry(QRect(130, 140, 280, 100));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/mainwindow/images/MainWindow/xindekaishi.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnNewStart->setIcon(icon1);
        btnNewStart->setIconSize(QSize(280, 100));
        btnNewStart->setFlat(true);
        btnLoadMemory = new QPushButton(centralWidget);
        btnLoadMemory->setObjectName(QStringLiteral("btnLoadMemory"));
        btnLoadMemory->setGeometry(QRect(130, 290, 280, 100));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/mainwindow/images/MainWindow/jiudehuiyi.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnLoadMemory->setIcon(icon2);
        btnLoadMemory->setIconSize(QSize(280, 100));
        btnLoadMemory->setFlat(true);
        btnExitGame = new QPushButton(centralWidget);
        btnExitGame->setObjectName(QStringLiteral("btnExitGame"));
        btnExitGame->setGeometry(QRect(130, 460, 280, 100));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/mainwindow/images/MainWindow/tuiyinjianghu.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnExitGame->setIcon(icon3);
        btnExitGame->setIconSize(QSize(280, 100));
        btnExitGame->setFlat(true);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1080, 23));
        MainWindow->setMenuBar(menuBar);
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\344\273\231\345\211\221", 0));
        btnNewStart->setText(QString());
        btnLoadMemory->setText(QString());
        btnExitGame->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

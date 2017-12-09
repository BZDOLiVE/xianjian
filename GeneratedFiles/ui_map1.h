/********************************************************************************
** Form generated from reading UI file 'map1.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAP1_H
#define UI_MAP1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_map1
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QPushButton *returnToMainWindow;
    QPushButton *btnBattle;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *map1)
    {
        if (map1->objectName().isEmpty())
            map1->setObjectName(QStringLiteral("map1"));
        map1->resize(800, 600);
        QIcon icon;
        icon.addFile(QStringLiteral("images/renwu/zhaolinger.png"), QSize(), QIcon::Normal, QIcon::Off);
        map1->setWindowIcon(icon);
        centralwidget = new QWidget(map1);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 800, 500));
        returnToMainWindow = new QPushButton(centralwidget);
        returnToMainWindow->setObjectName(QStringLiteral("returnToMainWindow"));
        returnToMainWindow->setGeometry(QRect(680, 520, 75, 23));
        btnBattle = new QPushButton(centralwidget);
        btnBattle->setObjectName(QStringLiteral("btnBattle"));
        btnBattle->setGeometry(QRect(380, 520, 75, 23));
        map1->setCentralWidget(centralwidget);
        menubar = new QMenuBar(map1);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        map1->setMenuBar(menubar);
        statusbar = new QStatusBar(map1);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        map1->setStatusBar(statusbar);

        retranslateUi(map1);

        QMetaObject::connectSlotsByName(map1);
    } // setupUi

    void retranslateUi(QMainWindow *map1)
    {
        map1->setWindowTitle(QApplication::translate("map1", "\344\273\231\345\211\221", 0));
        returnToMainWindow->setText(QApplication::translate("map1", "\350\277\224\345\233\236\344\270\273\350\217\234\345\215\225", 0));
        btnBattle->setText(QApplication::translate("map1", "battle", 0));
    } // retranslateUi

};

namespace Ui {
    class map1: public Ui_map1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAP1_H

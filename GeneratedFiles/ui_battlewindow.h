/********************************************************************************
** Form generated from reading UI file 'battlewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATTLEWINDOW_H
#define UI_BATTLEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_BattleWindow
{
public:
    QPushButton *normalAttack;
    QSpinBox *HpZhaolinger;
    QSpinBox *HpEnemy;
    QLabel *labelZhaolinger;
    QLabel *labelEnemy;
    QPushButton *btnExit;

    void setupUi(QDialog *BattleWindow)
    {
        if (BattleWindow->objectName().isEmpty())
            BattleWindow->setObjectName(QStringLiteral("BattleWindow"));
        BattleWindow->resize(600, 400);
        normalAttack = new QPushButton(BattleWindow);
        normalAttack->setObjectName(QStringLiteral("normalAttack"));
        normalAttack->setGeometry(QRect(30, 60, 75, 23));
        HpZhaolinger = new QSpinBox(BattleWindow);
        HpZhaolinger->setObjectName(QStringLiteral("HpZhaolinger"));
        HpZhaolinger->setGeometry(QRect(80, 10, 42, 22));
        HpEnemy = new QSpinBox(BattleWindow);
        HpEnemy->setObjectName(QStringLiteral("HpEnemy"));
        HpEnemy->setGeometry(QRect(490, 10, 42, 22));
        labelZhaolinger = new QLabel(BattleWindow);
        labelZhaolinger->setObjectName(QStringLiteral("labelZhaolinger"));
        labelZhaolinger->setGeometry(QRect(30, 10, 41, 16));
        labelEnemy = new QLabel(BattleWindow);
        labelEnemy->setObjectName(QStringLiteral("labelEnemy"));
        labelEnemy->setGeometry(QRect(410, 10, 54, 12));
        btnExit = new QPushButton(BattleWindow);
        btnExit->setObjectName(QStringLiteral("btnExit"));
        btnExit->setGeometry(QRect(460, 330, 75, 23));

        retranslateUi(BattleWindow);

        QMetaObject::connectSlotsByName(BattleWindow);
    } // setupUi

    void retranslateUi(QDialog *BattleWindow)
    {
        BattleWindow->setWindowTitle(QApplication::translate("BattleWindow", "Dialog", 0));
        normalAttack->setText(QApplication::translate("BattleWindow", "\346\224\273\345\207\273", 0));
        labelZhaolinger->setText(QApplication::translate("BattleWindow", "\350\265\265\347\201\265\345\204\277", 0));
        labelEnemy->setText(QApplication::translate("BattleWindow", "TextLabel", 0));
        btnExit->setText(QApplication::translate("BattleWindow", "\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class BattleWindow: public Ui_BattleWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATTLEWINDOW_H

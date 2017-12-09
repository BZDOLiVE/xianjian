/********************************************************************************
** Form generated from reading UI file 'battle.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATTLE_H
#define UI_BATTLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Battle
{
public:

    void setupUi(QDialog *Battle)
    {
        if (Battle->objectName().isEmpty())
            Battle->setObjectName(QStringLiteral("Battle"));
        Battle->resize(400, 300);

        retranslateUi(Battle);

        QMetaObject::connectSlotsByName(Battle);
    } // setupUi

    void retranslateUi(QDialog *Battle)
    {
        Battle->setWindowTitle(QApplication::translate("Battle", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Battle: public Ui_Battle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATTLE_H

#ifndef BATTLE_H
#define BATTLE_H

#include <QDialog>
#include <QDebug>
#include "Hero.h"


namespace Ui {
class Battle;
}

class Battle : public QDialog
{
    Q_OBJECT

public:
    explicit Battle(QWidget *parent = 0);
    ~Battle();
    void receiveInformationFromMap(Hero *_zhaolinger);
private slots:
    void on_btnClose_clicked();

    void on_btnLvlUp_clicked();

signals:


private:
    Ui::Battle *ui;
    Hero *zhaolinger;
};

#endif // BATTLE_H

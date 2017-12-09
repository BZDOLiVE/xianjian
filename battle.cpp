#include "battle.h"
#include "ui_battle.h"

Battle::Battle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Battle)
{
    ui->setupUi(this);
    zhaolinger = NULL;
}

Battle::~Battle()
{
    delete ui;
}

void Battle::receiveInformationFromMap(Hero *_zhaolinger)
{
    zhaolinger = _zhaolinger;
}

void Battle::on_btnLvlUp_clicked()
{
    zhaolinger->LevelUp();

}

void Battle::on_btnClose_clicked()
{
    this->close();
}

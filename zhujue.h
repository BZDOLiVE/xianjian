#ifndef ZHUJUE_H
#define ZHUJUE_H

#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsScene>
#include <QPainter>
#include <QStyleOption>
#include <QDebug>
#include "mapgraphicitem.h"
#include "map1.h"

class Zhujue : public MapGraphicItem
{
public:
    Zhujue(QString _name);
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget) Q_DECL_OVERRIDE;

    void handleCollisions();//碰撞检测
    void advance(int phase);


    int getLevel();
    void setLevel(int _level);
    void LevelUp();

    int getHp();
    void changeHp(int _Hp);

    QString getName();

private:
    QString m_strName;
    int m_iHp;
    int m_iMana;

    int m_iAdAtk;
    int m_iApAtk;
    int m_idef;

    int m_iLevel;
    int m_iExp;
    int m_iLvlUpExp;

};

#endif // ZHUJUE_H

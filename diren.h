#ifndef DIREN_H
#define DIREN_H

#include "zhujue.h"
//#include "battlewindow.h"
#include "map1.h"

class Diren : public  MapGraphicItem
{
    Diren(QString _name, Zhujue *_zhaolinger);
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget) Q_DECL_OVERRIDE;
    void handleCollisions();//碰撞检测
    void advance(int phase);

    int getLevel();
    void setLevel(int _level);

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

    //在这个怪物点想要几个怪物哪种怪物就在这设置几
    int shilaimuCount;
    int guaiwu2Count;
    int guaiwu3Count;



    Zhujue *zhaolinger;

    //BattleWindow *battleWindow;

};

#endif // DIREN_H

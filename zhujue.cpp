#include "zhujue.h"

Zhujue::Zhujue(QString _name)
{
    m_strName = _name;
    m_iHp = 100;
    m_iApAtk = 10;
    m_iLevel = 1;
    m_iLvlUpExp = 100;


    pixmapWidth = 100;
    pixmapHeight = 100;
}

void Zhujue::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    QPixmap pixmap(":/images/renwu/zhaolinger");
    painter->drawPixmap(this->x(),this->y(),pixmapWidth,pixmapHeight,pixmap);

}

//碰撞检测
void Zhujue::handleCollisions()
{
    if(!collidingItems().isEmpty())
    {
        //qDebug()<<"pengzhuang";
    }
    else
    {
        //qDebug()<<"!!!";
    }
}

void Zhujue::advance(int phase)
{
    if(! phase)
        return;

    handleCollisions();
}




int Zhujue::getLevel(){return m_iLevel;}
void Zhujue::setLevel(int _level){m_iLevel = _level;}
void Zhujue::LevelUp(){m_iLevel++;}
int Zhujue::getHp(){return m_iHp;}
void Zhujue::changeHp(int _Hp){m_iHp += _Hp;}
QString Zhujue::getName(){return m_strName;}

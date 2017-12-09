#include "diren.h"

Diren::Diren(QString _name, Zhujue *_zhaolinger)
{
    m_strName = _name;
    m_iHp = 100;
    m_iApAtk = 10;
    m_iLevel = 1;

    zhaolinger = _zhaolinger;


    pixmapWidth = 100;
    pixmapHeight = 66;
}

void Diren::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    QPixmap pixmap(":/images/diren/shilaimu");
    painter->drawPixmap(this->x(),this->y(),pixmapWidth,pixmapHeight,pixmap);
}

//碰撞检测
void Diren::handleCollisions()
{
    if(!collidingItems().isEmpty())
    {
        //battleWindow = new BattleWindow;
        //battleWindow->setHeroAndEnemy(zhaolinger, this);
        //battleWindow->exec();
        qDebug()<<"pengzhuang";
        delete this;
    }
}

void Diren::advance(int phase)
{
    if(! phase)
        return;

    handleCollisions();
}




int Diren::getLevel(){return m_iLevel;}
void Diren::setLevel(int _level){m_iLevel = _level;}
int Diren::getHp(){return m_iHp;}
void Diren::changeHp(int _Hp){m_iHp += _Hp;}
QString Diren::getName(){return m_strName;}

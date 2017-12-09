#ifndef MAPGRAPHICITEM_H
#define MAPGRAPHICITEM_H

#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsScene>
#include <QPainter>
#include <QStyleOption>
#include <QDebug>

class MapGraphicItem : public QGraphicsItem
{
public:
    MapGraphicItem();
    //Hero();
    QRectF boundingRect() const Q_DECL_OVERRIDE;
    QPainterPath shape() const Q_DECL_OVERRIDE;

    void setStartPos(qreal x, qreal y);//设置起始绘制地点


protected:
    qreal startx;
    qreal starty;
    qreal pixmapWidth;
    qreal pixmapHeight;


};

#endif // MAPGRAPHICITEM_H

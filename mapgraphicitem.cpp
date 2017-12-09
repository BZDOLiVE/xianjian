#include "mapgraphicitem.h"


MapGraphicItem::MapGraphicItem()
{

}

QRectF MapGraphicItem::boundingRect() const
{
    return QRectF(this->x(), this->y(), pixmapWidth, pixmapHeight);
}

QPainterPath MapGraphicItem::shape() const
{
    QPainterPath path;
    path.addRect(this->x(), this->y(), pixmapWidth, pixmapHeight);
    return path;
}

void MapGraphicItem::setStartPos(qreal _x, qreal _y)
{
    //设置起始绘制地点
    this->setPos(_x, _y);
}




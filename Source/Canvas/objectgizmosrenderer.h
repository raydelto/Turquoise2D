#pragma once

#include "QGraphicsItem"
#include "QPainter"
#include "mathoperations.h"
#include "Canvas/gameitem.h"

class GameItem;
class GraphicsScene;
class ObjectGizmosRenderer : public QGraphicsItem
{
public:
    GameItem *gameItem;
    GraphicsScene *scene=NULL;
    ObjectGizmosRenderer(GameItem* _gameItem);
    void paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget = 0);
    QRectF boundingRect() const;
};

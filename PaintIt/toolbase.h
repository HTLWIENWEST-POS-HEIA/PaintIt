#ifndef TOOLBASE_H
#define TOOLBASE_H

#include <QPen>
#include <QGraphicsItem>
#include "mytoolproperties.h"
#include <QGraphicsSceneEvent>

class ToolBase {
public:
    virtual QGraphicsItem* mousePressed(QGraphicsSceneMouseEvent *event, MyToolProperties *myToolProperties) { (void)event; (void)myToolProperties; return nullptr; };
    virtual void mouseMoved(QGraphicsSceneMouseEvent *event) { (void)event; };
    virtual void mouseReleased(QGraphicsSceneMouseEvent *event) { (void)event; };
    virtual ~ToolBase(){};
};

#endif

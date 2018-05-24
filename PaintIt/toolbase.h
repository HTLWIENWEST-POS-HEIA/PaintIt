#ifndef TOOLBASE_H
#define TOOLBASE_H

#include <QPen>
#include <QGraphicsItem>
#include <QGraphicsSceneEvent>

class ToolBase {
public:
    virtual QGraphicsItem* mousePressed(QGraphicsSceneMouseEvent *event, QPen myPrimaryPen, QPen mySecondaryPen) { (void)event; (void)myPrimaryPen; (void)mySecondaryPen; return nullptr; };
    virtual void mouseMoved(QGraphicsSceneMouseEvent *event) { (void)event; };
    virtual ~ToolBase() = default;
};

#endif

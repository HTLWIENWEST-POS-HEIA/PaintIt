#ifndef MYERASETOOL_H
#define MYERASETOOL_H

#include "toolbase.h"
#include <QGraphicsPathItem>

class MyEraseTool : public ToolBase {
public:
    QGraphicsItem* mousePressed(QGraphicsSceneMouseEvent *event, QPen myPrimaryPen, QPen mySecondaryPen);
    void mouseMoved(QGraphicsSceneMouseEvent *event);

private:
    QPoint lastPoint, firstPoint;
    QGraphicsPathItem *pathItem;
    QPainterPath *painterPath;
};

#endif

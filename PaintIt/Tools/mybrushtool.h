#ifndef MYBRUSHTOOL_H
#define MYBRUSHTOOL_H

#include "toolbase.h"

class MyBrushTool : public ToolBase {
private:
    QPoint lastPoint, firstPoint;
    QGraphicsPathItem *pathItem;
    QPainterPath *painterPath;

public:
    QGraphicsItem* mousePressed(QGraphicsSceneMouseEvent *event, QPen myPrimaryPen, QPen mySecondaryPen);
    void mouseMoved(QGraphicsSceneMouseEvent *event);
};

#endif

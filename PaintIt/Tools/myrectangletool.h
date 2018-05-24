#ifndef MYRECTANGLETOOL_H
#define MYRECTANGLETOOL_H

#include "toolbase.h"
#include <QGraphicsRectItem>

class MyRectangleTool : public ToolBase {
public:
    QGraphicsItem* mousePressed(QGraphicsSceneMouseEvent *event, QPen myPrimaryPen, QPen mySecondaryPen);
    void mouseMoved(QGraphicsSceneMouseEvent *event);

private:
    QRect *myRect;
    bool xFlipped = false;
    bool yFlipped = false;
    QPoint lastPoint, firstPoint;
    QGraphicsRectItem *myRectItem;
};

#endif

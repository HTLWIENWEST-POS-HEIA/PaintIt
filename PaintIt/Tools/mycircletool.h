#ifndef MYCIRCLETOOL_H
#define MYCIRCLETOOL_H

#include <QRect>
#include "toolbase.h"
#include <QGraphicsEllipseItem>

class MyCircleTool : public ToolBase {
public:
    QGraphicsItem *mousePressed(QGraphicsSceneMouseEvent *event, MyToolProperties *myToolProperties);
    void mouseMoved(QGraphicsSceneMouseEvent *event);

private:
    QRect *myRect;
    QGraphicsEllipseItem *myEllipseItem;
    QPoint lastPoint, firstPoint;
};

#endif

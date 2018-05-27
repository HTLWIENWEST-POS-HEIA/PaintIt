#ifndef MYERASETOOL_H
#define MYERASETOOL_H

#include "toolbase.h"
#include <QGraphicsPathItem>

class MyEraseTool : public ToolBase {
public:
    QGraphicsItem* mousePressed(QGraphicsSceneMouseEvent *event, MyToolProperties *myToolProperties);
    void mouseMoved(QGraphicsSceneMouseEvent *event);

private:
    QPoint lastPoint, firstPoint;
    QGraphicsPathItem *pathItem;
    QPainterPath *painterPath;
};

#endif

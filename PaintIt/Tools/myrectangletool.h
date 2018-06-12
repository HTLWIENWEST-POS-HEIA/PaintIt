#ifndef MYRECTANGLETOOL_H
#define MYRECTANGLETOOL_H

#include <QRect>
#include "toolbase.h"

class MyRectangleTool : public ToolBase {
public:
    QGraphicsItem *mousePressed(QGraphicsSceneMouseEvent *event, MyToolProperties *myToolProperties);
    void mouseMoved(QGraphicsSceneMouseEvent *event);

private:
    QPoint lastpoint;
    QPoint firstpoint;
    int mouseclick = 0;
    QRect *rect;
    QGraphicsRectItem *rect_item;

};

#endif

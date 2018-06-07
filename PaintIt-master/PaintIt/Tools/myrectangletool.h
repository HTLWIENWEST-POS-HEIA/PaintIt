#ifndef MYRECTANGLETOOL_H
#define MYRECTANGLETOOL_H

#include "toolbase.h"

class MyRectangleTool : public ToolBase {
public:
    QGraphicsItem *mousePressed(QGraphicsSceneMouseEvent *event, MyToolProperties *myToolProperties);
    void mouseMoved(QGraphicsSceneMouseEvent *event);
};

#endif

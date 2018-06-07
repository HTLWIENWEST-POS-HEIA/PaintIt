#ifndef MYERASETOOL_H
#define MYERASETOOL_H

#include "toolbase.h"

class MyEraseTool : public ToolBase {
public:
    QGraphicsItem *mousePressed(QGraphicsSceneMouseEvent *event, MyToolProperties *myToolProperties);
    void mouseMoved(QGraphicsSceneMouseEvent *event);
};

#endif

#ifndef MYCIRCLETOOL_H
#define MYCIRCLETOOL_H

#include "toolbase.h"

class MyCircleTool : public ToolBase {
public:
    QGraphicsItem *mousePressed(QGraphicsSceneMouseEvent *event, MyToolProperties *myToolProperties);
    void mouseMoved(QGraphicsSceneMouseEvent *event);
};

#endif

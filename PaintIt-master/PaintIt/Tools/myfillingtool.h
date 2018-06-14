#ifndef MYFILLINGTOLL_H
#define MYFILLINGTOLL_H

#include "toolbase.h"

class MyFillingTool : public ToolBase {
public:
    QGraphicsItem *mousePressed(QGraphicsSceneMouseEvent *event, MyToolProperties *myToolProperties);
    void mouseMoved(QGraphicsSceneMouseEvent *event);
};

#endif

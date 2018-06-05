#ifndef MYLINETOOL_H
#define MYLINETOOL_H

#include "toolbase.h"

class MyLineTool : public ToolBase {
public:
    QGraphicsItem *mousePressed(QGraphicsSceneMouseEvent *event, MyToolProperties *myToolProperties);
    void mouseMoved(QGraphicsSceneMouseEvent *event);
};

#endif // MYLINETOOL_H

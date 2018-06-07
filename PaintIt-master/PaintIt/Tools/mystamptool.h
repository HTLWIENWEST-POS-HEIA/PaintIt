#ifndef MYSTAMPTOOL_H
#define MYSTAMPTOOL_H

#include "toolbase.h"

class MyStampTool : public ToolBase {
public:
    QGraphicsItem *mousePressed(QGraphicsSceneMouseEvent *event, MyToolProperties *myToolProperties);
    void mouseMoved(QGraphicsSceneMouseEvent *event);
};

#endif // MYSTAMPTOOL_H

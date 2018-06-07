#ifndef MYSPRAYTOOL_H
#define MYSPRAYTOOL_H

#include "toolbase.h"

class MySprayTool : public ToolBase {
public:
    QGraphicsItem *mousePressed(QGraphicsSceneMouseEvent *event, MyToolProperties *myToolProperties);
    void mouseMoved(QGraphicsSceneMouseEvent *event);
};

#endif // MYSPRAYTOOL_H

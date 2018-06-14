#ifndef MYTEXTTOOL_H
#define MYTEXTTOOL_H

#include "toolbase.h"

class MyTextTool : public ToolBase {
public:
    void mouseMoved(QGraphicsSceneMouseEvent *event);
    QGraphicsItem *mousePressed(QGraphicsSceneMouseEvent *event, MyToolProperties *myToolProperties);

private:
    bool editingMode = false;
    QGraphicsTextItem *myTextItem;
};

#endif

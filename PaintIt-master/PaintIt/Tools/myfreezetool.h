#ifndef MYFREEZETOOL_H
#define MYFREEZETOOL_H

#include "toolbase.h"

class MyFreezeTool : public ToolBase {
private:
    QPixmap myPixmap;

public:
    MyFreezeTool(QPixmap pixmap);
    QGraphicsItem *mousePressed(QGraphicsSceneMouseEvent *event, MyToolProperties *myToolProperties);
    void mouseMoved(QGraphicsSceneMouseEvent *event);
};

#endif // MYFREEZETOOL_H

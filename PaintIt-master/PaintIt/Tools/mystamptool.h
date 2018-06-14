#ifndef MYSTAMPTOOL_H
#define MYSTAMPTOOL_H

#include <cmath>
#include "toolbase.h"
#include <QTransform>
#include <QPainterPath>
#include <QGraphicsPathItem>

class MyStampTool : public ToolBase {
public:
    QGraphicsItem *mousePressed(QGraphicsSceneMouseEvent *event, MyToolProperties *myToolProperties);

private:
    QPainterPath *painterPath;
    QGraphicsPathItem *painterPathItem;
};

#endif // MYSTAMPTOOL_H

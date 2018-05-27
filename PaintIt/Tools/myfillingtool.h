#ifndef MYFILLINGTOLL_H
#define MYFILLINGTOLL_H

#include <Queue>
#include <QPixmap>
#include "toolbase.h"

class MyFillingTool : public ToolBase {
public:
    MyFillingTool(QPixmap myPixmap);
    void mouseMoved(QGraphicsSceneMouseEvent *event);
    QGraphicsItem *mousePressed(QGraphicsSceneMouseEvent *event, MyToolProperties *myToolProperties);

private:
    QPoint origin;
    QImage myImage;
    QGraphicsPixmapItem *myPixmapItem;
    void fill(int x, int y, QColor fillingColor);
};

#endif

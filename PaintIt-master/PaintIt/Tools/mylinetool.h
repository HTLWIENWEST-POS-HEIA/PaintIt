#ifndef MYLINETOOL_H
#define MYLINETOOL_H

#include "toolbase.h"
#include <QLine>
#include <QGraphicsLineItem>
#include <QMessageBox>

class MyLineTool : public ToolBase {
public:
    QGraphicsItem *mousePressed(QGraphicsSceneMouseEvent *event, MyToolProperties *myToolProperties);
    void mouseMoved(QGraphicsSceneMouseEvent *event);
private:
    QGraphicsLineItem *myLineItem;
    QLine *myLine;
    QPoint p1, p2;
    int clickCounter = 0;
};

#endif // MYLINETOOL_H

#ifndef MYSPRAYTOOL_H
#define MYSPRAYTOOL_H

#include "toolbase.h"
#include <QGraphicsRectItem>
#include <QGraphicsItem>
#include <QTimer>
#include <QObject>

class MySprayTool : public QObject, public ToolBase {
Q_OBJECT

public slots:
    void slotS();
signals:

public:
    int directionCollector[4] = {0,0,0,0};
    int index = 0;
    QGraphicsItem* mousePressed(QGraphicsSceneMouseEvent *event, MyToolProperties *myToolProperties);
    void mouseMoved(QGraphicsSceneMouseEvent *event);
    void mouseReleased(QGraphicsSceneMouseEvent *event);
    void createScene1();
    void setDot();
    int checkDirection(int direction);
    int checkRand(int RandomX, int RandomY);
    QTimer *timer = new QTimer();

private:
    QPen pen;
    int radius;
    QPoint lastPoint, firstPoint;
    QGraphicsPathItem *pathItem = nullptr;
    QPainterPath *painterPath = nullptr;
    QRect *myRect;
    bool xFlipped = false;
    bool yFlipped = false;
    QGraphicsRectItem *myRectItem;

    MyToolProperties myToolProps;
};

#endif

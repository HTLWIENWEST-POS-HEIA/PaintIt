#include "myrectangletool.h"
#include <QDebug>

QGraphicsItem* MyRectangleTool::mousePressed(QGraphicsSceneMouseEvent *event, QPen myPrimaryPen, QPen mySecondaryPen) {
    if(event->button() == Qt::LeftButton) {
        firstPoint = event->lastScenePos().toPoint();

        myRect = new QRect(firstPoint.x(), firstPoint.y(), 0, 0);
        myRectItem = new QGraphicsRectItem(*(myRect));
        myRectItem->setPen(myPrimaryPen);
        myRectItem->setBrush(mySecondaryPen.color());
        return (QGraphicsItem*)myRectItem;
    }
    return nullptr;
}

void MyRectangleTool::mouseMoved(QGraphicsSceneMouseEvent *event) {
    if((event->buttons() && Qt::LeftButton)) {
        lastPoint = event->lastScenePos().toPoint();

        if(firstPoint.x() < lastPoint.x() && firstPoint.y() < lastPoint.y()) {
            myRect->setTopLeft(firstPoint);
            myRect->setBottomRight(lastPoint);
        }
        else if(firstPoint.x() < lastPoint.x() && firstPoint.y() > lastPoint.y()) {
            myRect->setBottomLeft(firstPoint);
            myRect->setTopRight(lastPoint);
        }
        else if(firstPoint.x() > lastPoint.x() && firstPoint.y() < lastPoint.y()) {
            myRect->setTopRight(firstPoint);
            myRect->setBottomLeft(lastPoint);
        }
        else {
            myRect->setBottomRight(firstPoint);
            myRect->setTopLeft(lastPoint);
        }
        myRectItem->setRect(*(myRect));
    }
}

#include "mycircletool.h"

QGraphicsItem *MyCircleTool::mousePressed(QGraphicsSceneMouseEvent *event, MyToolProperties *myToolProperties) {
    if(event->button() == Qt::LeftButton) {
        firstPoint = event->lastScenePos().toPoint();
        myRect = new QRect(firstPoint.x(), firstPoint.y(), 0, 0);
        myEllipseItem = new QGraphicsEllipseItem(*(myRect));
        QPen myPen = myToolProperties->myPrimaryPen;
        myPen.setWidth(myToolProperties->myLineWidth);
        myEllipseItem->setPen(myPen);
        myEllipseItem->setBrush(myToolProperties->mySecondaryPen.color());
        return (QGraphicsItem*)myEllipseItem;
    }
    return nullptr;
}

void MyCircleTool::mouseMoved(QGraphicsSceneMouseEvent *event) {
    if((event->buttons() && Qt::LeftButton)) {
        lastPoint = event->lastScenePos().toPoint();
        myRect->setBottomRight(lastPoint);
        myEllipseItem->setRect(*(myRect));
    }
}

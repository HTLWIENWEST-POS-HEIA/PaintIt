#include "myerasetool.h"

QGraphicsItem* MyEraseTool::mousePressed(QGraphicsSceneMouseEvent *event, QPen myPrimaryPen, QPen mySecondaryPen) {
    (void)mySecondaryPen;
    if(event->button() == Qt::LeftButton) {
        firstPoint = event->lastScenePos().toPoint();
        painterPath = new QPainterPath;
        pathItem = new QGraphicsPathItem(*(painterPath));
        pathItem->setPen(QPen(Qt::white, myPrimaryPen.width(), myPrimaryPen.style(), myPrimaryPen.capStyle()));
        return (QGraphicsItem*)pathItem;
    }
    return nullptr;
}

void MyEraseTool::mouseMoved(QGraphicsSceneMouseEvent *event) {
    if((event->buttons() && Qt::LeftButton)) {
        lastPoint = event->lastScenePos().toPoint();

        QPainterPath subPath;
        subPath.moveTo(firstPoint);
        subPath.lineTo(lastPoint);

        painterPath->addPath(subPath);
        pathItem->setPath(*(painterPath));

        firstPoint = lastPoint;
    }
}

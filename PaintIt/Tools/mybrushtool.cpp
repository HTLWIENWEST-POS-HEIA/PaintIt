#include "mybrushtool.h"

QGraphicsItem* MyBrushTool::mousePressed(QGraphicsSceneMouseEvent *event, QPen myPrimaryPen, QPen mySecondaryPen) {
    (void)mySecondaryPen;
    if(event->button() == Qt::LeftButton) {
        firstPoint = event->lastScenePos().toPoint();
        painterPath = new QPainterPath;
        painterPath->moveTo(firstPoint);
        painterPath->lineTo(firstPoint.x() + 0.1, firstPoint.y());
        pathItem = new QGraphicsPathItem(*(painterPath));
        pathItem->setPen(myPrimaryPen);
        return (QGraphicsItem*)pathItem;
    }
    return nullptr;
}

void MyBrushTool::mouseMoved(QGraphicsSceneMouseEvent *event) {
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

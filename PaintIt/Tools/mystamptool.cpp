#include "mystamptool.h"
#include <QDebug>

QGraphicsItem* MyStampTool::mousePressed(QGraphicsSceneMouseEvent *event, MyToolProperties *myToolProperties) {
    if(event->button() == Qt::LeftButton) {
        painterPath = new QPainterPath();
        QPoint p = event->lastScenePos().toPoint();
        int stampSize = myToolProperties->myStampSize;

        if(myToolProperties->myStamp == "triangle") {
            painterPath->moveTo(p.x() - (stampSize / 2), p.y() + (stampSize / 2));
            painterPath->lineTo(p.x(), p.y() - (stampSize / 2));
            painterPath->lineTo(p.x() + (stampSize / 2), p.y() + (stampSize / 2));
            painterPath->lineTo(p.x() - (stampSize / 2), p.y() + (stampSize / 2));
        }
        else if(myToolProperties->myStamp == "star") {
            painterPath->moveTo(p.x(), p.y() - (stampSize / 2));
            painterPath->lineTo(p.x() + (stampSize / 2) * sin(3.1415/5), p.y() + (stampSize / 2) * cos(3.1415/5));
            painterPath->lineTo(p.x() - (stampSize / 2) * cos(3.1415/10), p.y() - (stampSize / 2) * sin(3.1415/10));
            painterPath->lineTo(p.x() + (stampSize / 2) * cos(3.1415/10), p.y() - (stampSize / 2) * sin(3.1415/10));
            painterPath->lineTo(p.x() - (stampSize / 2) * sin(3.1415/5), p.y() + (stampSize / 2) * cos(3.1415/5));
            painterPath->lineTo(p.x(), p.y() - (stampSize / 2));
        }
        else if(myToolProperties->myStamp == "rectangle") {
            painterPath->moveTo(p.x() - (stampSize / 2), p.y() - (stampSize / 2));
            painterPath->lineTo(p.x() + (stampSize / 2), p.y() - (stampSize / 2));
            painterPath->lineTo(p.x() + (stampSize / 2), p.y() + (stampSize / 2));
            painterPath->lineTo(p.x() - (stampSize / 2), p.y() + (stampSize / 2));
            painterPath->lineTo(p.x() - (stampSize / 2), p.y() - (stampSize / 2));
        }
        else if(myToolProperties->myStamp == "arrowRight") {
            painterPath->moveTo(p.x() - (stampSize / 2), p.y() - (stampSize * 0.25));
            painterPath->lineTo(p.x() - (stampSize / 2), p.y() + (stampSize * 0.25));
            painterPath->lineTo(p.x(), p.y() + (stampSize * 0.25));
            painterPath->lineTo(p.x(), p.y() + (stampSize / 2));
            painterPath->lineTo(p.x() + (stampSize / 2), p.y());
            painterPath->lineTo(p.x(), p.y() - (stampSize / 2));
            painterPath->lineTo(p.x(), p.y() - (stampSize *0.25));
            painterPath->lineTo(p.x() - (stampSize / 2), p.y() - (stampSize * 0.25));
        }
        else if(myToolProperties->myStamp == "arrowLeft") {
            painterPath->moveTo(p.x() + (stampSize / 2), p.y() + (stampSize * 0.25));
            painterPath->lineTo(p.x() + (stampSize / 2), p.y() - (stampSize * 0.25));
            painterPath->lineTo(p.x(), p.y() - (stampSize * 0.25));
            painterPath->lineTo(p.x(), p.y() - (stampSize / 2));
            painterPath->lineTo(p.x() - (stampSize / 2), p.y());
            painterPath->lineTo(p.x(), p.y() + (stampSize / 2));
            painterPath->lineTo(p.x(), p.y() + (stampSize *0.25));
            painterPath->lineTo(p.x() + (stampSize / 2), p.y() + (stampSize * 0.25));
        }
        else if(myToolProperties->myStamp == "arrowDown") {
            painterPath->moveTo(p.x() - (stampSize * 0.25), p.y() - (stampSize / 2));
            painterPath->lineTo(p.x() - (stampSize * 0.25), p.y());
            painterPath->lineTo(p.x() - (stampSize / 2), p.y());
            painterPath->lineTo(p.x(), p.y() + (stampSize /2));
            painterPath->lineTo(p.x() + (stampSize / 2), p.y());
            painterPath->lineTo(p.x() + (stampSize *0.25),p.y());
            painterPath->lineTo(p.x() + (stampSize *0.25),p.y() - (stampSize/2));
            painterPath->lineTo(p.x() - (stampSize * 0.25), p.y() - (stampSize / 2));

        }
        else if(myToolProperties->myStamp == "arrowUp") {
            painterPath->moveTo(p.x() + (stampSize * 0.25), p.y() + (stampSize / 2));
            painterPath->lineTo(p.x() + (stampSize * 0.25), p.y());
            painterPath->lineTo(p.x() + (stampSize / 2), p.y());
            painterPath->lineTo(p.x(), p.y() - (stampSize /2));
            painterPath->lineTo(p.x() - (stampSize / 2), p.y());
            painterPath->lineTo(p.x() - (stampSize *0.25),p.y());
            painterPath->lineTo(p.x() - (stampSize *0.25),p.y() + (stampSize/2));
            painterPath->lineTo(p.x() + (stampSize * 0.25), p.y() + (stampSize / 2));

        }


        painterPath->setFillRule(Qt::WindingFill);
        painterPathItem = new QGraphicsPathItem(*painterPath);
        myToolProperties->myPrimaryPen.setWidth(myToolProperties->myLineWidth);
        painterPathItem->setPen(myToolProperties->myPrimaryPen);
        painterPathItem->setBrush(myToolProperties->mySecondaryPen.brush());
        return (QGraphicsItem*)painterPathItem;
    }
    return nullptr;
}

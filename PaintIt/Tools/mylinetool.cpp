#include "mylinetool.h"

QGraphicsItem *MyLineTool::mousePressed(QGraphicsSceneMouseEvent *event, MyToolProperties *myToolProperties) {

    if(clickCounter == 0) {
        clickCounter ++;
        p1 = event->scenePos().toPoint();
    }
    //Use Primary Color
    else if (clickCounter == 1 && event->button() == Qt::LeftButton) {
        clickCounter = 0;
        p2 = event->scenePos().toPoint();
        myLine = new QLine();
        myLine->setP1(p1);
        myLine->setP2(p2);
        myLineItem = new QGraphicsLineItem(*myLine);
        myLineItem->setPen(myToolProperties->myPrimaryPen.color());
        return (QGraphicsItem*)myLineItem;
        //QMessageBox::information(0,"Information",QString::number(p1.x()) + ", " + QString::number(p1.y()) + " ---- " + QString::number(p2.x()) + ", " + QString::number(p2.y()),QMessageBox::Ok);
    }
    //Use Secondary Color
    else if (clickCounter == 1 && event->button() == Qt::RightButton){
        clickCounter = 0;
        p2 = event->scenePos().toPoint();
        myLine = new QLine();
        myLine->setP1(p1);
        myLine->setP2(p2);
        myLineItem = new QGraphicsLineItem(*myLine);
        myLineItem->setPen(myToolProperties->mySecondaryPen.color());
        return (QGraphicsItem*)myLineItem;
        //QMessageBox::information(0,"Information",QString::number(p1.x()) + ", " + QString::number(p1.y()) + " ---- " + QString::number(p2.x()) + ", " + QString::number(p2.y()),QMessageBox::Ok);
    }

    return nullptr;
}

void MyLineTool::mouseMoved(QGraphicsSceneMouseEvent *event) {
    //myLine->setP2(event->lastScenePos().toPoint());
    //myLineItem->setLine(myLine);
}

#include "mylinetool.h"

QGraphicsItem *MyLineTool::mousePressed(QGraphicsSceneMouseEvent *event, MyToolProperties *myToolProperties) {

    if(clickCounter == 0 && (event->button() == Qt::LeftButton || event->button() == Qt::RightButton)) {
        clickCounter ++;
        p1 = event->scenePos().toPoint();
        myLine = new QLine();
        myLine->setP1(p1);
        myLineItem = new QGraphicsLineItem();
    }
    //Use Primary Color
    else if (clickCounter == 1 && event->button() == Qt::LeftButton) {
        clickCounter = 0;
        p2 = event->scenePos().toPoint();
        myLine->setP2(p2);
        myLineItem->setLine(*myLine);
        myLineItem->setPen(myToolProperties->myPrimaryPen.color());
        //QMessageBox::information(0,"Information",QString::number(p1.x()) + ", " + QString::number(p1.y()) + " ---- " + QString::number(p2.x()) + ", " + QString::number(p2.y()),QMessageBox::Ok);
    }
    //Use Secondary Color
    else if (clickCounter == 1 && event->button() == Qt::RightButton){
        clickCounter = 0;
        p2 = event->scenePos().toPoint();
        myLine->setP2(p2);
        myLineItem->setLine(*myLine);
        myLineItem->setPen(myToolProperties->mySecondaryPen.color());
        //QMessageBox::information(0,"Information",QString::number(p1.x()) + ", " + QString::number(p1.y()) + " ---- " + QString::number(p2.x()) + ", " + QString::number(p2.y()),QMessageBox::Ok);
    }
    if(myLineItem != nullptr && clickCounter == 0){
        //Temporary pen template created and filled with color from primary or secondary pen to allow editing the line width
        QPen TempPen = myLineItem->pen();
        TempPen.setWidth(myToolProperties->myLineWidth);
        myLineItem->setPen(TempPen);
        return (QGraphicsItem*)myLineItem;
    }
    return nullptr;
}

void MyLineTool::mouseMoved(QGraphicsSceneMouseEvent *event) {
    //To see the line, click once and hold the button
    myLine->setP2(event->lastScenePos().toPoint());
    myLineItem->setLine(*myLine);
}

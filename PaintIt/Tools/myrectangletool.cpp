#include "myrectangletool.h"
#include <QMessageBox>

QGraphicsItem *MyRectangleTool::mousePressed(QGraphicsSceneMouseEvent *event, MyToolProperties *myToolProperties) {


    if((this->mouseclick==0) && event->button()==Qt::LeftButton){
        mouseclick++;
        firstpoint = event->scenePos().toPoint();

       // QMessageBox::information(0,"Information", "Eins", QMessageBox::Ok);
        rect=new QRect(firstpoint.x(),firstpoint.y(),0,0);
        rect_item = new QGraphicsRectItem(*rect);
        rect_item->setPen(myToolProperties->myPrimaryPen);
        return (QGraphicsItem*)rect_item;
    }

    else if(this->mouseclick==1 && event->button()==Qt::LeftButton){
        mouseclick=0;
        lastpoint = event->scenePos().toPoint();
       // QMessageBox::information(0,"Information", "Zwei", QMessageBox::Ok);
       // rect_item->rect().setBottomRight(lastpoint);
    }

        if(firstpoint.x() > lastpoint.x() && firstpoint.y()>lastpoint.y()){
            rect->setTopLeft(lastpoint);
            rect->setBottomRight(firstpoint);
            rect_item->setRect(*rect);

        }
        else if(lastpoint.x() > firstpoint.x() && lastpoint.y()>firstpoint.y()){
            rect->setTopLeft(firstpoint);
            rect->setBottomRight(lastpoint);

     //   rect->setBottomRight(lastpoint);
        rect_item->setRect(*rect);
    }



    return nullptr;
}

void MyRectangleTool::mouseMoved(QGraphicsSceneMouseEvent *event) {

 /* if((event->buttons() && Qt::LeftButton)) {
           lastpoint = event->lastScenePos().toPoint();

           if(firstpoint.x() < lastpoint.x() && firstpoint.y() < lastpoint.y()) {
               rect->setTopLeft(firstpoint);
               rect->setBottomRight(lastpoint);
           }
           else if(firstpoint.x() < lastpoint.x() && firstpoint.y() > lastpoint.y()) {
               rect->setBottomLeft(firstpoint);
               rect->setTopRight(lastpoint);
           }
           else if(firstpoint.x() > lastpoint.x() && firstpoint.y() < lastpoint.y()) {
               rect->setTopRight(firstpoint);
              rect->setBottomLeft(lastpoint);
           }
           else {
               rect->setBottomRight(firstpoint);
               rect->setTopLeft(lastpoint);
           }
           rect_item->setRect(*(rect));
       }*/
}

#include "myfreezetool.h"

MyFreezeTool::MyFreezeTool(QPixmap pixmap)
{
    myPixmap = pixmap;
}

QGraphicsItem *MyFreezeTool::mousePressed(QGraphicsSceneMouseEvent *event, MyToolProperties *myToolProperties) {
    return nullptr;
}

void MyFreezeTool::mouseMoved(QGraphicsSceneMouseEvent *event) {

}

#include "mytexttool.h"

QGraphicsItem *MyTextTool::mousePressed(QGraphicsSceneMouseEvent *event, MyToolProperties *myToolProperties) {
    if(!editingMode) {
        editingMode = true;
        myTextItem = new QGraphicsTextItem;
        myTextItem->setTextInteractionFlags(Qt::TextEditorInteraction);
        myTextItem->setFocus(Qt::MouseFocusReason);
        myTextItem->setPos(event->lastScenePos().x(), event->lastScenePos().y());
        myTextItem->setFont(myToolProperties->myFont);
        myTextItem->setDefaultTextColor(myToolProperties->myPrimaryPen.color());
        return (QGraphicsItem*)myTextItem;
    }
    else {
        editingMode = false;
        myTextItem->setTextInteractionFlags(Qt::NoTextInteraction);
    }
    return nullptr;
}

void MyTextTool::mouseMoved(QGraphicsSceneMouseEvent *event) {

}

#include "toolmanager.h"

ToolManager::ToolManager(MyGraphicsScene *scene) : scene(scene) {
    myToolProperties = new MyToolProperties();
}

void ToolManager::setMyRadius(int radius) {
    myToolProperties->myRadius = radius;
}

void ToolManager::setLineWidth(int width) {
    myToolProperties->myPrimaryPen.setWidth(width);
    myToolProperties->mySecondaryPen.setWidth(width);
}

void ToolManager::setActiveTool(ToolBase *tool) {
    delete activeTool;
    activeTool = tool;
}

void ToolManager::setColor(QColor color, int which) {
    (which == 0) ? myToolProperties->myPrimaryPen.setColor(color) : myToolProperties->mySecondaryPen.setColor(color);
}

int ToolManager::getMyRadius() {
    return myToolProperties->myRadius;
}

QColor ToolManager::getColor(int which) {
    return (which == 0) ? myToolProperties->myPrimaryPen.color() : myToolProperties->mySecondaryPen.color();
}

void ToolManager::mousePressed(QGraphicsSceneMouseEvent *event) {
    QGraphicsPathItem* newItem = (QGraphicsPathItem*)activeTool->mousePressed(event, myToolProperties);
    if(newItem == nullptr) return;

    scene->addItem(newItem);
}

void ToolManager::mouseMoved(QGraphicsSceneMouseEvent *event) {
    activeTool->mouseMoved(event);
}

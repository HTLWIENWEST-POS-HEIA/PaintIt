#include "toolmanager.h"

ToolManager::ToolManager(MyGraphicsScene *scene) : scene(scene) {
    myPrimaryPen = new QPen(Qt::black, 1, Qt::SolidLine, Qt::RoundCap);
    mySecondaryPen = new QPen(Qt::white, 1, Qt::SolidLine, Qt::RoundCap);
}

void ToolManager::setActiveTool(ToolBase *tool) {
    delete activeTool;
    activeTool = tool;
}

void ToolManager::mousePressed(QGraphicsSceneMouseEvent *event) {
    if(activeTool == nullptr) return;

    QGraphicsPathItem* newItem = (QGraphicsPathItem*)activeTool->mousePressed(event, *(myPrimaryPen), *(mySecondaryPen));
    if(newItem == nullptr) return;

    scene->addItem(newItem);
}

void ToolManager::mouseMoved(QGraphicsSceneMouseEvent *event) {
    if(activeTool == nullptr) return;

    activeTool->mouseMoved(event);
}

void ToolManager::setColor(QColor color, int which) {
    if(which == 0) myPrimaryPen->setColor(color);
    else mySecondaryPen->setColor(color);
}

void ToolManager::setPenWidth(int width) {
    myPrimaryPen->setWidth(width);
    mySecondaryPen->setWidth(width);
}

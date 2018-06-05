#include "toolmanager.h"

ToolManager::ToolManager(MyGraphicsScene *scene) : scene(scene) {
    myToolProperties = new MyToolProperties();
    activeTool = nullptr;
}

void ToolManager::setMyParticleCount(int particleCount) {
    myToolProperties->myParticleCount = particleCount;
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

QFont ToolManager::getFont() {
    return myToolProperties->myFont;
}

int ToolManager::getMyParticleCount() {
    return myToolProperties->myParticleCount;
}

void ToolManager::setFont(QFont font) {
    myToolProperties->myFont = font;
}

QColor ToolManager::getColor(int which) {
    return (which == 0) ? myToolProperties->myPrimaryPen.color() : myToolProperties->mySecondaryPen.color();
}

void ToolManager::mousePressed(QGraphicsSceneMouseEvent *event) {
    if(activeTool == nullptr) return;

    QGraphicsPathItem* newItem = (QGraphicsPathItem*)activeTool->mousePressed(event, myToolProperties);
    if(newItem == nullptr) return;

    scene->addItem(newItem);
}

void ToolManager::mouseMoved(QGraphicsSceneMouseEvent *event) {
    if(activeTool == nullptr) return;

    activeTool->mouseMoved(event);
}

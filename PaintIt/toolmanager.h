#ifndef TOOLMANAGER_H
#define TOOLMANAGER_H

// Werkzeuge
#include "Tools/myerasetool.h"
#include "Tools/mybrushtool.h"
#include "Tools/mycircletool.h"
#include "Tools/myfillingtool.h"
#include "Tools/myrectangletool.h"

#include "toolbase.h"
#include "mygraphicsscene.h"
#include "mytoolproperties.h"

class MyGraphicsScene;

class ToolManager {
public:
    int getMyRadius();
    QColor getColor(int which);
    void setMyRadius(int radius);
    void setLineWidth(int width);
    void setActiveTool(ToolBase *tool);
    ToolManager(MyGraphicsScene *scene);
    void setColor(QColor color, int which);
    void mouseMoved(QGraphicsSceneMouseEvent *event);
    void mousePressed(QGraphicsSceneMouseEvent *event);

private:
    ToolBase *activeTool = nullptr;
    MyGraphicsScene *scene = nullptr;
    MyToolProperties *myToolProperties = nullptr;
};

#endif

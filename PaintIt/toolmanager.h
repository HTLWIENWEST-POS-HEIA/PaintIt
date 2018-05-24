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

class MyGraphicsScene;

class ToolManager {
public:
    ToolManager(MyGraphicsScene *scene);
    void setActiveTool(ToolBase *tool);
    void mousePressed(QGraphicsSceneMouseEvent *event);
    void mouseMoved(QGraphicsSceneMouseEvent *event);
    void setColor(QColor color, int which);
    void setPenWidth(int width);

private:
    QPen *myPrimaryPen = nullptr;
    QPen *mySecondaryPen = nullptr;
    ToolBase *activeTool = nullptr;
    MyGraphicsScene *scene = nullptr;
};

#endif

#ifndef MYGRAPHICSSCENE_H
#define MYGRAPHICSSCENE_H

#include <QMainWindow>
#include "toolmanager.h"
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>

class ToolBase;
class ToolManager;

class MyGraphicsScene : public QGraphicsScene{
public:
    MyGraphicsScene(QMainWindow *parent, QGraphicsView *graphicsView);
    void setActiveTool (ToolBase *tool);
    void setColor(QColor color, int which);
    void setPenWidth(int width);

private:
    ToolManager *tm;

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
};

#endif

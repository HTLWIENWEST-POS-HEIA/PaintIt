#include "myspraytool.h"
#include <QDebug>
#include <cstdlib>

QGraphicsItem* MySprayTool::mousePressed(QGraphicsSceneMouseEvent *event, MyToolProperties *myToolProperties){
    pen = myToolProperties->myPrimaryPen;
    radius = myToolProperties->myParticleCount;
    if(event->button() == Qt::LeftButton) {

        painterPath = new QPainterPath();
        pathItem = new QGraphicsPathItem(*(painterPath));

        pathItem->setPen(myToolProps.myPrimaryPen);
        myToolProps = *myToolProperties;
        firstPoint = event->lastScenePos().toPoint();

/*Signal und Slot Timer->Start*/

        timer->setInterval(1);
        timer->start();
        QObject::connect(timer, SIGNAL(timeout()), (QObject*)this, SLOT(slotS()));


    }
    return (QGraphicsItem*)pathItem;
    return nullptr;
}

/*Beendet den Timer*/

void MySprayTool::mouseReleased(QGraphicsSceneMouseEvent *event){
    timer->stop();
}

void MySprayTool::mouseMoved(QGraphicsSceneMouseEvent *event){
    if((event->buttons() && Qt::LeftButton)) {
        QPainterPath subPath;

        firstPoint = event->lastScenePos().toPoint();

/*Hier wurde kein Signal und Slot verwendet, da es dabei zu unschönen Effekten bei der Bewegung kommt*/

        int directionChoice = rand()%4;

        checkDirection(directionChoice);

        int RandomX = rand()%radius;
        int RandomY = rand()%radius;

        RandomY = checkRand(RandomX,RandomY);

        if (directionChoice == 0){
            subPath.moveTo(firstPoint.x() + RandomX, firstPoint.y() + RandomY);
            subPath.lineTo(firstPoint.x() + RandomX+0.1, firstPoint.y() + RandomY);
        }
        if (directionChoice == 1){
            subPath.moveTo(firstPoint.x() + RandomX, firstPoint.y() - RandomY);
            subPath.lineTo(firstPoint.x() + RandomX+0.1, firstPoint.y() - RandomY);
        }
        if (directionChoice == 2){
            subPath.moveTo(firstPoint.x() - RandomX, firstPoint.y() + RandomY);
            subPath.lineTo(firstPoint.x() - RandomX+0.1, firstPoint.y() + RandomY);
        }
        if (directionChoice == 3){
            subPath.moveTo(firstPoint.x() - RandomX, firstPoint.y() - RandomY);
            subPath.lineTo(firstPoint.x() - RandomX+0.1, firstPoint.y() - RandomY);
        }

        if(painterPath != nullptr)
            painterPath->addPath(subPath);

        if(pathItem != nullptr)
            pathItem->setPath(*painterPath);
    }
}

/*Set Dot Funktion welche die Dots setzt*/

void MySprayTool::setDot(){
        QPainterPath subPath;

        int directionChoice = rand()%4;

        checkDirection(directionChoice);

        int RandomX = rand()%radius;
        int RandomY = rand()%radius;


        RandomY = checkRand(RandomX,RandomY);

        if (directionChoice == 0){
            subPath.moveTo(firstPoint.x() + RandomX, firstPoint.y() + RandomY);
            subPath.lineTo(firstPoint.x() + RandomX+0.1, firstPoint.y() + RandomY);
        }
        if (directionChoice == 1){
            subPath.moveTo(firstPoint.x() + RandomX, firstPoint.y() - RandomY);
            subPath.lineTo(firstPoint.x() + RandomX+0.1, firstPoint.y() - RandomY);
        }
        if (directionChoice == 2){
            subPath.moveTo(firstPoint.x() - RandomX, firstPoint.y() + RandomY);
            subPath.lineTo(firstPoint.x() - RandomX+0.1, firstPoint.y() + RandomY);
        }
        if (directionChoice == 3){
            subPath.moveTo(firstPoint.x() - RandomX, firstPoint.y() - RandomY);
            subPath.lineTo(firstPoint.x() - RandomX+0.1, firstPoint.y() - RandomY);
        }

        if(painterPath != nullptr)
            painterPath->addPath(subPath);

        if(pathItem != nullptr)
            pathItem->setPath(*painterPath);

}

/*Hier werden die Richtungen gezählt in der ein Dot gesetzt wird und gleichmäßig verteilt*/

int MySprayTool::checkDirection(int direction){
    for (int i = 0; i <= 3; i++){
        if (directionCollector[i] < directionCollector[index]){
            index = i;
            direction = index;
        }
    }

/* Hier wird der directionCollector geleert sollte es vorkommen dass ALLE Speicher den selben Wert haben um somit ein
unnötiges hinaufzählen zu verhindern */

    if (directionCollector[0] == directionCollector[1] && directionCollector[1] == directionCollector[2] && directionCollector[2] == directionCollector[3]){
        for (int i = 0; i <= 3; i++){
            directionCollector[i] = 0;
        }
    }

    directionCollector[direction]++;
    return direction;
}

/*Hier wird geprüft ob sich die Y Koordinate im ausgeschnittenen Eck befindet wenn ja wird sie neu berechnet*/

int MySprayTool::checkRand(int RandomX, int RandomY){
    if ( RandomX > (radius/2) && RandomY > radius - (RandomX - radius/2) ){
        RandomY = rand()%(radius - (RandomX - radius/2));
    }
    return RandomY;
}

/*Slot Funktion welche die Dots setzt*/

void MySprayTool::slotS(){
    setDot();
}

#ifndef MYTOOLPROPERTIES_H
#define MYTOOLPROPERTIES_H

#ifndef nullptr
#define nullptr 0
#endif

#include <QPen>
#include <QFont>

struct MyToolProperties{
    int myParticleCount = 20;
    QFont myFont;
    QPen myPrimaryPen = QPen(Qt::black, 1, Qt::SolidLine, Qt::RoundCap);
    QPen mySecondaryPen = QPen(Qt::white, 1, Qt::SolidLine, Qt::RoundCap);
};

#endif // MYTOOLPROPERTIES_H

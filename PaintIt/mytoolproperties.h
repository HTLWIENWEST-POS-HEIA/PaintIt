#ifndef MYTOOLPROPERTIES_H
#define MYTOOLPROPERTIES_H

#ifndef nullptr
#define nullptr 0
#endif

#include <QPen>
#include <QFont>
#include <string>

struct MyToolProperties{
    int myParticleCount = 20;
    QFont myFont;
    QPen myPrimaryPen = QPen(Qt::black, 1, Qt::SolidLine, Qt::RoundCap);
    QPen mySecondaryPen = QPen(Qt::white, 1, Qt::SolidLine, Qt::RoundCap);
    int myLineWidth = 1;
    int myStampSize = 200;
    std::string myStamp = "triangle";
  //std::string myStamp = "star";
  //std::string myStamp = "rectangle";
  //std::string myStamp = "arrowRight";
  //std::string myStamp = "arrowLeft";
  //std::string myStamp = "arrowUp";
  //std::string myStamp = "arrowDown";

};

#endif // MYTOOLPROPERTIES_H

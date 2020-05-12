#include <QCoreApplication>
#include "source.h"
#include "destination.h"

//11-1. Introduction to signals and slots
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    source objSource;
    destination objDestination;

    /*
      QObject::connect(1, 2, 3, 4)
      1 = Reference source                  [signal]
      2 = Reference source object           [signal]
      3 = Reference destination             [slot]
      4 = Reference destination object      [slot]
    */
    QObject::connect(&objSource, &source::mySignal, &objDestination, &destination::onMessage);

    objSource.test();

    return a.exec();
}

#ifndef RACECAR_H
#define RACECAR_H

#include <QObject>
#include <QtDebug>
#include "car.h"

class racecar : public car
{
    Q_OBJECT
public:
    explicit racecar(QObject *parent = nullptr);

    bool supercharger = true;
    void goFast();
signals:

};

#endif // RACECAR_H

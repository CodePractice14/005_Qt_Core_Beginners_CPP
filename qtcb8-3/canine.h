#ifndef CANINE_H
#define CANINE_H

#include <QObject>
#include <QtDebug>
#include "mammal.h"

class canine : public mammal
{
    Q_OBJECT
public:
    explicit canine(QObject *parent = nullptr);

    void bark() {qInfo() <<"bark bark bark";}

signals:

};

#endif // CANINE_H

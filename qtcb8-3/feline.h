#ifndef FELINE_H
#define FELINE_H

#include <QObject>
#include <QtDebug>
#include "mammal.h"

class feline : public mammal
{
    Q_OBJECT
public:
    explicit feline(QObject *parent = nullptr);

    void meow() {qInfo() <<"mewo";}

signals:

};

#endif // FELINE_H

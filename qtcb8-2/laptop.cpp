#include "laptop.h"

laptop::laptop(QObject *parent, QString name) : QObject(parent)
{
    this->name = name;
    qInfo() << this << name << "constructed";

}

laptop::~laptop()
{
    //When destroyed
    qInfo() << this << name << "DEconstructed";
}

double laptop::asKilograms()
{
    return this->weight * 0.453592;
}

void laptop::test()
{
    qInfo() << this << name << asKilograms();
}

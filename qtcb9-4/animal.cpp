#include "animal.h"

animal::animal(QObject *parent, QString name) : QObject(parent)
{
    animal::name = name;
    qInfo() << "Name changed to: " << name << " = " << animal::name;
}

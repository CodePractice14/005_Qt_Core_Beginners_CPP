#ifndef ANIMAL_H
#define ANIMAL_H

#include <QObject>
#include <QtDebug>

class animal : public QObject
{
    Q_OBJECT
public:
    explicit animal(QObject *parent = nullptr, QString name = "");

    static QString name;

signals:

};

#endif // ANIMAL_H

#ifndef CAR_H
#define CAR_H

#include <QObject>
#include <QtDebug>

class car : public QObject
{
    Q_OBJECT
public:
    explicit car(QObject *parent = nullptr);

    QString color = "white";
    int tires = 4;

    void drive();
    void stop();


signals:

};

#endif // CAR_H

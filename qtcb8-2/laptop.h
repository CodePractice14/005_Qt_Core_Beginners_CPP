#ifndef LAPTOP_H
#define LAPTOP_H

#include <QObject>
#include <QtDebug>

class laptop : public QObject
{
    Q_OBJECT
public:
    //constructor
    explicit laptop(QObject *parent = nullptr, QString name = "");

    //deconstructor
    ~laptop();

    int weight;
    QString name;
    double asKilograms();
    void test();
signals:

};

#endif // LAPTOP_H

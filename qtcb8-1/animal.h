#ifndef ANIMAL_H //if not definded
#define ANIMAL_H //define it

#include <QObject>
#include <QDebug>

//Blueprint
class animal : public QObject
{
    Q_OBJECT
    //here - private
public:
    //here - public
    explicit animal(QObject *parent = nullptr);

    void speak(QString message);
signals:

};

#endif // ANIMAL_H

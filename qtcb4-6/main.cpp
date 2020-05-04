#include <QCoreApplication>
#include <QtDebug>

#include <array>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //Array

    int ages[4] = {23, 7, 75, 1000}; //zero based array

    qInfo()<< "This shows us the memory location of the array: " << ages;
    qInfo() <<ages[0];
    qInfo() <<ages[1];
    qInfo() <<ages[2];
    qInfo() <<ages[3];

    array<int, 4> cars;
    cars[0] = 88;
    cars[1] = 4;
    cars[2] = 990;
    cars[3] = 76; // end of array
    cars[99] = 99; //VERY BAD -- don't do this.

    qInfo() <<cars[0];
    qInfo() <<cars[1];
    qInfo() <<cars[2];
    qInfo() <<cars[3];
    qInfo() <<cars[99];

    //Size vs Size of
    qInfo() << " Size: "<< cars.size(); //nr of elements
    qInfo() << " SizeOf: "<< sizeof(cars); //actualy memory size
    qInfo() << " Last element of cars: "<< cars[cars.size() -1]; //last element notice how it is not 99.

    return a.exec();
}

#include <QCoreApplication>
#include <QtDebug>
#include <iostream>
#include <array>

using namespace std;

//6. For loop
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int start = 0;
    int max = 0;

    qInfo("Enter a max: ");
    cin >> max;

    if( max == 0) qFatal("Wrong max. Goodbye");

    for(int i = start; i < max; i++)
    {
        qInfo() << "i = " << i;
    }

    qInfo("---");
    //array exemple
    array<int, 4> ages = {10, 20, 30, 40};

    for(int i = 0; i < ages.size(); i++)
    {
        qInfo("ages[%d] = %d", i, ages[i]);
    }

    qInfo() << "Finished";

    return a.exec();
}

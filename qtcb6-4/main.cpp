#include <QCoreApplication>
#include <QtDebug>
#include <iostream>

using namespace std;

//4. Switch
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 0;

    qInfo() << "Enter your age: ";
    cin >> age;

    switch (age)
    {
    case 0:
        qFatal("You did not enter a valid age!");
        break;
    case 16:
        qInfo("Get a crush to break your heart. <3 :( ");
        break;
    case 18:
        qInfo("Get irresponsibly drunk..");
        break;
    case 21:
        qInfo("Get a job!");
        break;
    case 30:
        qInfo("Get a house..");
        break;
    default:
        qInfo("Nothing special this year.");
        break;
    }

    qInfo() << "Finished";

    return a.exec();
}

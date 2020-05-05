#include <QCoreApplication>
#include <QtDebug>
#include <iostream>

using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 0;

    qInfo() << "Enter your age: ";
    cin >> age;

    age > 0 && age < 120 ? qInfo("Your age is %d\n", age) : qFatal("Your age is made up punk..\n");

    return a.exec();
}

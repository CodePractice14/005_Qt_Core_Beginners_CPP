#include <QCoreApplication>
#include <iostream>
#include <QtDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age;

    qInfo() << "Please enter an age: ";
    cin >> age;
    qInfo() << "Age entered: "<< age << endl;

    return a.exec();
}

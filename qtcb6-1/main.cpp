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

    if(age ==0)
    {
        qFatal("You did not enter a vaild int");
    }

    qInfo() << "You entered: "<< age;

    if(age < 18 && age > 0)
    {
        qInfo() << "You're not allowed to drink" << endl;
    }
    else if(age >= 19 && age < 120)
    {
        qInfo() << "Ready for some decadent fun?" << endl;
    }
    else
    {
        qInfo() << "Did you just inserted a random number? not cool dude..or dudette" << endl;
        qCritical() << "Not cool..";
    }


    return a.exec();
}

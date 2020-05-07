#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

int calc(int offset, int age){

    if(offset == 0) qFatal("Offset can not be zero!");

    if(age <= 0 || age > 120){
        qFatal("Invalid age");
    }

    return offset  * age;
}

int catYears(int age){
    return calc(9, age);
}

int dogYears(int age){
    return calc(4, age);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age;
    qInfo() << "Enter your age: ";
    cin>>age;

    qInfo("You're %d in cat years\n", catYears(age));
    qInfo("You're %d in dog years\n", dogYears(age));

    return a.exec();
}

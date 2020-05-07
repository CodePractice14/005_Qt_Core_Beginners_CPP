#include <QCoreApplication>
#include <QtDebug>
#include <iostream>

using namespace std;

//5. Do while
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int start = 0;
    int max = 10;

    int i = start;

    while (i < max){
        qInfo() << "WHILE =" << i;
        i++;
    }

    qInfo("----");

    i = start;
    do{
        qInfo() << "DO =" << i;
        i++;
    }
    while(i < max);
    //while(i == max); //this shows the big difference between do and do-while. do-while will run at least once. before checking the condition

    qInfo() << "Finished";

    return a.exec();
}

#include <QCoreApplication>
#include <iostream>
#include <QtDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout << "Hello World from cout" << endl;
    qInfo() << "Hello World from qInfo" << endl;

    int age =44;
    cout << age;
    cout << endl;
    cout << flush;

    return a.exec();
}

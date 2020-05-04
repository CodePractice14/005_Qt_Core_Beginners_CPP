#include <QCoreApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout << "Standard out" << endl;
    cerr << "Error out" << endl;

    return a.exec();
}

#include <QCoreApplication>
#include <QDebug>

template<typename T>
void print(T value) {
    qInfo() << value;
}

//14-1. Introduction to generics
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    print<int>(1);
    print<double>(126.007);
    print<QString>("Hello world!");


    return a.exec();
}

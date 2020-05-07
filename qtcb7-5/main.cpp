#include <QCoreApplication>
#include <QDebug>

//Pass by value -- COPY
void testVal(int x){
    x = x + 10;
    qInfo("X from testVal(int x) = %d", x);
}

//Pass by reference -- NOT A COPY
void testRef(int &y){
    y = y + 10;
    qInfo("y from  testRef(int &x) = %d", y);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int x = 5;
    int y = 0;

    qInfo() << "Testing value:";
    testVal(x);
    qInfo("X from main = %d", x);

    qInfo() << "\n----\n";

    qInfo() << "Testing reference:";
    testRef(y);
    qInfo("y from main = %d", y);

    return a.exec();
}

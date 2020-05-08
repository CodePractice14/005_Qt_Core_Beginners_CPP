#include <QCoreApplication>
#include <QDebug>

void test(int number){
    //int number = 50;
    qInfo() << "[2] Test number is at: "<< &number << " = "<< number;
}

void testByReference(int &number){
    //int number = 50;
    qInfo() << "[4] Test number is at: "<< &number << " = "<< number;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int number = 75;
    qInfo() << "[1] Test number is at: "<< &number << " = "<< number;
    test(number);

    bool ok = true;

    if(ok)
    {
        qInfo() << "[3] Test number is at: "<< &number << " = "<< number;
    }

    testByReference(number);

    return a.exec();
}

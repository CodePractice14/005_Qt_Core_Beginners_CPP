#include <QCoreApplication>
#include <QDebug>

void test(int age = 0){
    qInfo() <<  "You are "<< age << "years old";
}

void test(bool isActive){
    qInfo() << "testing";

    if(isActive)
    {
        qInfo() << "It is active";
    }
    else
    {
        qInfo() << "NOT ACTIVE";
    }
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    test();
    test(false);


    return a.exec();
}

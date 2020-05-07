#include <QCoreApplication>
#include <QDebug>

void text(){
    qInfo() << "Hello from void text()";
}

void text2(){
    qInfo() << "Hello from void text2()";
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    text();
    text2();
    return a.exec();
}

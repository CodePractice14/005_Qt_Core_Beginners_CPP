#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 44;
    const int id = 215;

    //will throw error
    //id = 1112;
    qInfo("Id %d", id);
    return a.exec();
}

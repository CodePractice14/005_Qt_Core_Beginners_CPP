#include <QCoreApplication>
#include <QtDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //Variables -- something that will change..like all things in live I guess.

    bool isOn = false;

    qInfo() << "is it on: " << isOn;

    isOn = true;
    //isOn = !isOn;
    qInfo() << "is it on (part 2): " << isOn;

    return a.exec();
}

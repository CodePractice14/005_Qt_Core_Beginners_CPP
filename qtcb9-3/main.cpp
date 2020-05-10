#include <QCoreApplication>
#include <QtDebug>

//Global scope
static QString name = "Bryan";

//9-3. Static
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << name;

    bool isTrue = true;

    if(isTrue)
    {
        QString name = "Tammy";
        qInfo() << name;
    }

    qInfo() << name;


    return a.exec();
}

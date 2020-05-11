#include <QCoreApplication>
#include <QtDebug>

void test(QString name)
{
    qInfo() << "Size = " << name.length();
}

void testPointer(QString *name)
{
    qInfo() << "Size = " << name->length();
}

//10-1. Introduction to pointers
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name = "Bryan";
    test(name);
    testPointer(&name);

    return a.exec();
}

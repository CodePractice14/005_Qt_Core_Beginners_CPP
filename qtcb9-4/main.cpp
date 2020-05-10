#include <QCoreApplication>
#include "animal.h"

QString animal::name = "";

//9-4. Static variables in class
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    animal cat(&a, "fluffy");
    animal dog(&a, "fido");
    animal person(&a, "Bryan");

    qInfo() << cat.name;

    return a.exec();
}

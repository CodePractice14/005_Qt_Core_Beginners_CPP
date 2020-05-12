#include <QCoreApplication>
#include "test.h"
#include "watcher.h"

//11-3. Q_Property
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    test tester;
    watcher destination;

    QObject::connect(&tester, &test::messageChanged, &destination, &watcher::messageChanged);

    tester.setProperty("message", "hello world!");
    //tester.setMessage("testing");

    return a.exec();
}

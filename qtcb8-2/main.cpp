#include <QCoreApplication>
#include "laptop.h"


void test(laptop &machine){
    machine.test();
}

void makeLaptops(QObject* parent){
    laptop mine(parent, "myLaptop");
    laptop yours(parent, "your laptop");

    mine.weight = 3;
    yours.weight = 5;

    test(mine);
    test(yours);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    makeLaptops(&a);

    return a.exec();
}

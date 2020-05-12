#include <QCoreApplication>
#include <QtDebug>

void test(QString* value){
    qInfo() << *value;
}

//10-3. Pointer vs copy
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString* data = new QString("eeeeeeenqjenrnqejkrnqejrqenrkjeqnrknqekrqenrkkeqnkrqejnrHeyeklnrlalnreGrinchlemRAMERLAErmEALKMRAELKRmMAELEEEkkrk");

    qInfo() << "Actual size: " << data -> length();
    qInfo() << "Pointer size: " << sizeof(data);

    qInfo() << "Data: " << *data;
    qInfo() << "Sizeof: " << sizeof(*data);

    test(data);

    delete data;

    //SUPER FAST memory access.

    return a.exec();
}

#include <QCoreApplication>
#include <QDebug>

struct laptop {
    int weight;

    double asKilograms(){
        return weight * 0.453592;
    }

};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    laptop notebook;
    notebook.weight =5;

    qInfo() << "Laptop Pounds: " << notebook.weight;
    qInfo() << "Laptop Kilos: " << notebook.asKilograms();

    return a.exec();
}

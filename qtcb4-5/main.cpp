#include <QCoreApplication>
#include <QDebug>

enum Colors {black, red, green, blue};

struct product
{
    int weight;
    double value;
    Colors color;
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    product laptop; //no assigment
    qInfo() << "Size of product: "<< sizeof(laptop);

    laptop.color = Colors::green;
    laptop.value = 550.37;
    laptop.weight = 3;

    qInfo() << "Laptop weight" <<  laptop.weight;
    qInfo() << "Laptop Value" <<  laptop.value;
    qInfo() << "Laptop Color" <<  laptop.color;
    qInfo() << "--> Laptop" <<  laptop;
    return a.exec();
}

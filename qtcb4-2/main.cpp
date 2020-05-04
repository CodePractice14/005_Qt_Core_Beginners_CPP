#include <QCoreApplication>
#include <QtDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //https://www.geeksforgeeks.org/c-data-types/

    int age = 44;
    double height = 6.02;

    qInfo("Age: %d", age);
    qInfo() << "Height: " << height;

    //Creates a warning
    age = 44.90;
    qInfo("Age after implicit conversion: %d", age);

    signed int dogs = -1;
    qInfo() << "Dogs: " << dogs;
    dogs = 15;
    qInfo() << "More Dogs: " << dogs;

    //Compiler will really gonna freak out on this one.
    unsigned int cats = -1;
    qInfo() << "Dogs: " << cats;
    cats = 15;
    qInfo() << "More Dogs: " << cats;

    qInfo() << "Size of dogs" << sizeof(dogs);
    qInfo() << "Size of cats" << sizeof(cats);
    qInfo() << "Size of height" << sizeof(height);


    return a.exec();
}

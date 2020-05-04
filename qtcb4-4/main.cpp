#include <QCoreApplication>
#include <QtDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //enum Color {red, green, blue};
    //enum Color {red = 0, green = 1, blue = 2};
    enum Color {red = 11, green = 12, blue}; //it autocompletes our series (increments +1)
    //enum Color {red = 0, green = 10, blue = 20};
    Color myColor = Color::blue;

    qInfo() << "Color" << myColor;

    return a.exec();
}

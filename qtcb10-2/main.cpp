#include <QCoreApplication>
#include <QDebug>

void display(QString *value)
{
    qInfo() << "The Pointer: " << value;
    qInfo() << "The Object: " << &value << " (A copy of the pointer)";
    qInfo() << "The Data: " << *value;
    qInfo() << "";
}

//10-2. Stack vs heap
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name = "Alexandro";
    QString* description = new QString("Hello World?"); //ALWAYS DELETE AFTER USAGE

    qInfo() << "Name len = " << name.length();
    qInfo() << "Description len = " << description->length();

    display(&name);
    display(description);

    delete description; // SETS the pointer to = 0

    display(description); //lets call this AFTER the delete just to see what happends ?!?!

    return a.exec();
}

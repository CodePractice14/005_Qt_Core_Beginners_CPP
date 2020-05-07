#include <QCoreApplication>
#include <QDebug>

void test(int age = 0){
    qInfo() <<  "You are "<< age << "years old";
}
void test(bool isActive){
    qInfo() << "testing";

    if(isActive)
    {
        qInfo() << "It is active";
    }
    else
    {
        qInfo() << "NOT ACTIVE";
    }
}


//Overloading should be used when you expect the same result(OUTPUT) but from diffrent values(INPUTS)
//just like 'convert'

void convert(int value){
    qInfo() <<"Do something with an int";
}
void convert(double value){
    qInfo() <<"Do the same 'something' with a double";
}




int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    test();
    test(false);

    convert(10);
    convert(65.5);


    return a.exec();
}

#include <QCoreApplication>
#include <QDebug>
#include "animal.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name = "Bryan";
    qInfo() << "My name is at: " << &name << " = " << name;

    animal cat(&a,"fluffy"); // {}Constructor Scope
    animal dog(&a,"fido"); // {}Constructor Scope
    animal person(&a,name);// {}Constructor Scope

    person.sayHello("Yo");

    qInfo() << person.name;

    return a.exec();
}

#include "animal.h"

animal::animal(QObject *parent, QString name) : QObject(parent)
{
    this->name = name;
    qInfo() << "Animal name param: " << &name << " = " << name;
    qInfo() << "Animal name : " << &this->name << " = " << this->name;
}

void animal::sayHello(QString message)
{
    //Both the same!!!
    qInfo() << message << " from " << name << " at " << &name;
    qInfo() << message << " from " << this->name << " at " << &this->name;
}

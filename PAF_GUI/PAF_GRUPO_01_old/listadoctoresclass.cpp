#include "listadoctoresclass.h"


nodoDoctorClass *listaDoctoresClass::getCab() const
{
    return cab;
}

void listaDoctoresClass::setCab(nodoDoctorClass *value)
{
    cab = value;
}

int listaDoctoresClass::getCant() const
{
    return cant;
}

void listaDoctoresClass::setCant(int value)
{
    cant = value;
}
listaDoctoresClass::listaDoctoresClass()
{

}

listaDoctoresClass::~listaDoctoresClass()
{

}


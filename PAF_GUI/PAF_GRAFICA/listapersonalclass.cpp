#include "listapersonalclass.h"


nodoPersonalClass *listaPersonalClass::getCab() const
{
    return cab;
}

void listaPersonalClass::setCab(nodoPersonalClass *value)
{
    cab = value;
}

int listaPersonalClass::getCant() const
{
    return cant;
}

void listaPersonalClass::setCant(int value)
{
    cant = value;
}
listaPersonalClass::listaPersonalClass()
{

}

listaPersonalClass::~listaPersonalClass()
{

}


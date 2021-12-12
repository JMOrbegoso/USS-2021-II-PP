#include "listatrabajadoresclass.h"

nodoTrabajadorClass *listaTrabajadoresClass::getCab() const
{
    return cab;
}

void listaTrabajadoresClass::setCab(nodoTrabajadorClass *value)
{
    cab = value;
}

int listaTrabajadoresClass::getCant() const
{
    return cant;
}

void listaTrabajadoresClass::setCant(int value)
{
    cant = value;
}

listaTrabajadoresClass::listaTrabajadoresClass()
{
    
}

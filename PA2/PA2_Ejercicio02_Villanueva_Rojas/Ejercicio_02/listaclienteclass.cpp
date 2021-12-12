#include "listaclienteclass.h"

nodoClienteClass *listaClienteClass::getCab() const
{
    return cab;
}

void listaClienteClass::setCab(nodoClienteClass *value)
{
    cab = value;
}

int listaClienteClass::getCant() const
{
    return cant;
}

void listaClienteClass::setCant(int value)
{
    cant = value;
}

listaClienteClass::listaClienteClass()
{
    
}

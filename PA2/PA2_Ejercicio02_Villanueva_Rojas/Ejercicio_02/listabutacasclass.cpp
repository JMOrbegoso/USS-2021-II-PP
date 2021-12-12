#include "listabutacasclass.h"

nodoButacasClass *listaButacasClass::getCab() const
{
    return cab;
}

void listaButacasClass::setCab(nodoButacasClass *value)
{
    cab = value;
}

int listaButacasClass::getCant() const
{
    return cant;
}

void listaButacasClass::setCant(int value)
{
    cant = value;
}

listaButacasClass::listaButacasClass()
{
    
}

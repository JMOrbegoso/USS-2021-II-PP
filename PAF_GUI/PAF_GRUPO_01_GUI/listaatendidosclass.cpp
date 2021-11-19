#include "listaatendidosclass.h"


nodoAtendidoClass *listaAtendidosClass::getCab() const
{
    return cab;
}

void listaAtendidosClass::setCab(nodoAtendidoClass *value)
{
    cab = value;
}

int listaAtendidosClass::getCant() const
{
    return cant;
}

void listaAtendidosClass::setCant(int value)
{
    cant = value;
}
listaAtendidosClass::listaAtendidosClass()
{

}

listaAtendidosClass::~listaAtendidosClass()
{

}


#include "listaenfermerasclass.h"


nodoEnfermeraClass *listaEnfermerasClass::getCab() const
{
    return cab;
}

void listaEnfermerasClass::setCab(nodoEnfermeraClass *value)
{
    cab = value;
}

unsigned short listaEnfermerasClass::getCant() const
{
    return cant;
}

void listaEnfermerasClass::setCant(unsigned short value)
{
    cant = value;
}
listaEnfermerasClass::listaEnfermerasClass()
{

}

listaEnfermerasClass::~listaEnfermerasClass()
{

}


#include "listaalmacenesclass.h"


almacenClass *listaAlmacenesClass::getCab() const
{
    return cab;
}

void listaAlmacenesClass::setCab(almacenClass *value)
{
    cab = value;
}

int listaAlmacenesClass::getMax() const
{
    return max;
}

void listaAlmacenesClass::setMax(int value)
{
    max = value;
}

int listaAlmacenesClass::getCant() const
{
    return cant;
}

void listaAlmacenesClass::setCant(int value)
{
    cant = value;
}
listaAlmacenesClass::listaAlmacenesClass()
{

}

listaAlmacenesClass::~listaAlmacenesClass()
{

}


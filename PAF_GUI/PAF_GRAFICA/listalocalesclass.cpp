#include "listalocalesclass.h"


localClass *listaLocalesClass::getLocal() const
{
    return local;
}

void listaLocalesClass::setLocal(localClass *value)
{
    local = value;
}

int listaLocalesClass::getCant() const
{
    return cant;
}

void listaLocalesClass::setCant(int value)
{
    cant = value;
}

int listaLocalesClass::getMax() const
{
    return max;
}

void listaLocalesClass::setMax(int value)
{
    max = value;
}
listaLocalesClass::listaLocalesClass()
{

}

listaLocalesClass::~listaLocalesClass()
{

}


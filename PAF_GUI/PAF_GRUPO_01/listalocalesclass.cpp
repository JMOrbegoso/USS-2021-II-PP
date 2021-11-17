#include "listalocalesclass.h"


localClass *listaLocalesClass::getCab() const
{
    return cab;
}

void listaLocalesClass::setCab(localClass *value)
{
    cab = value;
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
listaLocalesClass::listaLocalesClass(){

}

listaLocalesClass::~listaLocalesClass()
{

}


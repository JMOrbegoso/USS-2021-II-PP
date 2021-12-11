#include "nodotrabajadorclass.h"

trabajadorClass *nodoTrabajadorClass::getInfo() const
{
    return info;
}

void nodoTrabajadorClass::setInfo(trabajadorClass *value)
{
    info = value;
}

nodoTrabajadorClass *nodoTrabajadorClass::getSgte() const
{
    return sgte;
}

void nodoTrabajadorClass::setSgte(nodoTrabajadorClass *value)
{
    sgte = value;
}

nodoTrabajadorClass::nodoTrabajadorClass()
{
    this->info = NULL;
    this->sgte = NULL;
}

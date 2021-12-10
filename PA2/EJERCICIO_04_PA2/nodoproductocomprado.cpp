#include "nodoproductocomprado.h"

productoComprado *nodoProductoComprado::getInfo() const
{
    return info;
}

void nodoProductoComprado::setInfo(productoComprado *value)
{
    info = value;
}

nodoProductoComprado *nodoProductoComprado::getSgte() const
{
    return sgte;
}

void nodoProductoComprado::setSgte(nodoProductoComprado *value)
{
    sgte = value;
}

nodoProductoComprado *nodoProductoComprado::getAnt() const
{
    return ant;
}

void nodoProductoComprado::setAnt(nodoProductoComprado *value)
{
    ant = value;
}

nodoProductoComprado::nodoProductoComprado(){
    this->sgte = NULL;
    this->ant = NULL;
}

#include "nodocli.h"

cliente *nodoCli::getClient() const
{
    return client;
}

void nodoCli::setClient(cliente *value)
{
    client = value;
}

nodoCli *nodoCli::getSgte() const
{
    return sgte;
}

void nodoCli::setSgte(nodoCli *value)
{
    sgte = value;
}

nodoCli *nodoCli::getAnt() const
{
    return ant;
}

void nodoCli::setAnt(nodoCli *value)
{
    ant = value;
}

nodoCli::nodoCli()
{
    this->ant = NULL;
    this->sgte = NULL;
}

nodoCli::~nodoCli()
{

}

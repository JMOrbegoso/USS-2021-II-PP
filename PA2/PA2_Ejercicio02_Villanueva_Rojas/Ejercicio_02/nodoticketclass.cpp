#include "nodoticketclass.h"

ticketClass *nodoTicketClass::getInfo() const
{
    return info;
}

void nodoTicketClass::setInfo(ticketClass *value)
{
    info = value;
}

nodoTicketClass *nodoTicketClass::getSgte() const
{
    return sgte;
}

void nodoTicketClass::setSgte(nodoTicketClass *value)
{
    sgte = value;
}

nodoTicketClass::nodoTicketClass()
{
    this->info = NULL;
    this->sgte = NULL;
}

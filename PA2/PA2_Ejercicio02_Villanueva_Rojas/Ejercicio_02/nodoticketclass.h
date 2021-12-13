#ifndef NODOTICKETCLASS_H
#define NODOTICKETCLASS_H

#include "ticketclass.h"

class nodoTicketClass
{
private:
    ticketClass *info;
    nodoTicketClass *sgte;
public:
    nodoTicketClass();
    ticketClass *getInfo() const;
    void setInfo(ticketClass *value);
    nodoTicketClass *getSgte() const;
    void setSgte(nodoTicketClass *value);
};

#endif // NODOTICKETCLASS_H

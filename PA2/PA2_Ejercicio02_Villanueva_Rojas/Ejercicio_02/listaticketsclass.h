#ifndef LISTATICKETSCLASS_H
#define LISTATICKETSCLASS_H

#include "nodoticketclass.h"

class listaTicketsClass
{
private:
    nodoTicketClass *cab;
    int cant;
public:
    listaTicketsClass();
    nodoTicketClass *getCab() const;
    void setCab(nodoTicketClass *value);
    int getCant() const;
    void setCant(int value);

    void insertar(ticketClass *ticket);
};

#endif // LISTATICKETSCLASS_H

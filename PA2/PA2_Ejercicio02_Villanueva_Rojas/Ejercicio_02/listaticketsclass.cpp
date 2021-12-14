#include "listaticketsclass.h"

nodoTicketClass *listaTicketsClass::getCab() const
{
    return cab;
}

void listaTicketsClass::setCab(nodoTicketClass *value)
{
    cab = value;
}

int listaTicketsClass::getCant() const
{
    return cant;
}

void listaTicketsClass::setCant(int value)
{
    cant = value;
}

void listaTicketsClass::insertar(ticketClass *ticket)
{
    nodoTicketClass *aux = new (struct nodoTicketClass);
    nodoTicketClass *temp = new (struct nodoTicketClass);
    temp->setInfo(ticket);
    temp->setSgte(NULL);
    if( this->cab == NULL){
        this->setCab(temp);
        //this->getCab()->setAnt(NULL);
    }else{
        aux =  this->getCab();
        while(aux->getSgte() != NULL){
            aux = aux->getSgte();
        }
        aux->setSgte(temp);
        //temp->setAnt(aux);
    }
    this->cant++;
}

listaTicketsClass::listaTicketsClass()
{
    this->cab = NULL;
    this->cant = 0;
}

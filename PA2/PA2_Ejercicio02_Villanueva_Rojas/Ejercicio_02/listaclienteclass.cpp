#include "listaclienteclass.h"

nodoClienteClass *listaClienteClass::getCab() const
{
    return cab;
}

void listaClienteClass::setCab(nodoClienteClass *value)
{
    cab = value;
}

int listaClienteClass::getCant() const
{
    return cant;
}

void listaClienteClass::setCant(int value)
{
    cant = value;
}

void listaClienteClass::insertar(clienteClass *cli)
{
    nodoClienteClass *aux = new (struct nodoClienteClass);
    nodoClienteClass *temp = new (struct nodoClienteClass);
    temp->setInfo(cli);
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

listaClienteClass::listaClienteClass()
{
    this->cab = NULL;
    this->cant = 0;
}

#include "clslistaclientes.h"


clsNodoCliente *clsListaClientes::getCab() const
{
    return cab;
}

void clsListaClientes::setCab(clsNodoCliente *value)
{
    cab = value;
}

unsigned short clsListaClientes::getNClie() const
{
    return nClie;
}

void clsListaClientes::setNClie(unsigned short value)
{
    nClie = value;
}
clsListaClientes::clsListaClientes()
{
    this->cab = NULL;
    this->nClie = 0;
}

clsListaClientes::~clsListaClientes()
{
    
}

void clsListaClientes::insertarCliente( clsCliente *clie){
    clsNodoCliente *aux = new (struct clsNodoCliente);
    clsNodoCliente *temp = new (struct clsNodoCliente);
    temp->setInfo(clie);
    temp->setSgte(NULL);
    if( this->cab == NULL){
        this->setCab(temp);
    }else{
        aux =  this->getCab();
        while(aux->getSgte() != NULL){
            aux = aux->getSgte();
        }
        aux->setSgte(temp);
    }
    this->nClie++;
}















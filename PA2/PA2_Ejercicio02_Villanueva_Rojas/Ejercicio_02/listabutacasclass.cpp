#include "listabutacasclass.h"

nodoButacasClass *listaButacasClass::getCab() const
{
    return cab;
}

void listaButacasClass::setCab(nodoButacasClass *value)
{
    cab = value;
}

int listaButacasClass::getCant() const
{
    return cant;
}

void listaButacasClass::setCant(int value)
{
    cant = value;
}

void listaButacasClass::insertar(butacaClass *butaca)
{
    nodoButacasClass *aux = new (struct nodoButacasClass);
    nodoButacasClass *temp = new (struct nodoButacasClass);
    temp->setInfo(butaca);
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

listaButacasClass::listaButacasClass()
{
    this->cab = NULL;
    this->cant = 0;
}

#include "listatrabajadoresclass.h"

nodoTrabajadorClass *listaTrabajadoresClass::getCab() const
{
    return cab;
}

void listaTrabajadoresClass::setCab(nodoTrabajadorClass *value)
{
    cab = value;
}

int listaTrabajadoresClass::getCant() const
{
    return cant;
}

void listaTrabajadoresClass::setCant(int value)
{
    cant = value;
}

void listaTrabajadoresClass::insertar(trabajadorClass *trab)
{
    nodoTrabajadorClass *aux = new (struct nodoTrabajadorClass);
    nodoTrabajadorClass *temp = new (struct nodoTrabajadorClass);
    temp->setInfo(trab);
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

listaTrabajadoresClass::listaTrabajadoresClass()
{
    this->cab = NULL;
    this->cant = 0;
}

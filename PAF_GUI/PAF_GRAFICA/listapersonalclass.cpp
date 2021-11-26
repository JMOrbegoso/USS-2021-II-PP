#include "listapersonalclass.h"


nodoPersonalClass *listaPersonalClass::getCab() const
{
    return cab;
}

void listaPersonalClass::setCab(nodoPersonalClass *value)
{
    cab = value;
}

int listaPersonalClass::getCant() const
{
    return cant;
}

void listaPersonalClass::setCant(int value)
{
    cant = value;
}

void listaPersonalClass::insertarPersonal(personalClass *pers)
{
    nodoPersonalClass *aux = new (struct nodoPersonalClass);
    nodoPersonalClass *temp = new (struct nodoPersonalClass);
    temp->setInfo(pers);
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
    this->cant++;
}
listaPersonalClass::listaPersonalClass()
{
    cab = NULL;
    cant = 0;
}

listaPersonalClass::~listaPersonalClass()
{

}


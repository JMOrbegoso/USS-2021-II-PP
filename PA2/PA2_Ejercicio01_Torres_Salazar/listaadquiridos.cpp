#include "listaadquiridos.h"

nodoA *listaAdquiridos::getCab() const
{
    return cab;
}

void listaAdquiridos::setCab(nodoA *value)
{
    cab = value;
}

unsigned short listaAdquiridos::getNAdquiridos() const
{
    return nAdquiridos;
}

void listaAdquiridos::setNAdquiridos(unsigned short value)
{
    nAdquiridos = value;
}

listaAdquiridos::listaAdquiridos()
{
    this->cab = NULL;
    this->nAdquiridos = 0;
}

listaAdquiridos::~listaAdquiridos()
{

}

void listaAdquiridos::insertarAdquisicion(adquisicion *adqui){
    nodoA *aux = new (struct nodoA);
    nodoA *temp= new (struct nodoA);
    temp->setAdquirido(adqui);
    temp->setSgte(NULL);
    if (this->cab == NULL){
        this->cab = temp;
        this->cab->setAnt(NULL);
    }else{
        aux = this->cab;
        while (aux->getSgte() != NULL){
            aux = aux->getSgte();
        }
        aux->setSgte(temp);
        temp->setAnt(aux);
    }
    this->nAdquiridos++;
}

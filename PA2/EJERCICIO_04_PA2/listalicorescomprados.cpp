#include "listalicorescomprados.h"

nodoProductoComprado *listaLicoresComprados::getCab() const
{
    return cab;
}

void listaLicoresComprados::setCab(nodoProductoComprado *value)
{
    cab = value;
}

int listaLicoresComprados::getContador() const
{
    return contador;
}

void listaLicoresComprados::setContador(int value)
{
    contador = value;
}

listaLicoresComprados::listaLicoresComprados(){
    this->cab = NULL;
    this->contador = 0;
}

void listaLicoresComprados::insertarLicor(productoComprado *produ){
    nodoProductoComprado *aux = new (struct nodoProductoComprado);
    nodoProductoComprado *temp = new (struct nodoProductoComprado);
    temp->setInfo(produ);
    temp->setSgte(NULL);
    if(this->cab == NULL){
        this->cab = temp;
        this->cab->setAnt(NULL);
    }else{
        aux = this->cab;
        while(aux->getSgte() != NULL){
            aux = aux->getSgte();
        }
        aux->setSgte(temp);
        temp->setAnt(aux);
    }
    this->contador++;
}

#include "listalocalesclass.h"


localClass *listaLocalesClass::getLocal() const
{
    return local;
}

void listaLocalesClass::setLocal(localClass *value)
{
    local = value;
}

int listaLocalesClass::getCant() const
{
    return cant;
}

void listaLocalesClass::setCant(int value)
{
    cant = value;
}

int listaLocalesClass::getMax() const
{
    return max;
}

void listaLocalesClass::setMax(int value)
{
    max = value;
}
listaLocalesClass::listaLocalesClass()
{
    this->max = 0;
    this->cant = 0;
    this->local = NULL;
}

listaLocalesClass::~listaLocalesClass()
{

}

void listaLocalesClass::crecerListaLocal(){
    localClass *aux = new localClass[this->cant + Max];
    for (int i = 0; i < this->cant; i++){
        *(aux + i) = *(this->local + i);
    }
    /*if (lE.cab != NULL){
        delete lE.cab;
    }*/
    this->local = aux;
    this->max += Max;
}

void listaLocalesClass::insertarLocal(localClass *local){
    if (this->cant == this->max){
        this->crecerListaLocal();
    }
    *(this->local + this->cant) = *local;
    this->cant++;
}


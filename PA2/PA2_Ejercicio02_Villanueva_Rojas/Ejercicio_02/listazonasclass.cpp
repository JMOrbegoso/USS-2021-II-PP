#include "listazonasclass.h"

zonaClass *listaZonasClass::getCab() const
{
    return cab;
}

void listaZonasClass::setCab(zonaClass *value)
{
    cab = value;
}

int listaZonasClass::getCant() const
{
    return cant;
}

void listaZonasClass::setCant(int value)
{
    cant = value;
}

int listaZonasClass::getMax() const
{
    return max;
}

void listaZonasClass::setMax(int value)
{
    max = value;
}

listaZonasClass::listaZonasClass()
{
    cab = NULL;
    cant = 0;
    max = 0;
}

void listaZonasClass::crecer(){
    zonaClass *aux = new zonaClass[this->cant + Max];
    for (int i = 0; i < this->cant; i++){
        *(aux + i) = *(this->cab + i);
    }
    /*if (lE.cab != NULL){
        delete lE.cab;
    }*/
    this->cab = aux;
    this->max += Max;
}

void listaZonasClass::insertarLocal(zonaClass *zona){
    if (this->cant == this->max){
        this->crecer();
    }
    *(this->cab + this->cant) = *zona;
    this->cant++;
}

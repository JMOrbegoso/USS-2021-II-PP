#include "listalocalesclass.h"

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
localClass *listaLocalesClass::getCab() const
{
    return cab;
}

void listaLocalesClass::setCab(localClass *value)
{
    cab = value;
}

listaLocalesClass::listaLocalesClass()
{
    this->max = 0;
    this->cant = 0;
    this->cab = NULL;
}

listaLocalesClass::~listaLocalesClass()
{

}

void listaLocalesClass::crecerListaLocal(){
    localClass *aux = new localClass[this->cant + Max];
    for (int i = 0; i < this->cant; i++){
        *(aux + i) = *(this->cab + i);
    }
    /*if (lE.cab != NULL){
        delete lE.cab;
    }*/
    this->cab = aux;
    this->max += Max;
}

void listaLocalesClass::insertarLocal(localClass *local){
    if (this->cant == this->max){
        this->crecerListaLocal();
    }
    *(this->cab + this->cant) = *local;
    this->cant++;
}

listaLocalesClass* listaLocalesClass::filtrarPorDireccion(string direccionPorBuscar){
    listaLocalesClass* temp = new listaLocalesClass();

    for (int x = 0; x < this->getCant(); x++){
        localClass * local = this->getCab() + x;

        if (local->getDireccionLocal().find(direccionPorBuscar, 0) != string::npos)
            temp->insertarLocal(local);
    }

    return temp;
}

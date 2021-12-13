#include "listalotesvacunaclass.h"

int listaLotesVacunaClass::getCant() const
{
    return cant;
}

void listaLotesVacunaClass::setCant(int value)
{
    cant = value;
}

int listaLotesVacunaClass::getMax() const
{
    return max;
}

void listaLotesVacunaClass::setMax(int value)
{
    max = value;
}
loteVacunaClass *listaLotesVacunaClass::getCab() const
{
    return cab;
}

void listaLotesVacunaClass::setCab(loteVacunaClass *value)
{
    cab = value;
}

listaLotesVacunaClass::listaLotesVacunaClass()
{
    cab = NULL;
    cant = 0;
    max = 0;
}

listaLotesVacunaClass::~listaLotesVacunaClass(){

}

void listaLotesVacunaClass::crecerListaLotes(){
    loteVacunaClass *aux = new loteVacunaClass[this->cant + Max];
        for (int i = 0; i < this->cant; i++){
            *(aux + i) = *(this->cab + i);
        }
        /*if (lE.cab != NULL){
            delete lE.cab;
        }*/
        this->cab = aux;
        this->max += Max;
}

void listaLotesVacunaClass::insertarLote(loteVacunaClass *lote){
    if (this->cant == this->max){
            this->crecerListaLotes();
        }
        *(this->cab + this->cant) = *lote;
        this->cant++;
}

listaLotesVacunaClass* listaLotesVacunaClass::filtrarPorNombre(string nombreBuscar){
    listaLotesVacunaClass* temp = new listaLotesVacunaClass();
    for (int x = 0; x < this->getCant(); x++){
        loteVacunaClass * lote = this->getCab() + x;
        if (lote->getNombre().find(nombreBuscar, 0) != string::npos)
            temp->insertarLote(lote);
    }
    return temp;
}


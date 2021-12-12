#include "listalotesvacunageneralclass.h"
#define Maxi 3


loteGeneralClass *listaLotesVacunaGeneralClass::getLote() const
{
    return lote;
}

void listaLotesVacunaGeneralClass::setLote(loteGeneralClass *value)
{
    lote = value;
}

int listaLotesVacunaGeneralClass::getCant() const
{
    return cant;
}

void listaLotesVacunaGeneralClass::setCant(int value)
{
    cant = value;
}

int listaLotesVacunaGeneralClass::getMax() const
{
    return max;
}

void listaLotesVacunaGeneralClass::setMax(int value)
{
    max = value;
}
listaLotesVacunaGeneralClass::listaLotesVacunaGeneralClass()
{
    this->max = 0;
    this->cant = 0;
    this->lote = NULL;
}

listaLotesVacunaGeneralClass::~listaLotesVacunaGeneralClass()
{

}

void listaLotesVacunaGeneralClass::crecerListaLotes(){
    loteGeneralClass *aux = new loteGeneralClass[this->cant + Maxi];
    for (int i = 0; i < this->cant; i++){
        *(aux + i) = *(this->lote + i);
    }
    /*if (lE.cab != NULL){
        delete lE.cab;
    }*/
    this->lote = aux;
    this->max += Maxi;
}

void listaLotesVacunaGeneralClass::insertarLote(loteGeneralClass *nuevoLote){
    if (this->cant == this->max){
        this->crecerListaLotes();
    }
    *(this->lote + this->cant) = *nuevoLote;
    this->cant++;
}


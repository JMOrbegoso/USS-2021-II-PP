#include "listal.h"

nodoL *listaL::getCabL() const { return cabL; }

void listaL::setCabL(nodoL *value) { cabL = value; }

int listaL::getCantL() const { return cantL; }

void listaL::setCantL(int value) { cantL = value; }
listaL::listaL() {
  this->cabL = NULL;
  this->cantL = 0;
}

listaL::~listaL() {}

void listaL::insertarL(libroL *libro) {
  nodoL *aux = new (struct nodoL);
  nodoL *temp = new (struct nodoL);
  temp->setInfo(&libro);
  temp->setSgte(NULL);
  temp->setAnt(NULL);
  if (this->cabL == NULL) {
    this->cabL = temp;
    this->cabL->ant = NULL;
  } else {
    aux = this->cabL;
    while (aux->getSgte() != NULL) {
      aux = aux->getSgte();
    }
    aux->setSgte(temp);
    aux = setAnt(temp);
  }
  this->cantL++;
}

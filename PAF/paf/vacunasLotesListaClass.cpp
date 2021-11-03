#include "vacunasLotesListaClass.h"

#include <iostream>

void vacunasLotesListaClass::crecer(int crecerEn) {
  vacunaLoteClass* aux = new vacunaLoteClass[this->cantidad + crecerEn];

  for (int i = 0; i < this->cantidad; i++) {
    *(aux + i) = *(this->cab + i);
  }

  this->cab = aux;
  this->max += crecerEn;
}

vacunasLotesListaClass::~vacunasLotesListaClass() {}
vacunasLotesListaClass::vacunasLotesListaClass() {
  this->max = 0;
  this->cantidad = 0;
  this->cab = NULL;
}

int vacunasLotesListaClass::getMax() { return this->max; }
void vacunasLotesListaClass::setMax(int value) { this->max = value; }

int vacunasLotesListaClass::getCantidad() { return this->cantidad; }
void vacunasLotesListaClass::setCantidad(int value) { this->cantidad = value; }

vacunaLoteClass* vacunasLotesListaClass::getCab() { return this->cab; }
void vacunasLotesListaClass::setCab(vacunaLoteClass* value) {
  this->cab = value;
}

void vacunasLotesListaClass::mostrar(int fila) {
  if (this->cantidad == 0) {
    cout << "No hay ningún lote de vacuna registrado" << endl;
    cout << "Primero registre al menos un lote de vacuna" << endl;
    return;
  }

  for (int x = 0; x < this->cantidad; x++) {
    (*(this->cab + x)).mostrar(fila + x + 1, x + 1);
  }
}

void vacunasLotesListaClass::insertar(vacunaLoteClass* nuevoAlmacen) {
  if (this->cantidad == this->max) {
    this->crecer(2);
  }

  *(this->cab + this->cantidad) = *nuevoAlmacen;
  this->cantidad++;
}

vacunaLoteClass* vacunasLotesListaClass::elegirLoteDeVacuna(string mensaje) {
  vacunaLoteClass* aux;
  int selectedOption;

  if (this->cantidad == 0) {
    return NULL;
  }

  cout << endl
       << mensaje << "." << endl
       << "Escoja entre los " << this->getCantidad()
       << " lotes de vacunas siguientes:" << endl
       << endl;

  for (int x = 0; x < this->getCantidad(); x++) {
    aux = this->getCab() + x;

    cout << "[" << x + 1 << "]";
    cout << " - Lote de Vacunas: ";
    cout << aux->getNombre();
    cout << " - ";
    cout << aux->getFechaCaducidad();
    cout << endl;
  }

  cout << endl << "Introduzca la opción deseada:" << endl;
  cin >> selectedOption;

  while (!(1 <= selectedOption && selectedOption <= this->getCantidad())) {
    cout << "Por favor, introduzca un valor entre 1 y " << this->getCantidad()
         << "." << endl;
    fflush(stdin);
    cin >> selectedOption;
  }

  return (this->getCab() + selectedOption - 1);
}
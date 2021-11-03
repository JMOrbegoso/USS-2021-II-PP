#include "almacenesListaClass.h"

#include <iostream>

void almacenesListaClass::crecer(int crecerEn) {
  almacenClass* aux = new almacenClass[this->cantidad + crecerEn];

  for (int i = 0; i < this->cantidad; i++) {
    *(aux + i) = *(this->cab + i);
  }

  this->cab = aux;
  this->max += crecerEn;
}

almacenesListaClass::~almacenesListaClass() {}
almacenesListaClass::almacenesListaClass() {
  this->max = 0;
  this->cantidad = 0;
  this->cab = NULL;
}

int almacenesListaClass::getMax() { return this->max; }
void almacenesListaClass::setMax(int value) { this->max = value; }

int almacenesListaClass::getCantidad() { return this->cantidad; }
void almacenesListaClass::setCantidad(int value) { this->max = cantidad; }

almacenClass* almacenesListaClass::getCab() { return this->cab; }
void almacenesListaClass::setCab(almacenClass* value) { this->max = cab; }

void almacenesListaClass::mostrar(int fila) {
  if (this->cantidad == 0) {
    cout << "No hay ningún producto registrado" << endl;
    cout << "Primero registre al menos un producto" << endl;
    return;
  }

  for (int x = 0; x < this->cantidad; x++) {
    (*(this->cab + x)).mostrar(fila + x + 1, x + 1);
  }
}

void almacenesListaClass::insertar(almacenClass* nuevoAlmacen) {
  if (this->cantidad == this->max) {
    this->crecer(2);
  }

  *(this->cab + this->cantidad) = *nuevoAlmacen;
  this->cantidad++;
}

almacenClass* almacenesListaClass::elegirAlmacen(string mensaje) {
  almacenClass* aux;
  int selectedOption;

  if (this->cantidad == 0) {
    return NULL;
  }

  cout << endl
       << mensaje << "." << endl
       << "Escoja entre los " << this->getCantidad()
       << " almacenes siguientes:" << endl
       << endl;

  for (int x = 0; x < this->getCantidad(); x++) {
    aux = this->getCab() + x;

    cout << "[" << x + 1 << "]";
    cout << " - Almacen: ";
    cout << aux->getDireccion();
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
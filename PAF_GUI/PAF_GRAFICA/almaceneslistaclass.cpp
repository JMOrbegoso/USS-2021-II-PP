#include "almaceneslistaclass.h"
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
void almacenesListaClass::setCantidad(int value) { this->cantidad = value; }

almacenClass* almacenesListaClass::getCab() { return this->cab; }
void almacenesListaClass::setCab(almacenClass* value) { this->cab = value; }

void almacenesListaClass::insertar(almacenClass* nuevoAlmacen) {
  if (this->cantidad == this->max) {
    this->crecer(2);
  }

  *(this->cab + this->cantidad) = *nuevoAlmacen;
  this->cantidad++;
}

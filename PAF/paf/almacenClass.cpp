#include "almacenClass.h"

#include <iostream>

almacenClass::~almacenClass() {}
almacenClass::almacenClass() {}

string almacenClass::getCodigo() { return this->codigo; }
void almacenClass::setCodigo(string value) { this->codigo = value; }

string almacenClass::getEncargado() { return this->encargado; }
void almacenClass::setEncargado(string value) { this->encargado = value; }

string almacenClass::getDireccion() { return this->direccion; }
void almacenClass::setDireccion(string value) { this->direccion = value; }

bool almacenClass::getEstado() { return this->estado; }
void almacenClass::setEstado(bool value) { this->estado = value; }

void almacenClass::mostrar(int fila, int numeroDeOrden) {
  basicas::gotoxy(0, fila);
  cout << numeroDeOrden;
  basicas::gotoxy(5, fila);
  cout << this->getCodigo();
  basicas::gotoxy(15, fila);
  cout << this->getDireccion();
  basicas::gotoxy(30, fila);
  cout << this->getEncargado();
  basicas::gotoxy(45, fila);
  cout << this->getEstado();
}
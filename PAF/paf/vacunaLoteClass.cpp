#include "vacunaLoteClass.h"

vacunaLoteClass ::~vacunaLoteClass() {}
vacunaLoteClass::vacunaLoteClass() {}

string vacunaLoteClass::getCodigo() { return this->codigo; }
void vacunaLoteClass::setCodigo(string value) { this->codigo = value; }

string vacunaLoteClass::getNombre() { return this->nombre; }
void vacunaLoteClass::setNombre(string value) { this->nombre = value; }

unsigned short vacunaLoteClass::getNumeroDeVacunas() {
  return this->numeroDeVacunas;
}
void vacunaLoteClass::setNumeroDeVacunas(unsigned short value) {
  this->estado = value;
}

string vacunaLoteClass::getFechaCaducidad() { return this->fechaCaducidad; }
void vacunaLoteClass::setFechaCaducidad(string value) {
  this->fechaCaducidad = value;
}

bool vacunaLoteClass::getEstado() { return this->estado; }
void vacunaLoteClass::setEstado(bool value) { this->estado = value; }

void vacunaLoteClass::mostrar(int fila, int numeroDeOrden) {
  basicas::gotoxy(0, fila);
  cout << numeroDeOrden;
  basicas::gotoxy(5, fila);
  cout << this->getCodigo();
  basicas::gotoxy(15, fila);
  cout << this->getNombre();
  basicas::gotoxy(30, fila);
  cout << this->getNumeroDeVacunas();
  basicas::gotoxy(45, fila);
  cout << this->getFechaCaducidad();
  basicas::gotoxy(65, fila);
  cout << this->getEstado();
}
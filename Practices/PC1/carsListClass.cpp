#include "carsListClass.h"

#include <iostream>

using namespace std;

carClass* carsListClass::getElementByIndex(int index) {
  carNodeClass* auxNode = this->getHead();

  if (0 >= index) {
    return NULL;
  }

  if (index > this->getLength()) {
    return NULL;
  }

  for (int i = 1; auxNode != NULL; i++) {
    if (i == index) {
      return auxNode->getCar();
    }
    auxNode = auxNode->getNext();
  }

  return NULL;
}

carsListClass::~carsListClass() {}
carsListClass::carsListClass() {
  this->length = 0;
  this->head = NULL;
}

int carsListClass::getLength() { return this->length; }
void carsListClass::setLength(int value) { this->length = value; }

carNodeClass* carsListClass::getHead() { return this->head; }
void carsListClass::setHead(carNodeClass* value) { this->head = value; }

void carsListClass::show(int rowNumber) {
  carNodeClass* auxCarNode = new carNodeClass();
  int i = 1;

  if (this->length == 0) {
    cout << "No hay ningún vehiculo registrado" << endl;
    cout << "Primero registre al menos un vehiculo" << endl;
    return;
  }

  while (auxCarNode != NULL) {
    auxCarNode->getCar()->show(rowNumber + i, i);
    auxCarNode = auxCarNode->getNext();
  }
}

void carsListClass::insert(carClass* newCar) {
  carNodeClass* newNode = new carNodeClass();

  carNodeClass* lastNode = this->getHead();

  newNode->setCar(newCar);
  newNode->setNext(NULL);

  if (this->getHead() == NULL) {
    newNode->setPrevious(NULL);
    this->setHead(newNode);
  } else {
    while (lastNode->getNext() != NULL) {
      lastNode = lastNode->getNext();
    }

    lastNode->setNext(newNode);
    newNode->setPrevious(lastNode);
  }

  this->setLength(this->getLength() + 1);
}

carClass* carsListClass::pickCar(string message) {
  carNodeClass* aux;
  int selectedOption;

  if (this->length == 0) {
    return NULL;
  }

  cout << endl
       << message << "." << endl
       << "Escoja entre los " << this->getLength()
       << " vehiculos siguientes:" << endl
       << endl;

  for (int x = 0; x < this->getLength(); x++) {
    aux = this->getHead() + x;

    cout << "[" << x + 1 << "]";
    cout << " - ";
    cout << aux->getCar()->getCode();
    cout << " - ";
    cout << aux->getCar()->getBrand();
    cout << " ";
    cout << aux->getCar()->getModel();
    cout << " ";
    cout << aux->getCar()->getPlate();
    cout << endl;
  }

  cout << endl << "Introduzca la opción deseada:" << endl;
  cin >> selectedOption;

  while (!(1 <= selectedOption && selectedOption <= this->getLength())) {
    cout << "Por favor, introduzca un valor entre 1 y " << this->getLength()
         << "." << endl;
    fflush(stdin);
    cin >> selectedOption;
  }

  return this->getElementByIndex(selectedOption);
}

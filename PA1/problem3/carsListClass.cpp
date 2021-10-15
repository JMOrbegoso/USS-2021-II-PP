#include "carsListClass.h"

#include <iostream>

using namespace std;

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
  carNodeClass* auxStudentNode = new carNodeClass();
  int i = 1;

  if (this->length == 0) {
    cout << "No hay ningún estudiante registrado" << endl;
    cout << "Primero registre al menos un estudiante" << endl;
    return;
  }

  while (auxStudentNode != NULL) {
    auxStudentNode->getStudent()->show(rowNumber + i, i);
    auxStudentNode = auxStudentNode->getNext();
  }
}

void carsListClass::insert(carClass* newStudent) {
  carNodeClass* newNode = new carNodeClass();

  carNodeClass* lastNode = this->getHead();

  newNode->setStudent(newStudent);
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
      return auxNode->getStudent();
    }
    auxNode = auxNode->getNext();
  }

  return NULL;
}

carClass* carsListClass::pickStudent(string message) {
  carNodeClass* aux;
  int selectedOption;

  if (this->length == 0) {
    return NULL;
  }

  cout << endl
       << message << "." << endl
       << "Escoja entre los " << this->getLength()
       << " estudiantes siguientes:" << endl
       << endl;

  for (int x = 0; x < this->getLength(); x++) {
    aux = this->getHead() + x;

    cout << "[" << x + 1 << "]";
    cout << " - ";
    cout << aux->getStudent()->getCode();
    cout << " - ";
    cout << aux->getStudent()->getLastName();
    cout << " ";
    cout << aux->getStudent()->getFirstName();
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

  return getElementByIndex(selectedOption);
}

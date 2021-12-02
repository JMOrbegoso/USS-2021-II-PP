#include "employeesListClass.h"

#include <iostream>

using namespace std;

employeeClass* employeesListClass::getElementByIndex(int index) {
  employeeNodeClass* auxNode = this->getHead();

  if (0 >= index) {
    return NULL;
  }

  if (index > this->getLength()) {
    return NULL;
  }

  for (int i = 1; auxNode != NULL; i++) {
    if (i == index) {
      return auxNode->getEmployee();
    }
    auxNode = auxNode->getNext();
  }

  return NULL;
}

employeesListClass::~employeesListClass() {}
employeesListClass::employeesListClass() {
  this->length = 0;
  this->head = NULL;
}

int employeesListClass::getLength() { return this->length; }
void employeesListClass::setLength(int value) { this->length = value; }

employeeNodeClass* employeesListClass::getHead() { return this->head; }
void employeesListClass::setHead(employeeNodeClass* value) {
  this->head = value;
}

void employeesListClass::show(int rowNumber) {
  employeeNodeClass* auxCarNode = new employeeNodeClass();
  int i = 1;

  if (this->length == 0) {
    cout << "No hay ningún vehiculo registrado" << endl;
    cout << "Primero registre al menos un vehiculo" << endl;
    return;
  }

  while (auxCarNode != NULL) {
    auxCarNode->getEmployee()->show(rowNumber + i, i);
    auxCarNode = auxCarNode->getNext();
  }
}

void employeesListClass::insert(employeeClass* newCar) {
  employeeNodeClass* newNode = new employeeNodeClass();

  employeeNodeClass* lastNode = this->getHead();

  newNode->setEmployee(newCar);
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

employeeClass* employeesListClass::pickEmployee(string message) {
  employeeNodeClass* aux;
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
    cout << aux->getEmployee()->getCode();
    cout << " - ";
    cout << aux->getEmployee()->getBrand();
    cout << " ";
    cout << aux->getEmployee()->getModel();
    cout << " ";
    cout << aux->getEmployee()->getPlate();
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

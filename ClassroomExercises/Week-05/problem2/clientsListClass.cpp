#include "clientsListClass.h"

#include <iostream>

using namespace std;

void clientsListClass::grow(int growIn) {
  clientClass* aux = new clientClass[this->length + growIn];

  for (int i = 0; i < this->length; i++) {
    *(aux + i) = *(this->head + i);
  }

  this->head = aux;
  this->capacity += growIn;
}

clientsListClass::~clientsListClass() {}
clientsListClass::clientsListClass() {
  this->capacity = 0;
  this->length = 0;
  this->head = NULL;
}

int clientsListClass::getCapacity() { return this->capacity; }
void clientsListClass::setCapacity(int value) { this->capacity = value; }

int clientsListClass::getLength() { return this->length; }
void clientsListClass::setLength(int value) { this->length = value; }

clientClass* clientsListClass::getHead() { return this->head; }
void clientsListClass::setHead(clientClass* value) { this->head = value; }

void clientsListClass::showStudents(int rowNumber) {
  clientClass* auxStudent;
  int i = 1;

  if (this->length == 0) {
    cout << "No hay ningún estudiante registrado" << endl;
    cout << "Primero registre al menos un estudiante" << endl;
    return;
  }

  for (int x = 0; x < this->length; x++) {
    auxStudent = this->head + x;
    auxStudent->showStudent(rowNumber + i, i);
    i++;
  }
}

void clientsListClass::insert(clientClass* newStudent) {
  if (this->length == this->capacity) {
    this->grow(2);
  }

  *(this->head + this->length) = *newStudent;
  this->length++;
}

clientClass* clientsListClass::pickStudent(string message) {
  clientClass* aux;
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
    cout << aux->getCode();
    cout << " - ";
    cout << aux->getLastName();
    cout << " ";
    cout << aux->getFirstName();
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

  return (this->getHead() + selectedOption - 1);
}

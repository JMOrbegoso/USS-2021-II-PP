#include "studentsListClass.h"

#include <iostream>

using namespace std;

studentsListClass::~studentsListClass() {}
studentsListClass::studentsListClass() {
  this->length = 0;
  this->head = NULL;
}

int studentsListClass::getLength() { return this->length; }
void studentsListClass::setLength(int value) { this->length = value; }

studentNodeClass* studentsListClass::getHead() { return this->head; }
void studentsListClass::setHead(studentNodeClass* value) { this->head = value; }

void studentsListClass::show(int rowNumber) {
  studentNodeClass* auxStudentNode = new studentNodeClass();
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

void studentsListClass::insert(studentClass* newStudent) {
  studentNodeClass* newNode = new studentNodeClass();

  studentNodeClass* lastNode = this->getHead();

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

studentClass* studentsListClass::getElementByIndex(int index) {
  studentNodeClass* auxNode = this->getHead();

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

studentClass* studentsListClass::pickStudent(string message) {
  studentNodeClass* aux;
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

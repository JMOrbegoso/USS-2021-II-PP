#include "clientsListClass.h"

#include "helpersClass.h"

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

void clientsListClass::show(int rowNumber) {
  if (this->length == 0) {
    cout << "No hay ningún aula registrada" << endl;
    cout << "Primero registre al menos un aula" << endl;
    return;
  }

  for (int x = 0; x < this->length; x++) {
    (*(this->head + x)).show(rowNumber + x + 1, x + 1);
  }
}

carClass* clientsListClass::findStudentByDni(string dni) {
  clientClass* auxClassRoom;
  carNodeClass* auxStudentNode;

  if (this->length == 0) {
    return NULL;
  }

  for (int x = 0; x < this->length; x++) {
    auxClassRoom = this->head + x;

    auxStudentNode = auxClassRoom->getStudents()->getHead();
    while (auxStudentNode != NULL) {
      if (auxStudentNode->getStudent()->getDni() == dni)
        return auxStudentNode->getStudent();

      auxStudentNode = auxStudentNode->getNext();
    }
  }
}

void clientsListClass::insert(clientClass* newClassRoom) {
  if (this->length == this->capacity) {
    this->grow(2);
  }

  *(this->head + this->length) = *newClassRoom;
  this->length++;
}

clientClass* clientsListClass::pickClassRoom(string message) {
  clientClass* aux;
  int selectedOption;

  if (this->length == 0) {
    return NULL;
  }

  cout << endl
       << message << "." << endl
       << "Escoja entre las " << this->getLength()
       << " aulas siguientes:" << endl
       << endl;

  for (int x = 0; x < this->getLength(); x++) {
    aux = this->getHead() + x;

    cout << "[" << x + 1 << "]";
    cout << " - Aula: ";
    cout << aux->getCode();
    cout << " - Con el prof. ";
    cout << aux->getTeacherFullName();
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

#include "roomsListClass.h"

#include "helpersClass.h"

void roomsListClass::grow(int growIn) {
  roomClass* aux = new roomClass[this->length + growIn];

  for (int i = 0; i < this->length; i++) {
    *(aux + i) = *(this->head + i);
  }

  this->head = aux;
  this->capacity += growIn;
}

roomsListClass::~roomsListClass() {}
roomsListClass::roomsListClass() {
  this->capacity = 0;
  this->length = 0;
  this->head = NULL;
}

int roomsListClass::getCapacity() { return this->capacity; }
void roomsListClass::setCapacity(int value) { this->capacity = value; }

int roomsListClass::getLength() { return this->length; }
void roomsListClass::setLength(int value) { this->length = value; }

roomClass* roomsListClass::getHead() { return this->head; }
void roomsListClass::setHead(roomClass* value) { this->head = value; }

void roomsListClass::show(int rowNumber) {
  if (this->length == 0) {
    cout << "No hay ningún cliente registrado" << endl;
    cout << "Primero registre al menos un cliente" << endl;
    return;
  }

  for (int x = 0; x < this->length; x++) {
    (*(this->head + x)).show(rowNumber + x + 1, x + 1);
  }
}

roomClass* roomsListClass::findClientByDni(string dni) {
  roomClass* auxClient;

  if (this->length == 0) {
    return NULL;
  }

  for (int x = 0; x < this->length; x++) {
    auxClient = this->head + x;

    if (auxClient->getDni() == dni) return auxClient;
  }

  return NULL;
}

clientClass* roomsListClass::findCarByPlate(string plate) {
  roomClass* auxClient;
  clientNodeClass* auxCarNode;

  if (this->length == 0) {
    return NULL;
  }

  for (int x = 0; x < this->length; x++) {
    auxClient = this->head + x;

    auxCarNode = auxClient->getCars()->getHead();
    while (auxCarNode != NULL) {
      if (auxCarNode->getCar()->getPlate() == plate)
        return auxCarNode->getCar();

      auxCarNode = auxCarNode->getNext();
    }
  }

  return NULL;
}

void roomsListClass::insert(roomClass* newClient) {
  if (this->length == this->capacity) {
    this->grow(2);
  }

  *(this->head + this->length) = *newClient;
  this->length++;
}

roomClass* roomsListClass::pickClient(string message) {
  roomClass* aux;
  int selectedOption;

  if (this->length == 0) {
    return NULL;
  }

  cout << endl
       << message << "." << endl
       << "Escoja entre los " << this->getLength()
       << " clientes siguientes:" << endl
       << endl;

  for (int x = 0; x < this->getLength(); x++) {
    aux = this->getHead() + x;

    cout << "[" << x + 1 << "]";
    cout << " - Cliente: ";
    cout << aux->getCode();
    cout << " - ";
    cout << aux->getFirstName();
    cout << " ";
    cout << aux->getLastName();
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

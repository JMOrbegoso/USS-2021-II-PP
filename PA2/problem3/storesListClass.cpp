#include "storesListClass.h"

#include "helpersClass.h"

void storesListClass::grow(int growIn) {
  storeClass* aux = new storeClass[this->length + growIn];

  for (int i = 0; i < this->length; i++) {
    *(aux + i) = *(this->head + i);
  }

  this->head = aux;
  this->capacity += growIn;
}

storesListClass::~storesListClass() {}
storesListClass::storesListClass() {
  this->capacity = 0;
  this->length = 0;
  this->head = NULL;
}

int storesListClass::getCapacity() { return this->capacity; }
void storesListClass::setCapacity(int value) { this->capacity = value; }

int storesListClass::getLength() { return this->length; }
void storesListClass::setLength(int value) { this->length = value; }

storeClass* storesListClass::getHead() { return this->head; }
void storesListClass::setHead(storeClass* value) { this->head = value; }

void storesListClass::show(int rowNumber) {
  if (this->length == 0) {
    cout << "No hay ningún cliente registrado" << endl;
    cout << "Primero registre al menos un cliente" << endl;
    return;
  }

  for (int x = 0; x < this->length; x++) {
    (*(this->head + x)).show(rowNumber + x + 1, x + 1);
  }
}

storeClass* storesListClass::findStoreByNumber(string dni) {
  storeClass* auxClient;

  if (this->length == 0) {
    return NULL;
  }

  for (int x = 0; x < this->length; x++) {
    auxClient = this->head + x;

    if (auxClient->getDni() == dni) return auxClient;
  }

  return NULL;
}

employeeClass* storesListClass::findEmployeeByDni(string plate) {
  storeClass* auxClient;
  employeeNodeClass* auxCarNode;

  if (this->length == 0) {
    return NULL;
  }

  for (int x = 0; x < this->length; x++) {
    auxClient = this->head + x;

    auxCarNode = auxClient->getEmployees()->getHead();
    while (auxCarNode != NULL) {
      if (auxCarNode->getEmployee()->getPlate() == plate)
        return auxCarNode->getEmployee();

      auxCarNode = auxCarNode->getNext();
    }
  }

  return NULL;
}

void storesListClass::insert(storeClass* newClient) {
  if (this->length == this->capacity) {
    this->grow(2);
  }

  *(this->head + this->length) = *newClient;
  this->length++;
}

storeClass* storesListClass::pickClient(string message) {
  storeClass* aux;
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

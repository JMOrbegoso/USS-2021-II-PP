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
    cout << "No hay ninguna tienda registrada" << endl;
    cout << "Primero registre al menos una tienda" << endl;
    return;
  }

  for (int x = 0; x < this->length; x++) {
    (*(this->head + x)).show(rowNumber + x + 1, x + 1);
  }
}

storeClass* storesListClass::findStoreByCode(string code) {
  storeClass* aux;

  if (this->length == 0) {
    return NULL;
  }

  for (int x = 0; x < this->length; x++) {
    aux = this->head + x;

    if (aux->getCode() == code) return aux;
  }

  return NULL;
}

employeeClass* storesListClass::findEmployeeByDni(string dni) {
  storeClass* auxStore;
  employeeNodeClass* auxEmployeeNode;

  if (this->length == 0) {
    return NULL;
  }

  for (int x = 0; x < this->length; x++) {
    auxStore = this->head + x;

    auxEmployeeNode = auxStore->getEmployees()->getHead();
    while (auxEmployeeNode != NULL) {
      if (auxEmployeeNode->getEmployee()->getDni() == dni)
        return auxEmployeeNode->getEmployee();

      auxEmployeeNode = auxEmployeeNode->getNext();
    }
  }

  return NULL;
}

clientClass* storesListClass::findClientByDni(string dni) {
  storeClass* auxStore;
  clientNodeClass* auxClientNode;

  if (this->length == 0) {
    return NULL;
  }

  for (int x = 0; x < this->length; x++) {
    auxStore = this->head + x;

    auxClientNode = auxStore->getClients()->getHead();
    while (auxClientNode != NULL) {
      if (auxClientNode->getClient()->getDni() == dni)
        return auxClientNode->getClient();

      auxClientNode = auxClientNode->getNext();
    }
  }

  return NULL;
}

void storesListClass::insert(storeClass* newStore) {
  if (this->length == this->capacity) {
    this->grow(2);
  }

  *(this->head + this->length) = *newStore;
  this->length++;
}

storeClass* storesListClass::pickStore(string message) {
  storeClass* aux;
  int selectedOption;

  if (this->length == 0) {
    return NULL;
  }

  cout << endl
       << message << "." << endl
       << "Escoja entre las " << this->getLength()
       << " tiendas siguientes:" << endl
       << endl;

  for (int x = 0; x < this->getLength(); x++) {
    aux = this->getHead() + x;

    cout << "[" << x + 1 << "]";
    cout << " - Tienda: ";
    cout << aux->getCode();
    cout << " - ";
    cout << aux->getOwner();
    cout << " - ";
    cout << aux->getSpecialization();
    cout << " - Con ";
    cout << aux->getEmployees()->getLength();
    cout << " empleado/s y ";
    cout << aux->getClients()->getLength();
    cout << " cliente/s";
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

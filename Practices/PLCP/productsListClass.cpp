#include "productsListClass.h"

#include "helpersClass.h"

void productsListClass::grow(int growIn) {
  productClass* aux = new productClass[this->length + growIn];

  for (int i = 0; i < this->length; i++) {
    *(aux + i) = *(this->head + i);
  }

  this->head = aux;
  this->capacity += growIn;
}

productsListClass::~productsListClass() {}
productsListClass::productsListClass() {
  this->capacity = 0;
  this->length = 0;
  this->head = NULL;
}

int productsListClass::getCapacity() { return this->capacity; }
void productsListClass::setCapacity(int value) { this->capacity = value; }

int productsListClass::getLength() { return this->length; }
void productsListClass::setLength(int value) { this->length = value; }

productClass* productsListClass::getHead() { return this->head; }
void productsListClass::setHead(productClass* value) { this->head = value; }

void productsListClass::show(int rowNumber) {
  if (this->length == 0) {
    cout << "No hay ningún cliente registrado" << endl;
    cout << "Primero registre al menos un cliente" << endl;
    return;
  }

  for (int x = 0; x < this->length; x++) {
    (*(this->head + x)).show(rowNumber + x + 1, x + 1);
  }
}

productClass* productsListClass::findRoomByRoomNumber(
    unsigned short roomNumber) {
  productClass* auxRoom;

  if (this->length == 0) {
    return NULL;
  }

  for (int x = 0; x < this->length; x++) {
    auxRoom = this->head + x;

    if (auxRoom->getRoomNumber() == roomNumber) return auxRoom;
  }

  return NULL;
}

clientClass* productsListClass::findClientByDni(string dni) {
  productClass* auxRoom;
  clientNodeClass* auxClientNode;

  if (this->length == 0) {
    return NULL;
  }

  for (int x = 0; x < this->length; x++) {
    auxRoom = this->head + x;

    auxClientNode = auxRoom->getClients()->getHead();
    while (auxClientNode != NULL) {
      if (auxClientNode->getClient()->getDni() == dni)
        return auxClientNode->getClient();

      auxClientNode = auxClientNode->getNext();
    }
  }

  return NULL;
}

void productsListClass::insert(productClass* newProduct) {
  if (this->length == this->capacity) {
    this->grow(2);
  }

  *(this->head + this->length) = *newProduct;
  this->length++;
}

productClass* productsListClass::pickProduct(string message) {
  productClass* aux;
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
    cout << " - Piso: ";
    cout << aux->getFloor();
    cout << " - Habitación #: ";
    cout << aux->getRoomNumber();
    cout << " - Tipo: ";
    cout << aux->getRoomType();
    cout << " - Status: ";
    cout << aux->getStatus();
    cout << " - Con  ";
    cout << aux->getClients()->getLength();
    cout << " clientes.";
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

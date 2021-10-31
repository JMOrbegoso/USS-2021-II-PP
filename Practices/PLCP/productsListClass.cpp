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
    cout << "No hay ningún producto registrado" << endl;
    cout << "Primero registre al menos un producto" << endl;
    return;
  }

  for (int x = 0; x < this->length; x++) {
    (*(this->head + x)).show(rowNumber + x + 1, x + 1);
  }
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
       << " productos siguientes:" << endl
       << endl;

  for (int x = 0; x < this->getLength(); x++) {
    aux = this->getHead() + x;

    cout << "[" << x + 1 << "]";
    cout << " - Producto: ";
    cout << aux->getName();
    cout << " - Cantidad: ";
    cout << aux->getStock();
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

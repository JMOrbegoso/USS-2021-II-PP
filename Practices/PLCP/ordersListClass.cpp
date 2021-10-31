#include "ordersListClass.h"

#include "helpersClass.h"

void ordersListClass::grow(int growIn) {
  orderClass* aux = new orderClass[this->length + growIn];

  for (int i = 0; i < this->length; i++) {
    *(aux + i) = *(this->head + i);
  }

  this->head = aux;
  this->capacity += growIn;
}

ordersListClass::~ordersListClass() {}
ordersListClass::ordersListClass() {
  this->capacity = 0;
  this->length = 0;
  this->head = NULL;
}

int ordersListClass::getCapacity() { return this->capacity; }
void ordersListClass::setCapacity(int value) { this->capacity = value; }

int ordersListClass::getLength() { return this->length; }
void ordersListClass::setLength(int value) { this->length = value; }

orderClass* ordersListClass::getHead() { return this->head; }
void ordersListClass::setHead(orderClass* value) { this->head = value; }

void ordersListClass::show(int rowNumber) {
  if (this->length == 0) {
    cout << "No hay ninguna orden registrada" << endl;
    cout << "Primero registre al menos una orden" << endl;
    return;
  }

  for (int x = 0; x < this->length; x++) {
    (*(this->head + x)).show(rowNumber + x + 1, x + 1);
  }
}

void ordersListClass::insert(orderClass* newOrder) {
  if (this->length == this->capacity) {
    this->grow(2);
  }

  *(this->head + this->length) = *newOrder;
  this->length++;
}

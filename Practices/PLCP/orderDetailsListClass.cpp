#include "orderDetailsListClass.h"

#include <iostream>

using namespace std;

orderDetailsListClass::~orderDetailsListClass() {}
orderDetailsListClass::orderDetailsListClass() {
  this->length = 0;
  this->head = NULL;
}

int orderDetailsListClass::getLength() { return this->length; }
void orderDetailsListClass::setLength(int value) { this->length = value; }

orderDetailNodeClass* orderDetailsListClass::getHead() { return this->head; }
void orderDetailsListClass::setHead(orderDetailNodeClass* value) {
  this->head = value;
}

void orderDetailsListClass::show(int rowNumber) {
  orderDetailNodeClass* auxClientNode = new orderDetailNodeClass();
  int i = 1;

  if (this->length == 0) {
    cout << "No hay ningún vehiculo registrado" << endl;
    cout << "Primero registre al menos un vehiculo" << endl;
    return;
  }

  while (auxClientNode != NULL) {
    auxClientNode->getClient()->show(rowNumber + i, i);
    auxClientNode = auxClientNode->getNext();
  }
}

void orderDetailsListClass::insert(orderDetailClass* newCar) {
  orderDetailNodeClass* newNode = new orderDetailNodeClass();

  orderDetailNodeClass* lastNode = this->getHead();

  newNode->setClient(newCar);
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

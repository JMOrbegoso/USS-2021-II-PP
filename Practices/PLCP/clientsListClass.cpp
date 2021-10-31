#include "clientsListClass.h"

#include <iostream>

using namespace std;

clientClass* clientsListClass::getElementByIndex(int index) {
  clientNodeClass* auxNode = this->getHead();

  if (0 >= index) {
    return NULL;
  }

  if (index > this->getLength()) {
    return NULL;
  }

  for (int i = 1; auxNode != NULL; i++) {
    if (i == index) {
      return auxNode->getClient();
    }
    auxNode = auxNode->getNext();
  }

  return NULL;
}

clientsListClass::~clientsListClass() {}
clientsListClass::clientsListClass() {
  this->length = 0;
  this->head = NULL;
}

int clientsListClass::getLength() { return this->length; }
void clientsListClass::setLength(int value) { this->length = value; }

clientNodeClass* clientsListClass::getHead() { return this->head; }
void clientsListClass::setHead(clientNodeClass* value) { this->head = value; }

void clientsListClass::show(int rowNumber) {
  clientNodeClass* auxClientNode = new clientNodeClass();
  int i = 1;

  if (this->length == 0) {
    cout << "No hay ningún cliente registrado" << endl;
    cout << "Primero registre al menos un cliente" << endl;
    return;
  }

  auxClientNode = this->getHead();

  while (auxClientNode != NULL) {
    auxClientNode->getClient()->show(rowNumber + i, i);
    auxClientNode = auxClientNode->getNext();
    i++;
  }
}

void clientsListClass::insert(clientClass* newClient) {
  clientNodeClass* newNode = new clientNodeClass();

  clientNodeClass* lastNode = this->getHead();

  newNode->setClient(newClient);
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

clientClass* clientsListClass::pickClient(string message) {
  clientNodeClass* aux;
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
    cout << " - ";
    cout << aux->getClient()->getFirstName();
    cout << " ";
    cout << aux->getClient()->getLastName();
    cout << " ";
    cout << aux->getClient()->getMotherLastName();
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

  return this->getElementByIndex(selectedOption);
}

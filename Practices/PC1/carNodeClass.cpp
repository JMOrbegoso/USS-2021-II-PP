#include "carNodeClass.h"

using namespace std;

clientNodeClass::~clientNodeClass() {}
clientNodeClass::clientNodeClass() {
  this->car = NULL;
  this->next = NULL;
  this->previous = NULL;
}

clientClass* clientNodeClass::getCar() { return this->car; }
void clientNodeClass::setCar(clientClass* value) { this->car = value; }

clientNodeClass* clientNodeClass::getNext() { return this->next; }
void clientNodeClass::setNext(clientNodeClass* value) { this->next = value; }

clientNodeClass* clientNodeClass::getPrevious() { return this->previous; }
void clientNodeClass::setPrevious(clientNodeClass* value) {
  this->previous = value;
};

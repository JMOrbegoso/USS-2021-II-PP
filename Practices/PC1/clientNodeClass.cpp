#include "clientNodeClass.h"

using namespace std;

clientNodeClass::~clientNodeClass() {}
clientNodeClass::clientNodeClass() {
  this->client = NULL;
  this->next = NULL;
  this->previous = NULL;
}

clientClass* clientNodeClass::getCar() { return this->client; }
void clientNodeClass::setCar(clientClass* value) { this->client = value; }

clientNodeClass* clientNodeClass::getNext() { return this->next; }
void clientNodeClass::setNext(clientNodeClass* value) { this->next = value; }

clientNodeClass* clientNodeClass::getPrevious() { return this->previous; }
void clientNodeClass::setPrevious(clientNodeClass* value) {
  this->previous = value;
};

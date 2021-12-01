#include "carNodeClass.h"

using namespace std;

carNodeClass::~carNodeClass() {}
carNodeClass::carNodeClass() {
  this->car = NULL;
  this->next = NULL;
  this->previous = NULL;
}

carClass* carNodeClass::getCar() { return this->car; }
void carNodeClass::setCar(carClass* value) { this->car = value; }

carNodeClass* carNodeClass::getNext() { return this->next; }
void carNodeClass::setNext(carNodeClass* value) { this->next = value; }

carNodeClass* carNodeClass::getPrevious() { return this->previous; }
void carNodeClass::setPrevious(carNodeClass* value) { this->previous = value; };

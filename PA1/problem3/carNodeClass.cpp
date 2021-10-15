#include "carNodeClass.h"

using namespace std;

carNodeClass::~carNodeClass() {}
carNodeClass::carNodeClass() {
  this->student = NULL;
  this->next = NULL;
  this->previous = NULL;
}

carClass* carNodeClass::getStudent() { return this->student; }
void carNodeClass::setStudent(carClass* value) { this->student = value; }

carNodeClass* carNodeClass::getNext() { return this->next; }
void carNodeClass::setNext(carNodeClass* value) { this->next = value; }

carNodeClass* carNodeClass::getPrevious() { return this->previous; }
void carNodeClass::setPrevious(carNodeClass* value) { this->previous = value; };

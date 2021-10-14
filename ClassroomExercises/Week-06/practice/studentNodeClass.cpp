#include "studentNodeClass.h"

using namespace std;

studentNodeClass::~studentNodeClass() {}
studentNodeClass::studentNodeClass() {
  this->student = NULL;
  this->next = NULL;
  this->previous = NULL;
}

studentClass* studentNodeClass::getStudent() { return this->student; }
void studentNodeClass::setStudent(studentClass* value) {
  this->student = value;
}

studentNodeClass* studentNodeClass::getNext() { return this->next; }
void studentNodeClass::setNext(studentNodeClass* value) { this->next = value; }

studentNodeClass* studentNodeClass::getPrevious() { return this->previous; }
void studentNodeClass::setPrevious(studentNodeClass* value) {
  this->previous = value;
};

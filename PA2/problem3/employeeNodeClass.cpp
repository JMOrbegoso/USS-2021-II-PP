#include "employeeNodeClass.h"

using namespace std;

employeeNodeClass::~employeeNodeClass() {}
employeeNodeClass::employeeNodeClass() {
  this->employee = NULL;
  this->next = NULL;
  this->previous = NULL;
}

employeeClass* employeeNodeClass::getEmployee() { return this->employee; }
void employeeNodeClass::setEmployee(employeeClass* value) {
  this->employee = value;
}

employeeNodeClass* employeeNodeClass::getNext() { return this->next; }
void employeeNodeClass::setNext(employeeNodeClass* value) {
  this->next = value;
}

employeeNodeClass* employeeNodeClass::getPrevious() { return this->previous; }
void employeeNodeClass::setPrevious(employeeNodeClass* value) {
  this->previous = value;
};

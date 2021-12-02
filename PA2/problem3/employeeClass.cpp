#include "employeeClass.h"

#include <iostream>

#include "helpersClass.h"

using namespace std;

int employeeClass::counter = 1;

employeeClass::~employeeClass() {}
employeeClass::employeeClass() {}
employeeClass::employeeClass(string firstName, string lastName, string dni,
                             float salary)
    : personClass(firstName, lastName, dni) {
  this->code = "empl-" + to_string(employeeClass::counter);
  employeeClass::counter++;

  this->salary = salary;
}

string employeeClass::getCode() { return this->code; }

float employeeClass::getSalary() { return this->salary; }
void employeeClass::setSalary(float value) { this->salary = value; }

void employeeClass::show(int rowNumber, int itemNumber) {
  helpersClass::gotoxy(0, rowNumber);
  cout << itemNumber;
  helpersClass::gotoxy(5, rowNumber);
  cout << this->getCode();
  helpersClass::gotoxy(15, rowNumber);
  cout << this->getFirstName();
  helpersClass::gotoxy(30, rowNumber);
  cout << this->getLastName();
  helpersClass::gotoxy(45, rowNumber);
  cout << this->getDni();
  helpersClass::gotoxy(65, rowNumber);
  cout << this->getSalary();
}

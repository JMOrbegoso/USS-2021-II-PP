#include "storeClass.h"

#include "helpersClass.h"

using namespace std;

int storeClass::counter = 1;

storeClass::~storeClass() {}
storeClass::storeClass() {}
storeClass::storeClass(string owner, string specialization) {
  this->code = "sto-" + to_string(storeClass::counter);
  storeClass::counter++;

  this->owner = owner;
  this->specialization = specialization;

  this->employees = new employeesListClass();
  this->clients = new clientsListClass();
}

string storeClass::getCode() { return this->code; }

string storeClass::getOwner() { return this->owner; }
void storeClass::setOwner(string value) { this->owner = value; }

string storeClass::getSpecialization() { return this->specialization; }
void storeClass::setSpecialization(string value) {
  this->specialization = value;
}

employeesListClass *storeClass::getEmployees() { return this->employees; }
void storeClass::setEmployees(employeesListClass *value) {
  this->employees = value;
}

clientsListClass *storeClass::getClients() { return this->clients; }
void storeClass::setClients(clientsListClass *value) { this->clients = value; }

void storeClass::show(int rowNumber, int itemNumber) {
  helpersClass::gotoxy(0, rowNumber);
  cout << itemNumber;
  helpersClass::gotoxy(5, rowNumber);
  cout << this->getCode();
  helpersClass::gotoxy(15, rowNumber);
  cout << this->getOwner();
  helpersClass::gotoxy(35, rowNumber);
  cout << this->getSpecialization();
  helpersClass::gotoxy(60, rowNumber);
  cout << this->getEmployees()->getLength();
  helpersClass::gotoxy(80, rowNumber);
  cout << this->getClients()->getLength();
}

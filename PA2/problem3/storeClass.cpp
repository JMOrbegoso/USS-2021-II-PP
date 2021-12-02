#include "storeClass.h"

#include "helpersClass.h"

using namespace std;

int storeClass::counter = 1;

storeClass::~storeClass() {}
storeClass::storeClass() {}
storeClass::storeClass(string firstName, string lastName, string dni,
                       unsigned short age, bool genre) {
  this->code = "cl-" + to_string(storeClass::counter);
  storeClass::counter++;

  this->firstName = firstName;
  this->lastName = lastName;
  this->dni = dni;
  this->age = age;
  this->genre = genre;

  this->employees = new employeesListClass();
}

string storeClass::getCode() { return this->code; }

string storeClass::getFirstName() { return this->firstName; }
void storeClass::setFirstName(string value) { this->firstName = value; }

string storeClass::getLastName() { return this->lastName; }
void storeClass::setLastName(string value) { this->lastName = value; }

string storeClass::getDni() { return this->dni; }
void storeClass::setDni(string value) { this->dni = value; }

unsigned short storeClass::getAge() { return this->age; }
void storeClass::setAge(unsigned short value) { this->age = value; }

bool storeClass::getGenre() { return this->genre; }
void storeClass::setGenre(bool value) { this->genre = value; }
string storeClass::getGenreAsString() {
  if (this->genre)
    return "Masculino";
  else
    return "Femenino";
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
  cout << this->getFirstName();
  helpersClass::gotoxy(30, rowNumber);
  cout << this->getLastName();
  helpersClass::gotoxy(45, rowNumber);
  cout << this->getDni();
  helpersClass::gotoxy(55, rowNumber);
  cout << this->getAge();
  helpersClass::gotoxy(65, rowNumber);
  cout << this->getGenreAsString();
}

#include "clientClass.h"

#include <iostream>

#include "helpersClass.h"

using namespace std;

clientClass::~clientClass() {}
clientClass::clientClass() {}
clientClass::clientClass(string firstName, string lastName,
                         string motherLastName, string dni, string address,
                         string phone, string email) {
  this->firstName = firstName;
  this->lastName = lastName;
  this->motherLastName = motherLastName;
  this->dni = dni;
  this->address = address;
  this->phone = phone;
  this->email = email;
}

string clientClass::getFirstName() { return this->firstName; }
void clientClass::setFirstName(string value) { this->firstName = value; }

string clientClass::getLastName() { return this->lastName; }
void clientClass::setLastName(string value) { this->lastName = value; }

string clientClass::getMotherLastName() { return this->motherLastName; }
void clientClass::setMotherLastName(string value) {
  this->motherLastName = value;
}

string clientClass::getDni() { return this->dni; }
void clientClass::setDni(string value) { this->dni = value; }

string clientClass::getAddress() { return this->address; }
void clientClass::setAddress(string value) { this->address = value; }

string clientClass::getPhone() { return this->phone; }
void clientClass::setPhone(string value) { this->phone = value; }

string clientClass::getEmail() { return this->email; }
void clientClass::setEmail(string value) { this->email = value; }

void clientClass::show(int rowNumber, int itemNumber) {
  helpersClass::gotoxy(1, rowNumber);
  cout << this->getDni();
  helpersClass::gotoxy(15, rowNumber);
  cout << this->getFirstName();
  cout << " ";
  cout << this->getLastName();
  cout << " ";
  cout << this->getMotherLastName();
  helpersClass::gotoxy(50, rowNumber);
  cout << this->getAddress();
  helpersClass::gotoxy(75, rowNumber);
  cout << this->getPhone();
  helpersClass::gotoxy(85, rowNumber);
  cout << this->getEmail();
}

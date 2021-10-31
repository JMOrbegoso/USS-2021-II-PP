#include "clientClass.h"

#include <iostream>

#include "helpersClass.h"

using namespace std;

int clientClass::counter = 1;

clientClass::~clientClass() {}
clientClass::clientClass() {}
clientClass::clientClass(string firstName, string lastName, string dni,
                         string address, string phone, unsigned short age,
                         bool genre, string arrivalDate) {
  this->code = "cli-" + to_string(clientClass::counter);
  clientClass::counter++;

  this->firstName = firstName;
  this->lastName = lastName;
  this->dni = dni;
  this->address = address;
  this->phone = phone;
  this->age = age;
  this->genre = genre;
  this->arrivalDate = arrivalDate;
}

string clientClass::getCode() { return this->code; }

string clientClass::getFirstName() { return this->firstName; }
void clientClass::setFirstName(string value) { this->firstName = value; }

string clientClass::getLastName() { return this->lastName; }
void clientClass::setLastName(string value) { this->lastName = value; }

string clientClass::getDni() { return this->dni; }
void clientClass::setDni(string value) { this->dni = value; }

string clientClass::getAddress() { return this->address; }
void clientClass::setAddress(string value) { this->address = value; }

string clientClass::getPhone() { return this->phone; }
void clientClass::setPhone(string value) { this->phone = value; }

unsigned short clientClass::getAge() { return this->age; }
void clientClass::setAge(unsigned short value) { this->age = value; }

bool clientClass::getGenre() { return this->genre; }
void clientClass::setGenre(bool value) { this->genre = value; }
string clientClass::getGenreAsString() {
  if (this->genre)
    return "Masculino";
  else
    return "Femenino";
}

string clientClass::getArrivalDate() { return this->arrivalDate; }
void clientClass::setArrivalDate(string value) { this->arrivalDate = value; }

void clientClass::show(int rowNumber, int itemNumber) {
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
  helpersClass::gotoxy(60, rowNumber);
  cout << this->getPhone();
  helpersClass::gotoxy(75, rowNumber);
  cout << this->getAge();
  helpersClass::gotoxy(85, rowNumber);
  cout << this->getGenreAsString();
}

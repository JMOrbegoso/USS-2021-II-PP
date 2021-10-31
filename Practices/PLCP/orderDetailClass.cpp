#include "orderDetailClass.h"

#include <iostream>

#include "helpersClass.h"

using namespace std;

int orderDetailClass::counter = 1;

orderDetailClass::~orderDetailClass() {}
orderDetailClass::orderDetailClass() {}
orderDetailClass::orderDetailClass(string firstName, string lastName,
                                   string dni, string address, string phone,
                                   unsigned short age, bool genre,
                                   string arrivalDate) {
  this->code = "cli-" + to_string(orderDetailClass::counter);
  orderDetailClass::counter++;

  this->firstName = firstName;
  this->lastName = lastName;
  this->dni = dni;
  this->address = address;
  this->phone = phone;
  this->age = age;
  this->genre = genre;
  this->arrivalDate = arrivalDate;
}

string orderDetailClass::getCode() { return this->code; }

string orderDetailClass::getFirstName() { return this->firstName; }
void orderDetailClass::setFirstName(string value) { this->firstName = value; }

string orderDetailClass::getLastName() { return this->lastName; }
void orderDetailClass::setLastName(string value) { this->lastName = value; }

string orderDetailClass::getDni() { return this->dni; }
void orderDetailClass::setDni(string value) { this->dni = value; }

string orderDetailClass::getAddress() { return this->address; }
void orderDetailClass::setAddress(string value) { this->address = value; }

string orderDetailClass::getPhone() { return this->phone; }
void orderDetailClass::setPhone(string value) { this->phone = value; }

unsigned short orderDetailClass::getAge() { return this->age; }
void orderDetailClass::setAge(unsigned short value) { this->age = value; }

bool orderDetailClass::getGenre() { return this->genre; }
void orderDetailClass::setGenre(bool value) { this->genre = value; }
string orderDetailClass::getGenreAsString() {
  if (this->genre)
    return "Masculino";
  else
    return "Femenino";
}

string orderDetailClass::getArrivalDate() { return this->arrivalDate; }
void orderDetailClass::setArrivalDate(string value) {
  this->arrivalDate = value;
}

void orderDetailClass::show(int rowNumber, int itemNumber) {
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

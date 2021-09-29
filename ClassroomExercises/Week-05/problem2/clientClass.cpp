#include "clientClass.h"

#include <iostream>

#include "helpersClass.h"

using namespace std;

clientClass::~clientClass() {}
clientClass::clientClass() {}
clientClass::clientClass(string code, string firstName, string lastName,
                         string dni, unsigned short age, bool genre) {
  this->code = code;
  this->firstName = firstName;
  this->lastName = lastName;
  this->dni = dni;
  this->age = age;
  this->genre = genre;
}

string clientClass::getCode() { return this->code; }
void clientClass::setCode(string value) { this->code = value; }

string clientClass::getFirstName() { return this->firstName; }
void clientClass::setFirstName(string value) { this->firstName = value; }

string clientClass::getLastName() { return this->lastName; }
void clientClass::setLastName(string value) { this->lastName = value; }

string clientClass::getDni() { return this->dni; }
void clientClass::setDni(string value) { this->dni = value; }

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

void clientClass::showStudent(int rowNumber, int itemNumber) {
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

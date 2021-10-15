#include "carClass.h"

#include <iostream>

#include "helpersClass.h"

using namespace std;

int carClass::counter = 1;

carClass::~carClass() {}
carClass::carClass() {}
carClass::carClass(string firstName, string lastName, string dni,
                   unsigned short age, bool genre) {
  this->code = "std-" + to_string(carClass::counter);
  carClass::counter++;

  this->firstName = firstName;
  this->lastName = lastName;
  this->dni = dni;
  this->age = age;
  this->genre = genre;
}

string carClass::getCode() { return this->code; }

string carClass::getFirstName() { return this->firstName; }
void carClass::setFirstName(string value) { this->firstName = value; }

string carClass::getLastName() { return this->lastName; }
void carClass::setLastName(string value) { this->lastName = value; }

string carClass::getDni() { return this->dni; }
void carClass::setDni(string value) { this->dni = value; }

unsigned short carClass::getAge() { return this->age; }
void carClass::setAge(unsigned short value) { this->age = value; }

bool carClass::getGenre() { return this->genre; }
void carClass::setGenre(bool value) { this->genre = value; }
string carClass::getGenreAsString() {
  if (this->genre)
    return "Masculino";
  else
    return "Femenino";
}

void carClass::show(int rowNumber, int itemNumber) {
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

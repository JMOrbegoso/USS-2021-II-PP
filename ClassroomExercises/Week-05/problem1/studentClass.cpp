#include "studentClass.h"

#include <iostream>
#include <string>

#include "helpers.h"

using namespace std;

studentClass::~studentClass() {}
studentClass::studentClass() {}
studentClass::studentClass(string code, string firstName, string lastName,
                           string dni, unsigned short age, bool genre) {
  this->code = code;
  this->firstName = firstName;
  this->lastName = lastName;
  this->dni = dni;
  this->age = age;
  this->genre = genre;
}

string studentClass::getCode() { return this->code; }
void studentClass::setCode(string value) { this->code = value; }

string studentClass::getFirstName() { return this->firstName; }
void studentClass::setFirstName(string value) { this->firstName = value; }

string studentClass::getLastName() { return this->lastName; }
void studentClass::setLastName(string value) { this->lastName = value; }

string studentClass::getDni() { return this->dni; }
void studentClass::setDni(string value) { this->dni = value; }

unsigned short studentClass::getAge() { return this->age; }
void studentClass::setAge(unsigned short value) { this->age = value; }

bool studentClass::getGenre() { return this->genre; }
void studentClass::setGenre(bool value) { this->genre = value; }
string studentClass::getGenreAsString() {
  if (this->genre)
    return "Masculino";
  else
    return "Femenino";
}

void studentClass::showStudent(int rowNumber, int itemNumber) {
  helpers::gotoxy(0, rowNumber);
  cout << itemNumber;
  helpers::gotoxy(5, rowNumber);
  cout << this->getCode();
  helpers::gotoxy(15, rowNumber);
  cout << this->getFirstName();
  helpers::gotoxy(30, rowNumber);
  cout << this->getLastName();
  helpers::gotoxy(45, rowNumber);
  cout << this->getDni();
  helpers::gotoxy(55, rowNumber);
  cout << this->getAge();
  helpers::gotoxy(65, rowNumber);
  cout << this->getGenreAsString();
}

#include "personClass.h"

#include <iostream>

#include "helpersClass.h"

using namespace std;

personClass::~personClass() {}
personClass::personClass() {}
personClass::personClass(string firstName, string lastName, string dni) {
  this->firstName = firstName;
  this->lastName = lastName;
  this->dni = dni;
}

string personClass::getFirstName() { return this->firstName; }
void personClass::setFirstName(string value) { this->firstName = value; }

string personClass::getLastName() { return this->lastName; }
void personClass::setLastName(string value) { this->lastName = value; }

string personClass::getDni() { return this->dni; }
void personClass::setDni(string value) { this->dni = value; }

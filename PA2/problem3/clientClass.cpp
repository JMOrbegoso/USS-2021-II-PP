#include "clientClass.h"

#include <iostream>

#include "helpersClass.h"

using namespace std;

int clientClass::counter = 1;

clientClass::~clientClass() {}
clientClass::clientClass() {}
clientClass::clientClass(string firstName, string lastName, string dni,
                         bool genre)
    : personClass(firstName, lastName, dni) {
  this->code = "clie-" + to_string(clientClass::counter);
  clientClass::counter++;

  this->genre = genre;
}

string clientClass::getCode() { return this->code; }

bool clientClass::getGenre() { return this->genre; }
void clientClass::setGenre(bool value) { this->genre = value; }
string clientClass::getGenreAsString() {
  if (this->genre)
    return "Masculino";
  else
    return "Femenino";
}

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
  helpersClass::gotoxy(55, rowNumber);
  cout << this->getGenreAsString();
}

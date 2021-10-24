#include "roomClass.h"

#include "helpersClass.h"

using namespace std;

int roomClass::counter = 1;

roomClass::~roomClass() {}
roomClass::roomClass() {}
roomClass::roomClass(string firstName, string lastName, string dni,
                     unsigned short age, bool genre) {
  this->code = "cl-" + to_string(roomClass::counter);
  roomClass::counter++;

  this->firstName = firstName;
  this->lastName = lastName;
  this->dni = dni;
  this->age = age;
  this->genre = genre;

  this->clients = new clientsListClass();
}

string roomClass::getCode() { return this->code; }

string roomClass::getFirstName() { return this->firstName; }
void roomClass::setFirstName(string value) { this->firstName = value; }

string roomClass::getLastName() { return this->lastName; }
void roomClass::setLastName(string value) { this->lastName = value; }

string roomClass::getDni() { return this->dni; }
void roomClass::setDni(string value) { this->dni = value; }

unsigned short roomClass::getAge() { return this->age; }
void roomClass::setAge(unsigned short value) { this->age = value; }

bool roomClass::getGenre() { return this->genre; }
void roomClass::setGenre(bool value) { this->genre = value; }
string roomClass::getGenreAsString() {
  if (this->genre)
    return "Masculino";
  else
    return "Femenino";
}

clientsListClass *roomClass::getClients() { return this->clients; }
void roomClass::setClients(clientsListClass *value) { this->clients = value; }

void roomClass::show(int rowNumber, int itemNumber) {
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

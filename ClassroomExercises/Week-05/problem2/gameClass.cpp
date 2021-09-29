#include "gameClass.h"

#include "helpersClass.h"

using namespace std;

gameClass::~gameClass() {}
gameClass::gameClass() {}
gameClass::gameClass(string code, string managerFullName) {
  this->code = code;
  this->managerFullName = managerFullName;

  this->clients = new clientsListClass();
}

string gameClass::getCode() { return this->code; }
void gameClass::setCode(string value) { this->code = value; }

string gameClass::getTeacherFullName() { return this->managerFullName; }
void gameClass::setTeacherFullName(string value) {
  this->managerFullName = value;
}

clientsListClass *gameClass::getClients() { return this->clients; }
void gameClass::setClients(clientsListClass *value) { this->clients = value; }

void gameClass::show(int rowNumber, int itemNumber) {
  helpersClass::gotoxy(0, rowNumber);
  cout << itemNumber;
  helpersClass::gotoxy(5, rowNumber);
  cout << this->getCode();
  helpersClass::gotoxy(15, rowNumber);
  cout << this->getTeacherFullName();
  helpersClass::gotoxy(45, rowNumber);
  cout << this->getClients()->getLength();
}

#include "clientClass.h"

#include "helpersClass.h"

using namespace std;

int clientClass::counter = 1;

clientClass::~clientClass() {}
clientClass::clientClass() {}
clientClass::clientClass(string teacherFullName) {
  this->code = "cls-" + to_string(clientClass::counter);
  clientClass::counter++;

  this->teacherFullName = teacherFullName;

  this->students = new carsListClass();
}

string clientClass::getCode() { return this->code; }

string clientClass::getTeacherFullName() { return this->teacherFullName; }
void clientClass::setTeacherFullName(string value) {
  this->teacherFullName = value;
}

carsListClass *clientClass::getStudents() { return this->students; }
void clientClass::setStudents(carsListClass *value) { this->students = value; }

void clientClass::show(int rowNumber, int itemNumber) {
  helpersClass::gotoxy(0, rowNumber);
  cout << itemNumber;
  helpersClass::gotoxy(5, rowNumber);
  cout << this->getCode();
  helpersClass::gotoxy(15, rowNumber);
  cout << this->getTeacherFullName();
  helpersClass::gotoxy(45, rowNumber);
  cout << this->getStudents()->getLength();
}

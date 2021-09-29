#include "gameClass.h"

#include "helpersClass.h"

using namespace std;

gameClass::~gameClass() {}
gameClass::gameClass() {}
gameClass::gameClass(string code, string teacherFullName) {
  this->code = code;
  this->teacherFullName = teacherFullName;

  this->students = new clientsListClass();
}

string gameClass::getCode() { return this->code; }
void gameClass::setCode(string value) { this->code = value; }

string gameClass::getTeacherFullName() { return this->teacherFullName; }
void gameClass::setTeacherFullName(string value) {
  this->teacherFullName = value;
}

clientsListClass *gameClass::getStudents() { return this->students; }
void gameClass::setStudents(clientsListClass *value) { this->students = value; }

void gameClass::showClassRoom(int rowNumber, int itemNumber) {
  helpersClass::gotoxy(0, rowNumber);
  cout << itemNumber;
  helpersClass::gotoxy(5, rowNumber);
  cout << this->getCode();
  helpersClass::gotoxy(15, rowNumber);
  cout << this->getTeacherFullName();
  helpersClass::gotoxy(45, rowNumber);
  cout << this->getStudents()->getLength();
}

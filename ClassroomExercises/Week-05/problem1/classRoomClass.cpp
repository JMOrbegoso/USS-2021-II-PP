#include "classRoomClass.h"

#include <string>

#include "helpers.h"

using namespace std;

classRoomClass::~classRoomClass() {}
classRoomClass::classRoomClass() {}
classRoomClass::classRoomClass(string code, string teacherFullName) {
  this->code = code;
  this->teacherFullName = teacherFullName;

  this->students = new studentsListClass();
}

string classRoomClass::getCode() { return this->code; }
void classRoomClass::setCode(string value) { this->code = value; }

string classRoomClass::getTeacherFullName() { return this->teacherFullName; }
void classRoomClass::setTeacherFullName(string value) {
  this->teacherFullName = value;
}

studentsListClass *classRoomClass::getStudents() { return this->students; }
void classRoomClass::setStudents(studentsListClass *value) {
  this->students = value;
}

void classRoomClass::showClassRoom(int rowNumber, int itemNumber) {
  helpers::gotoxy(0, rowNumber);
  cout << itemNumber;
  helpers::gotoxy(5, rowNumber);
  cout << this->getCode();
  helpers::gotoxy(15, rowNumber);
  cout << this->getTeacherFullName();
  helpers::gotoxy(45, rowNumber);
  cout << this->getStudents()->getLength();
}

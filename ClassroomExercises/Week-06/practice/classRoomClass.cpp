#include "classRoomClass.h"

#include "helpersClass.h"

using namespace std;

int classRoomClass::counter = 1;

classRoomClass::~classRoomClass() {}
classRoomClass::classRoomClass() {}
classRoomClass::classRoomClass(string teacherFullName) {
  this->code = "cls-" + to_string(classRoomClass::counter);
  classRoomClass::counter++;

  this->teacherFullName = teacherFullName;

  this->students = new studentsListClass();
}

string classRoomClass::getCode() { return this->code; }

string classRoomClass::getTeacherFullName() { return this->teacherFullName; }
void classRoomClass::setTeacherFullName(string value) {
  this->teacherFullName = value;
}

studentsListClass *classRoomClass::getStudents() { return this->students; }
void classRoomClass::setStudents(studentsListClass *value) {
  this->students = value;
}

void classRoomClass::show(int rowNumber, int itemNumber) {
  helpersClass::gotoxy(0, rowNumber);
  cout << itemNumber;
  helpersClass::gotoxy(5, rowNumber);
  cout << this->getCode();
  helpersClass::gotoxy(15, rowNumber);
  cout << this->getTeacherFullName();
  helpersClass::gotoxy(45, rowNumber);
  cout << this->getStudents()->getLength();
}

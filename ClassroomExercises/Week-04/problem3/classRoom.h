#include "studentsList.h";

using namespace std;

class classRoom {
 private:
  string code;
  string teacherFullName;
  studentsList *students;

 public:
  classRoom() {}
  classRoom(string code, string teacherFullName) {
    this->code = code;
    this->teacherFullName = teacherFullName;

    this->students = new studentsList();
  }

  string getCode() { return this->code; }
  void setCode(string value) { this->code = value; }

  string getTeacherFullName() { return this->teacherFullName; }
  void setTeacherFullName(string value) { this->teacherFullName = value; }

  studentsList *getStudents() { return this->students; }
  void setStudents(studentsList *value) { this->students = value; }

  void showClassRoom(int rowNumber, int itemNumber) {
    helpers::gotoxy(0, rowNumber);
    cout << itemNumber;
    helpers::gotoxy(5, rowNumber);
    cout << this->getCode();
    helpers::gotoxy(15, rowNumber);
    cout << this->getTeacherFullName();
    helpers::gotoxy(45, rowNumber);
    cout << this->getStudents()->getLength();
  }
};
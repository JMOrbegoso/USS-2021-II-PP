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

  void showClassRoom(int itemNumber) {
    cout << "#: " << itemNumber << endl;
    cout << "Codigo: " << this->getCode() << endl;
    cout << "Profesor: " << this->getTeacherFullName() << endl;
    cout << "# de Estudiantes: " << this->getStudents()->getLength() << endl;
    cout << endl;
  }
};
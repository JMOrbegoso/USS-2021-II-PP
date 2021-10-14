#include <string>

#include "studentsListClass.h"

using namespace std;

class classRoomClass {
 private:
  static int counter;
  string code;
  string teacherFullName;
  studentsListClass *students;

 public:
  ~classRoomClass();
  classRoomClass();
  classRoomClass(string teacherFullName);

  string getCode();

  string getTeacherFullName();
  void setTeacherFullName(string value);

  studentsListClass *getStudents();
  void setStudents(studentsListClass *value);

  void show(int rowNumber, int itemNumber);
};
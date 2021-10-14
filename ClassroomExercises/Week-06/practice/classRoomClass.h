#include <string>

#include "studentsListClass.h"

using namespace std;

class classRoomClass {
 private:
  string code;
  string teacherFullName;
  studentsListClass *students;

 public:
  ~classRoomClass();
  classRoomClass();
  classRoomClass(string code, string teacherFullName);

  string getCode();
  void setCode(string value);

  string getTeacherFullName();
  void setTeacherFullName(string value);

  studentsListClass *getStudents();
  void setStudents(studentsListClass *value);

  void show(int rowNumber, int itemNumber);
};
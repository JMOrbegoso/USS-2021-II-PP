#include <string>

#include "clientsListClass.h"

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

  void showClassRoom(int rowNumber, int itemNumber);
};
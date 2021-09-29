#include <string>

#include "clientsListClass.h"

using namespace std;

class gameClass {
 private:
  string code;
  string teacherFullName;
  clientsListClass *students;

 public:
  ~gameClass();
  gameClass();
  gameClass(string code, string teacherFullName);

  string getCode();
  void setCode(string value);

  string getTeacherFullName();
  void setTeacherFullName(string value);

  clientsListClass *getStudents();
  void setStudents(clientsListClass *value);

  void showClassRoom(int rowNumber, int itemNumber);
};
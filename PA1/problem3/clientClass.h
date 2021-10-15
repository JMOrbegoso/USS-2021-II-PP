#include <string>

#include "carsListClass.h"

using namespace std;

class clientClass {
 private:
  static int counter;
  string code;
  string teacherFullName;
  carsListClass *students;

 public:
  ~clientClass();
  clientClass();
  clientClass(string teacherFullName);

  string getCode();

  string getTeacherFullName();
  void setTeacherFullName(string value);

  carsListClass *getStudents();
  void setStudents(carsListClass *value);

  void show(int rowNumber, int itemNumber);
};
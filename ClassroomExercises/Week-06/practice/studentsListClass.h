#include "studentNodeClass.h"

using namespace std;

class studentsListClass {
 private:
  studentNodeClass* head;
  int length;

 public:
  ~studentsListClass();
  studentsListClass();

  int getLength();
  void setLength(int value);

  studentNodeClass* getHead();
  void setHead(studentNodeClass* value);

  void show(int rowNumber);

  void insert(studentClass* newStudent);

  studentClass* getElementByIndex(int index);
  studentClass* pickStudent(string message);
};

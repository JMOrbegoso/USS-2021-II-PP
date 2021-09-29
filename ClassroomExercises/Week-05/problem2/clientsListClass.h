#include "clientClass.h"

using namespace std;

class studentsListClass {
 private:
  int capacity;
  int length;
  clientClass* head;

  void grow(int growIn);

 public:
  ~studentsListClass();
  studentsListClass();

  int getCapacity();
  void setCapacity(int value);

  int getLength();
  void setLength(int value);

  clientClass* getHead();
  void setHead(clientClass* value);

  void showStudents(int rowNumber);

  void insert(clientClass* newStudent);

  clientClass* pickStudent(string message);
};

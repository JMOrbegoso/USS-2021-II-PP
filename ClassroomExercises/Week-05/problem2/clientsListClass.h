#include "clientClass.h"

using namespace std;

class clientsListClass {
 private:
  int capacity;
  int length;
  clientClass* head;

  void grow(int growIn);

 public:
  ~clientsListClass();
  clientsListClass();

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

#include "employeeNodeClass.h"

using namespace std;

class employeesListClass {
 private:
  employeeNodeClass* head;
  int length;
  employeeClass* getElementByIndex(int index);

 public:
  ~employeesListClass();
  employeesListClass();

  int getLength();
  void setLength(int value);

  employeeNodeClass* getHead();
  void setHead(employeeNodeClass* value);

  void show(int rowNumber);

  void insert(employeeClass* newEmployee);

  employeeClass* pickEmployee(string message);
};

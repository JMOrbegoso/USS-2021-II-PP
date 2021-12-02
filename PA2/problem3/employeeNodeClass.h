#include "employeeClass.h"

class employeeNodeClass {
 private:
  employeeClass* employee;
  employeeNodeClass* next;
  employeeNodeClass* previous;

 public:
  ~employeeNodeClass();
  employeeNodeClass();

  employeeClass* getEmployee();
  void setEmployee(employeeClass* value);

  employeeNodeClass* getNext();
  void setNext(employeeNodeClass* value);

  employeeNodeClass* getPrevious();
  void setPrevious(employeeNodeClass* value);
};

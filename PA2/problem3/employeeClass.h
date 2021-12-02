#include <string>

#include "personClass.h"

using namespace std;

class employeeClass : public personClass {
 private:
  static int counter;
  string code;
  float salary;

 public:
  ~employeeClass();
  employeeClass();
  employeeClass(string firstName, string lastName, string dni, float salary);

  string getCode();

  float getSalary();
  void setSalary(float value);

  void show(int rowNumber, int itemNumber);
};

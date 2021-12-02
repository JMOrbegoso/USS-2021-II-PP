#include <string>

#include "clientsListClass.h"
#include "employeesListClass.h"

using namespace std;

class storeClass {
 private:
  static int counter;
  string code;
  string owner;
  string specialization;
  employeesListClass *employees;
  clientsListClass *clients;

 public:
  ~storeClass();
  storeClass();
  storeClass(string owner, string specialization);

  string getCode();

  string getOwner();
  void setOwner(string value);

  string getSpecialization();
  void setSpecialization(string value);

  employeesListClass *getEmployees();
  void setEmployees(employeesListClass *value);

  clientsListClass *getClients();
  void setClients(clientsListClass *value);

  void show(int rowNumber, int itemNumber);
};
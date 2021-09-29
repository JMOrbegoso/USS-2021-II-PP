#include <string>

#include "clientsListClass.h"

using namespace std;

class gameClass {
 private:
  string code;
  string managerFullName;
  clientsListClass *clients;

 public:
  ~gameClass();
  gameClass();
  gameClass(string code, string managerFullName);

  string getCode();
  void setCode(string value);

  string getTeacherFullName();
  void setTeacherFullName(string value);

  clientsListClass *getClients();
  void setClients(clientsListClass *value);

  void show(int rowNumber, int itemNumber);
};
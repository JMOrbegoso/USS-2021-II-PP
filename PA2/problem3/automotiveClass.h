#include <string>

#include "clientsListClass.h"

using namespace std;

class automotiveClass {
 private:
  string name;
  clientsListClass *clients;

 public:
  ~automotiveClass();
  automotiveClass();

  string getName();
  void setName(string value);

  clientsListClass *getClients();
  void setClients(clientsListClass *value);
};

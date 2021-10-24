#include <string>

#include "clientsListClass.h"

using namespace std;

class hotelClass {
 private:
  string name;
  roomsListClass *clients;

 public:
  ~hotelClass();
  hotelClass();

  string getName();
  void setName(string value);

  roomsListClass *getClients();
  void setClients(roomsListClass *value);
};

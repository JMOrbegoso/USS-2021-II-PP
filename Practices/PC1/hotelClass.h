#include <string>

#include "roomsListClass.h"

using namespace std;

class hotelClass {
 private:
  string name;
  string address;
  string ruc;
  roomsListClass *rooms;

 public:
  ~hotelClass();
  hotelClass();

  string getName();
  void setName(string value);

  string getAddress();
  void setAddress(string value);

  string getRuc();
  void setRuc(string value);

  roomsListClass *getRooms();
  void setRooms(roomsListClass *value);
};

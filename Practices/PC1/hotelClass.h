#include <string>

#include "roomsListClass.h"

using namespace std;

class hotelClass {
 private:
  string name;
  roomsListClass *rooms;

 public:
  ~hotelClass();
  hotelClass();

  string getName();
  void setName(string value);

  roomsListClass *getRooms();
  void setRooms(roomsListClass *value);
};

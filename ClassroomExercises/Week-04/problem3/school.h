#include "classRoomsList.h";

using namespace std;

class school {
 private:
  string name;
  classRoomsList *classRooms;

 public:
  school() { this->classRooms = new classRoomsList(); }

  string getName() { return this->name; }
  void setName(string value) { this->name = value; }

  classRoomsList *getClassRooms() { return this->classRooms; }
  void setClassRooms(classRoomsList *value) { this->classRooms = value; }
};
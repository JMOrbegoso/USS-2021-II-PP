#include <string>

#include "classRoomsListClass.h";

using namespace std;

class schoolClass {
 private:
  string name;
  classRoomsListClass *classRooms;

 public:
  ~schoolClass();
  schoolClass() { this->classRooms = new classRoomsListClass(); }

  string getName() { return this->name; }
  void setName(string value) { this->name = value; }

  classRoomsListClass *getClassRooms() { return this->classRooms; }
  void setClassRooms(classRoomsListClass *value) { this->classRooms = value; }
};
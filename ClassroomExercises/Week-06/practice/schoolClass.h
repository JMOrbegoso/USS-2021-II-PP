#include <string>

#include "classRoomsListClass.h";

using namespace std;

class schoolClass {
 private:
  string name;
  classRoomsListClass *classRooms;

 public:
  ~schoolClass();
  schoolClass();

  string getName();
  void setName(string value);

  classRoomsListClass *getClassRooms();
  void setClassRooms(classRoomsListClass *value);
};
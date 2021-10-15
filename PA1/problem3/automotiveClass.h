#include <string>

#include "clientsListClass.h";

using namespace std;

class automotiveClass {
 private:
  string name;
  clientsListClass *classRooms;

 public:
  ~automotiveClass();
  automotiveClass();

  string getName();
  void setName(string value);

  clientsListClass *getClassRooms();
  void setClassRooms(clientsListClass *value);
};
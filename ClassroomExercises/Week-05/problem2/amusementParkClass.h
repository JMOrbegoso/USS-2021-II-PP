#include <string>

#include "gamesListClass.h"

using namespace std;

class amusementParkClass {
 private:
  string name;
  gamesListClass *classRooms;

 public:
  ~amusementParkClass();
  amusementParkClass();

  string getName();
  void setName(string value);

  gamesListClass *getClassRooms();
  void setClassRooms(gamesListClass *value);
};
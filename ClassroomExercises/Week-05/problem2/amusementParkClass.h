#include <string>

#include "gamesListClass.h"

using namespace std;

class schoolClass {
 private:
  string name;
  gamesListClass *classRooms;

 public:
  ~schoolClass();
  schoolClass();

  string getName();
  void setName(string value);

  gamesListClass *getClassRooms();
  void setClassRooms(gamesListClass *value);
};
#include "amusementParkClass.h"

using namespace std;

schoolClass::~schoolClass() {}
schoolClass::schoolClass() { this->classRooms = new gamesListClass(); }

string schoolClass::getName() { return this->name; }
void schoolClass::setName(string value) { this->name = value; }

gamesListClass *schoolClass::getClassRooms() { return this->classRooms; }
void schoolClass::setClassRooms(gamesListClass *value) {
  this->classRooms = value;
}

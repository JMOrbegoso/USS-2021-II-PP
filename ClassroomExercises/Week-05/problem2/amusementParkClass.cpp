#include "amusementParkClass.h"

using namespace std;

schoolClass::~schoolClass() {}
schoolClass::schoolClass() { this->classRooms = new classRoomsListClass(); }

string schoolClass::getName() { return this->name; }
void schoolClass::setName(string value) { this->name = value; }

classRoomsListClass *schoolClass::getClassRooms() { return this->classRooms; }
void schoolClass::setClassRooms(classRoomsListClass *value) {
  this->classRooms = value;
}

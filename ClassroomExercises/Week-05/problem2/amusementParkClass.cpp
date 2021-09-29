#include "amusementParkClass.h"

using namespace std;

amusementParkClass::~amusementParkClass() {}
amusementParkClass::amusementParkClass() {
  this->classRooms = new gamesListClass();
}

string amusementParkClass::getName() { return this->name; }
void amusementParkClass::setName(string value) { this->name = value; }

gamesListClass *amusementParkClass::getClassRooms() { return this->classRooms; }
void amusementParkClass::setClassRooms(gamesListClass *value) {
  this->classRooms = value;
}

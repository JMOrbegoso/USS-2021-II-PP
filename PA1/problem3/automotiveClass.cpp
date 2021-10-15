#include "automotiveClass.h"

using namespace std;

automotiveClass::~automotiveClass() {}
automotiveClass::automotiveClass() {
  this->classRooms = new clientsListClass();
}

string automotiveClass::getName() { return this->name; }
void automotiveClass::setName(string value) { this->name = value; }

clientsListClass *automotiveClass::getClassRooms() { return this->classRooms; }
void automotiveClass::setClassRooms(clientsListClass *value) {
  this->classRooms = value;
}

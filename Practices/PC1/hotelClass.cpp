#include "hotelClass.h"

using namespace std;

hotelClass::~hotelClass() {}
hotelClass::hotelClass() { this->rooms = new roomsListClass(); }

string hotelClass::getName() { return this->name; }
void hotelClass::setName(string value) { this->name = value; }

roomsListClass *hotelClass::getRooms() { return this->rooms; }
void hotelClass::setRooms(roomsListClass *value) { this->rooms = value; }

#include "hotelClass.h"

using namespace std;

hotelClass::~hotelClass() {}
hotelClass::hotelClass() { this->rooms = new roomsListClass(); }

string hotelClass::getName() { return this->name; }
void hotelClass::setName(string value) { this->name = value; }

string hotelClass::getAddress() { return this->address; }
void hotelClass::setAddress(string value) { this->address = value; }

string hotelClass::getRuc() { return this->ruc; }
void hotelClass::setRuc(string value) { this->ruc = value; }

roomsListClass *hotelClass::getRooms() { return this->rooms; }
void hotelClass::setRooms(roomsListClass *value) { this->rooms = value; }

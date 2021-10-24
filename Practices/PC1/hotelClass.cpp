#include "hotelClass.h"

using namespace std;

hotelClass::~hotelClass() {}
hotelClass::hotelClass() { this->clients = new roomsListClass(); }

string hotelClass::getName() { return this->name; }
void hotelClass::setName(string value) { this->name = value; }

roomsListClass *hotelClass::getClients() { return this->clients; }
void hotelClass::setClients(roomsListClass *value) { this->clients = value; }

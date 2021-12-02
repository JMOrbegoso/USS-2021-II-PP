#include "mallClass.h"

using namespace std;

automotiveClass::~automotiveClass() {}
automotiveClass::automotiveClass() { this->clients = new clientsListClass(); }

string automotiveClass::getName() { return this->name; }
void automotiveClass::setName(string value) { this->name = value; }

clientsListClass *automotiveClass::getClients() { return this->clients; }
void automotiveClass::setClients(clientsListClass *value) {
  this->clients = value;
}

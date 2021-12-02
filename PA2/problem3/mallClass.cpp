#include "mallClass.h"

using namespace std;

mallClass::~mallClass() {}
mallClass::mallClass() { this->stores = new storesListClass(); }

string mallClass::getName() { return this->name; }
void mallClass::setName(string value) { this->name = value; }

storesListClass *mallClass::getStores() { return this->stores; }
void mallClass::setStores(storesListClass *value) { this->stores = value; }

#include "mallClass.h"

using namespace std;

mallClass::~mallClass() {}
mallClass::mallClass() { this->stores = new storesListClass(); }

string mallClass::getName() { return this->name; }
void mallClass::setName(string value) { this->name = value; }

string mallClass::getAddress() { return this->address; }
void mallClass::setAddress(string value) { this->address = value; }

string mallClass::getRuc() { return this->ruc; }
void mallClass::setRuc(string value) { this->ruc = value; }

unsigned int mallClass::getCapacity() { return this->capacity; }
void mallClass::setCapacity(unsigned int value) { this->capacity = value; }

storesListClass *mallClass::getStores() { return this->stores; }
void mallClass::setStores(storesListClass *value) { this->stores = value; }

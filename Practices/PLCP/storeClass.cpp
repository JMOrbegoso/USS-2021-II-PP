#include "storeClass.h"

using namespace std;

storeClass::~storeClass() {}
storeClass::storeClass() {
  this->rooms = new productsListClass();
  this->clients = new clientsListClass();
}

string storeClass::getName() { return this->name; }
void storeClass::setName(string value) { this->name = value; }

string storeClass::getAddress() { return this->address; }
void storeClass::setAddress(string value) { this->address = value; }

string storeClass::getRuc() { return this->ruc; }
void storeClass::setRuc(string value) { this->ruc = value; }

productsListClass *storeClass::getProducts() { return this->rooms; }
void storeClass::setProducts(productsListClass *value) { this->rooms = value; }

clientsListClass *storeClass::getClients() { return this->clients; }
void storeClass::setClients(clientsListClass *value) { this->clients = value; }

#include "helpersClass.h"
#include "storeClass.h"

using namespace std;

int productClass::counter = 1;

productClass::~productClass() {}
productClass::productClass() {}
productClass::productClass(unsigned short roomNumber, float price,
                           unsigned short floor, string roomType,
                           string status) {
  this->code = "hab-" + to_string(productClass::counter);
  productClass::counter++;

  this->roomNumber = roomNumber;
  this->price = price;
  this->floor = floor;
  this->roomType = roomType;
  this->status = status;

  this->clients = new clientsListClass();
}

string productClass::getCode() { return this->code; }

unsigned short productClass::getRoomNumber() { return this->roomNumber; }
void productClass::setRoomNumber(unsigned short value) {
  this->roomNumber = value;
}

float productClass::getPrice() { return this->price; }
void productClass::setPrice(float value) { this->price = value; }

unsigned short productClass::getFloor() { return this->floor; }
void productClass::setFloor(unsigned short value) { this->floor = value; }

string productClass::getRoomType() { return this->roomType; }
void productClass::setRoomType(string value) { this->roomType = value; }

string productClass::getStatus() { return this->status; }
void productClass::setStatus(string value) { this->status = value; }

clientsListClass *productClass::getClients() { return this->clients; }
void productClass::setClients(clientsListClass *value) {
  this->clients = value;
}

void productClass::show(int rowNumber, int itemNumber) {
  helpersClass::gotoxy(0, rowNumber);
  cout << itemNumber;
  helpersClass::gotoxy(5, rowNumber);
  cout << this->getCode();
  helpersClass::gotoxy(15, rowNumber);
  cout << this->getRoomNumber();
  helpersClass::gotoxy(30, rowNumber);
  cout << this->getPrice();
  helpersClass::gotoxy(45, rowNumber);
  cout << this->getFloor();
  helpersClass::gotoxy(55, rowNumber);
  cout << this->getRoomType();
  helpersClass::gotoxy(75, rowNumber);
  cout << this->getStatus();
}

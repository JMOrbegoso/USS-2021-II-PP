#include "roomClass.h"

#include "helpersClass.h"

using namespace std;

int roomClass::counter = 1;

roomClass::~roomClass() {}
roomClass::roomClass() {}
roomClass::roomClass(unsigned short roomNumber, float price,
                     unsigned short floor, string roomType, string status) {
  this->code = "hab-" + to_string(roomClass::counter);
  roomClass::counter++;

  this->roomNumber = roomNumber;
  this->price = price;
  this->floor = floor;
  this->roomType = roomType;
  this->status = status;

  this->clients = new clientsListClass();
}

string roomClass::getCode() { return this->code; }

unsigned short roomClass::getRoomNumber() { return this->roomNumber; }
void roomClass::setRoomNumber(unsigned short value) {
  this->roomNumber = value;
}

float roomClass::getPrice() { return this->price; }
void roomClass::setPrice(float value) { this->price = value; }

unsigned short roomClass::getFloor() { return this->floor; }
void roomClass::setFloor(unsigned short value) { this->floor = value; }

string roomClass::getRoomType() { return this->roomType; }
void roomClass::setRoomType(string value) { this->roomType = value; }

string roomClass::getStatus() { return this->status; }
void roomClass::setStatus(string value) { this->status = value; }

clientsListClass *roomClass::getClients() { return this->clients; }
void roomClass::setClients(clientsListClass *value) { this->clients = value; }

void roomClass::show(int rowNumber, int itemNumber) {
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

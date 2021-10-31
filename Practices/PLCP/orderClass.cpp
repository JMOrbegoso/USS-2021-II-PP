#include "orderClass.h"

#include "helpersClass.h"

using namespace std;

int orderClass::counter = 1;

orderClass::~orderClass() {}
orderClass::orderClass() {}
orderClass::orderClass(unsigned short orderNumber, float price,
                       unsigned short floor, string orderType, string status) {
  this->code = "hab-" + to_string(orderClass::counter);
  orderClass::counter++;

  this->orderNumber = orderNumber;
  this->price = price;
  this->floor = floor;
  this->orderType = orderType;
  this->status = status;

  this->orderDetails = new orderDetailsListClass();
}

string orderClass::getCode() { return this->code; }

unsigned short orderClass::getRoomNumber() { return this->orderNumber; }
void orderClass::setRoomNumber(unsigned short value) {
  this->orderNumber = value;
}

float orderClass::getPrice() { return this->price; }
void orderClass::setPrice(float value) { this->price = value; }

unsigned short orderClass::getFloor() { return this->floor; }
void orderClass::setFloor(unsigned short value) { this->floor = value; }

string orderClass::getRoomType() { return this->orderType; }
void orderClass::setRoomType(string value) { this->orderType = value; }

string orderClass::getStatus() { return this->status; }
void orderClass::setStatus(string value) { this->status = value; }

orderDetailsListClass *orderClass::getOrderDetails() {
  return this->orderDetails;
}
void orderClass::setOrderDetails(orderDetailsListClass *value) {
  this->orderDetails = value;
}

void orderClass::show(int rowNumber, int itemNumber) {
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

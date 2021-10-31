#include "orderClass.h"

#include "helpersClass.h"

using namespace std;

int orderClass::counter = 1;

orderClass::~orderClass() {}
orderClass::orderClass() {}
orderClass::orderClass(string date, string clientFullName) {
  this->code = "C" + to_string(orderClass::counter);
  orderClass::counter++;

  this->date = date;
  this->clientFullName = clientFullName;

  this->orderDetails = new orderDetailsListClass();
}

string orderClass::getCode() { return this->code; }

string orderClass::getDate() { return this->date; }
void orderClass::setDate(string value) { this->date = value; }

string orderClass::getClientFullName() { return this->clientFullName; }
void orderClass::setClientFullName(string value) {
  this->clientFullName = value;
}

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
}

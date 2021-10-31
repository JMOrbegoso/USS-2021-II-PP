#include "orderDetailClass.h"

#include <iostream>

#include "helpersClass.h"

using namespace std;

orderDetailClass::~orderDetailClass() {}
orderDetailClass::orderDetailClass() {}
orderDetailClass::orderDetailClass(string code, string name, float price) {
  this->code = code;
  this->name = name;
  this->price = price;
}

string orderDetailClass::getCode() { return this->code; }
void orderDetailClass::setCode(string value) { this->code = value; }

string orderDetailClass::getName() { return this->name; }
void orderDetailClass::setName(string value) { this->name = value; }

float orderDetailClass::getPrice() { return this->price; }
void orderDetailClass::setPrice(float value) { this->price = value; }

void orderDetailClass::show(int rowNumber, int itemNumber) {
  helpersClass::gotoxy(0, rowNumber);
  cout << itemNumber;
  helpersClass::gotoxy(5, rowNumber);
  cout << this->getCode();
  helpersClass::gotoxy(15, rowNumber);
}

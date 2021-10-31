#include "orderDetailClass.h"

#include <iostream>

#include "helpersClass.h"

using namespace std;

orderDetailClass::~orderDetailClass() {}
orderDetailClass::orderDetailClass() {}
orderDetailClass::orderDetailClass(string code, string name, float price,
                                   unsigned short quantity) {
  this->code = code;
  this->name = name;
  this->price = price;
  this->quantity = quantity;
}

string orderDetailClass::getCode() { return this->code; }
void orderDetailClass::setCode(string value) { this->code = value; }

string orderDetailClass::getName() { return this->name; }
void orderDetailClass::setName(string value) { this->name = value; }

float orderDetailClass::getPrice() { return this->price; }
void orderDetailClass::setPrice(float value) { this->price = value; }

unsigned short orderDetailClass::getQuantity() { return this->quantity; }
void orderDetailClass::setQuantity(unsigned short value) {
  this->quantity = value;
}

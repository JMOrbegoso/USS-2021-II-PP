#include "helpersClass.h"
#include "storeClass.h"

using namespace std;

productClass::~productClass() {}
productClass::productClass() {}
productClass::productClass(string code, string name, string supplier,
                           unsigned short stock, float price, string category) {
  this->code = code;
  this->name = name;
  this->supplier = supplier;
  this->stock = stock;
  this->price = price;
  this->category = category;
}

string productClass::getCode() { return this->code; }
void productClass::setCode(string value) { this->code = value; }

string productClass::getName() { return this->name; }
void productClass::setName(string value) { this->name = value; }

string productClass::getSupplier() { return this->supplier; }
void productClass::setSupplier(string value) { this->supplier = value; }

unsigned short productClass::getStock() { return this->stock; }
void productClass::setStock(unsigned short value) { this->stock = value; }

float productClass::getPrice() { return this->price; }
void productClass::setPrice(float value) { this->price = value; }

string productClass::getCategory() { return this->category; }
void productClass::setCategory(string value) { this->category = value; }

void productClass::show(int rowNumber, int itemNumber) {
  helpersClass::gotoxy(0, rowNumber);
  cout << itemNumber;
  helpersClass::gotoxy(5, rowNumber);
  cout << this->getCode();
  helpersClass::gotoxy(15, rowNumber);
  cout << this->getName();
  helpersClass::gotoxy(30, rowNumber);
  cout << this->getStock();
  helpersClass::gotoxy(45, rowNumber);
  cout << this->getPrice();
  helpersClass::gotoxy(55, rowNumber);
  cout << this->getSupplier();
  helpersClass::gotoxy(75, rowNumber);
  cout << this->getCategory();
}

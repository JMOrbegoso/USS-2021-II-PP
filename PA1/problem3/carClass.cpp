#include "carClass.h"

#include <iostream>

#include "helpersClass.h"

using namespace std;

int carClass::counter = 1;

carClass::~carClass() {}
carClass::carClass() {}
carClass::carClass(string brand, string model, float price, string plate,
                   string color, string status) {
  this->code = "car-" + to_string(carClass::counter);
  carClass::counter++;

  this->brand = brand;
  this->model = model;
  this->price = price;
  this->plate = plate;
  this->color = color;
  this->status = status;
}

string carClass::getCode() { return this->code; }

string carClass::getBrand() { return this->brand; }
void carClass::setBrand(string value) { this->brand = value; }

string carClass::getModel() { return this->model; }
void carClass::setModel(string value) { this->model = value; }

float carClass::getPrice() { return this->price; }
void carClass::setPrice(float value) { this->price = value; }

string carClass::getPlate() { return this->plate; }
void carClass::setPlate(string value) { this->plate = value; }

string carClass::getColor() { return this->color; }
void carClass::setColor(string value) { this->color = value; }

string carClass::getStatus() { return this->status; }
void carClass::setStatus(string value) { this->status = value; }

void carClass::show(int rowNumber, int itemNumber) {
  helpersClass::gotoxy(0, rowNumber);
  cout << itemNumber;
  helpersClass::gotoxy(5, rowNumber);
  cout << this->getCode();
  helpersClass::gotoxy(15, rowNumber);
  cout << this->getBrand();
  helpersClass::gotoxy(30, rowNumber);
  cout << this->getModel();
  helpersClass::gotoxy(45, rowNumber);
  cout << this->getPrice();
  helpersClass::gotoxy(60, rowNumber);
  cout << this->getPlate();
  helpersClass::gotoxy(70, rowNumber);
  cout << this->getColor();
  helpersClass::gotoxy(80, rowNumber);
  cout << this->getStatus();
}

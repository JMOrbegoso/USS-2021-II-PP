#include "employeeClass.h"

#include <iostream>

#include "helpersClass.h"

using namespace std;

int employeeClass::counter = 1;

employeeClass::~employeeClass() {}
employeeClass::employeeClass() {}
employeeClass::employeeClass(string brand, string model, float price,
                             string plate, string color, string status) {
  this->code = "car-" + to_string(employeeClass::counter);
  employeeClass::counter++;

  this->brand = brand;
  this->model = model;
  this->price = price;
  this->plate = plate;
  this->color = color;
  this->status = status;
}

string employeeClass::getCode() { return this->code; }

string employeeClass::getBrand() { return this->brand; }
void employeeClass::setBrand(string value) { this->brand = value; }

string employeeClass::getModel() { return this->model; }
void employeeClass::setModel(string value) { this->model = value; }

float employeeClass::getPrice() { return this->price; }
void employeeClass::setPrice(float value) { this->price = value; }

string employeeClass::getPlate() { return this->plate; }
void employeeClass::setPlate(string value) { this->plate = value; }

string employeeClass::getColor() { return this->color; }
void employeeClass::setColor(string value) { this->color = value; }

string employeeClass::getStatus() { return this->status; }
void employeeClass::setStatus(string value) { this->status = value; }

void employeeClass::show(int rowNumber, int itemNumber) {
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

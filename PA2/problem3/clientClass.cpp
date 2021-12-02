#include "clientClass.h"

#include <iostream>

#include "helpersClass.h"

using namespace std;

int clientClass::counter = 1;

clientClass::~clientClass() {}
clientClass::clientClass() {}
clientClass::clientClass(string brand, string model, float price, string plate,
                         string color, string status) {
  this->code = "car-" + to_string(clientClass::counter);
  clientClass::counter++;

  this->brand = brand;
  this->model = model;
  this->price = price;
  this->plate = plate;
  this->color = color;
  this->status = status;
}

string clientClass::getCode() { return this->code; }

string clientClass::getBrand() { return this->brand; }
void clientClass::setBrand(string value) { this->brand = value; }

string clientClass::getModel() { return this->model; }
void clientClass::setModel(string value) { this->model = value; }

float clientClass::getPrice() { return this->price; }
void clientClass::setPrice(float value) { this->price = value; }

string clientClass::getPlate() { return this->plate; }
void clientClass::setPlate(string value) { this->plate = value; }

string clientClass::getColor() { return this->color; }
void clientClass::setColor(string value) { this->color = value; }

string clientClass::getStatus() { return this->status; }
void clientClass::setStatus(string value) { this->status = value; }

void clientClass::show(int rowNumber, int itemNumber) {
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

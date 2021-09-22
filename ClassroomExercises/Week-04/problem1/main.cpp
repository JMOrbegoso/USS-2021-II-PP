// problem1.cpp : This file contains the 'main' function. Program execution
// begins and ends there.
//

#include <iostream>

#include "menu.h"

int main() {
  petsList *pets = new petsList();

  appMenu *menu = new appMenu(pets);

  menu->mainMenu();
}
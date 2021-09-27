#include <iostream>

#include "menu.h";

using namespace std;

int main() {
  school* school1 = new school();

  menu* appMenu = new menu(school1);

  appMenu->showMenu();

  return 0;
}

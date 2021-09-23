#include <iostream>

#include "menu.h";

using namespace std;

int main() {
  school* uss = new school("USS");
  menu* appMenu = new menu(uss);

  appMenu->showMenu();

  return 0;
}

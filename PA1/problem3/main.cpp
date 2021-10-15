#include "menuClass.h";

using namespace std;

int main() {
  automotiveClass* school = new automotiveClass();
  dataSeedClass::seed(school);

  menuClass* appMenu = new menuClass(school);

  appMenu->showMenu();

  return 0;
}

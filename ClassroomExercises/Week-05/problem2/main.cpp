#include "menuClass.h";

using namespace std;

int main() {
  amusementParkClass* school1 = new amusementParkClass();
  dataSeedClass::seed(school1);

  menuClass* appMenu = new menuClass(school1);

  appMenu->showMenu();

  return 0;
}

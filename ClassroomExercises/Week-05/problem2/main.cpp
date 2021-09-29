#include "menuClass.h";

using namespace std;

int main() {
  schoolClass* school1 = new schoolClass();
  dataSeedClass::seed(school1);

  menuClass* appMenu = new menuClass(school1);

  appMenu->showMenu();

  return 0;
}

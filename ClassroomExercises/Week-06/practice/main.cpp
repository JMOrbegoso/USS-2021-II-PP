#include "menuClass.h";

using namespace std;

int main() {
  schoolClass* school = new schoolClass();
  dataSeedClass::seed(school);

  menuClass* appMenu = new menuClass(school);

  appMenu->showMenu();

  return 0;
}

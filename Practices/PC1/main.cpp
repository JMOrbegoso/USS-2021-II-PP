#include "menuClass.h"

using namespace std;

int main() {
  automotiveClass* automotive = new automotiveClass();
  dataSeedClass::seed(automotive);

  menuClass* appMenu = new menuClass(automotive);

  appMenu->showMenu();

  return 0;
}

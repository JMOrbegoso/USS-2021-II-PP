#include "structFunctions.h"

void showAppTitle() {
  cout << endl;
  cout << "-----------------------------------------------------------";
  cout << endl << endl << endl;
  cout << "\t\t Sistema virtual de la universidad ";
  cout << endl << endl << endl;
  "-----------------------------------------------------------";
  cout << endl;
}

void registerNewProfession(professionsList &professions) {
  professionStruct newProfession;
  string code, master, name;
  int cyclesQuantity;

  clearScreen();
  showAppTitle();

  gotoxy(20, 8);
  cout << "Registrar nueva profesión de la universidad:" << endl;

  code = requestText("Ingrese el codigo del la nueva profesión", 2);
  master = requestText("Ingrese el nombre completo del director", 5);
  name = requestText("Ingrese el nombre de la profesión", 2);
  cyclesQuantity =
      requestIntegerNumber("Ingrese el numero de ciclos de la profesión",
                           "Por favor ingrese un numero igual o mayor a 1", 1);

  newProfession = buildProfession(code, name, master, cyclesQuantity);

  insert(professions, newProfession);

  cout << "La profesión fue añadida correctamente";

  cout << endl << endl;
}

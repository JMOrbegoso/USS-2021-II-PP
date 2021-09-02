#include "structFunctions.h"

void showAppTitle() {
  cout << endl;
  cout << "-----------------------------------------------------------";
  cout << endl;
  cout << "\t\t Sistema virtual de la universidad ";
  cout << endl;
  cout << "-----------------------------------------------------------";
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
  name = requestText("Ingrese el nombre de la profesión", 2);
  master = requestText("Ingrese el nombre completo del director", 5);
  cyclesQuantity =
      requestIntegerNumber("Ingrese el numero de ciclos de la profesión",
                           "Por favor ingrese un numero igual o mayor a 1", 1);

  newProfession = buildProfession(code, name, master, cyclesQuantity);

  insert(professions, newProfession);

  cout << "La profesión fue añadida correctamente";

  cout << endl << endl;
}

void listProfessions(professionsList professions) {
  clearScreen();
  showAppTitle();

  gotoxy(20, 8);
  cout << "Lista de profesiones de la universidad:" << endl;

  for (int x = 0; x < professions.quantity; x++) {
    gotoxy(20, 5 + x);
    cout << "Codigo:" << (professions.head + x)->code;
    gotoxy(40, 5 + x);
    cout << "Nombre:" << (professions.head + x)->name;
    gotoxy(60, 5 + x);
    cout << "Director:" << (professions.head + x)->master;
    gotoxy(80, 5 + x);
    cout << "Nº Ciclos:" << (professions.head + x)->cyclesQuantity;
  }

  cout << endl << endl;
}

void findProfessions(professionsList professions) {
  string textToFind;
  bool foundProfession;

  textToFind = requestText("Ingrese el texto a buscar", 3, 3);

  clearScreen();
  showAppTitle();

  gotoxy(20, 8);
  cout << "Lista de profesiones de la universidad con un nombre similar a "
       << textToFind << ":" << endl;

  for (int x = 0; x < professions.quantity; x++) {
    if (containsText((professions.head + x)->name, textToFind)) {
      foundProfession = true;

      gotoxy(20, 5 + x);
      cout << "Codigo:" << (professions.head + x)->code;
      gotoxy(40, 5 + x);
      cout << "Nombre:" << (professions.head + x)->name;
      gotoxy(60, 5 + x);
      cout << "Director:" << (professions.head + x)->master;
      gotoxy(80, 5 + x);
      cout << "Nº Ciclos:" << (professions.head + x)->cyclesQuantity;
    }
  }

  if (!foundProfession)
    cout << "No se encontró ninguna profesión con ese nombre";

  cout << endl << endl;
}

void registerNewSubject(professionsList &professions) {
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
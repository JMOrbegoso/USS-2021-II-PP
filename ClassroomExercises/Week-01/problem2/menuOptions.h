#include "structFunctions.h"

void showAppTitle() {
  cout << endl;
  cout << "-----------------------------------------------------------";
  cout << endl;
  cout << "\t\t Sistema virtual de la universidad";
  cout << endl;
  cout << "-----------------------------------------------------------";
  cout << endl;
}

professionStruct requestCreateProfession() {
  string code, master, name;
  unsigned short cyclesQuantity;

  code = requestText("Ingrese el codigo del la nueva profesión", 2);
  name = requestText("Ingrese el nombre de la profesión", 2);
  master = requestText("Ingrese el nombre completo del director", 5);
  cyclesQuantity =
      requestIntegerNumber("Ingrese el numero de ciclos de la profesión",
                           "Por favor ingrese un numero igual o mayor a 1", 1);

  return buildProfession(code, name, master, cyclesQuantity);
}

void registerNewProfession(professionsList& professions) {
  professionStruct newProfession;

  clearScreen();
  showAppTitle();

  gotoxy(20, 5);
  cout << "Registrar nueva profesión de la universidad:" << endl;

  newProfession = requestCreateProfession();

  insert(professions, newProfession);

  cout << "La profesión fue añadida correctamente";

  cout << endl << endl;
}

void listProfessions(professionsList professions) {
  clearScreen();
  showAppTitle();

  gotoxy(20, 5);
  cout << "Lista de profesiones de la universidad:" << endl;

  showProfessionsListHeader(7);

  for (int x = 0; x < professions.length; x++) {
    showProfession(*(professions.head + x), 9, x);
  }

  cout << endl << endl;
}

void findProfessions(professionsList professions) {
  string textToFind;
  bool foundProfession = false;

  textToFind = requestText("Ingrese el texto a buscar", 3);

  clearScreen();
  showAppTitle();

  gotoxy(20, 5);
  cout << "Lista de profesiones de la universidad con un nombre similar a "
       << textToFind << ":" << endl;

  showProfessionsListHeader(7);

  int i = 1;
  for (int x = 0; x < professions.length; x++) {
    if (containsText((professions.head + x)->name, textToFind)) {
      foundProfession = true;
      showProfession(*(professions.head + x), 8, i);
      i++;
    }
  }

  if (!foundProfession) {
    gotoxy(20, 9);
    cout
        << "No se encontró ninguna profesión con un nombre similar al buscado.";
  }

  cout << endl << endl;
}

void showProfessionDetails(professionsList professions) {
  professionStruct* aux;

  aux = requestProfession(
      professions, "Seleccione la profession que quiere revisar en detalle");

  clearScreen();
  showAppTitle();

  gotoxy(20, 5);
  cout << "Carrera profesional de " << aux->name << endl;

  showProfessionsListHeader(7);
  showProfession(*aux, 8, 1);

  gotoxy(20, 11);
  cout << "Cursos de la carrera profesional de " << aux->name << endl;

  showSubjectsListHeader(13);
  for (int x = 0; x < aux->subjects.length; x++) {
    showSubject(*(aux->subjects.head + x), 14, x + 1);
  }

  cout << endl << endl;
}

subjectStruct requestCreateSubject() {
  string code, name;
  unsigned short credits;

  code = requestText("Ingrese el codigo del nuevo curso", 2);
  name = requestText("Ingrese el nombre del nuevo curso", 2);
  credits =
      requestIntegerNumber("Ingrese el numero de creditos del curso",
                           "Por favor ingrese un numero igual o mayor a 1", 1);

  return buildSubject(code, name, credits);
}

void registerNewSubject(professionsList& professions) {
  professionStruct* profession;
  subjectStruct newSubject;

  if (!(professions.length > 0)) {
    cout << "No hay profesiones registradas, ";
    cout << "Por favor primero ingrese al menos una";
    cout << endl << endl;
    return;
  }

  clearScreen();
  showAppTitle();

  gotoxy(20, 5);
  cout << "Registrar nuevo curso en una profesión de la universidad:" << endl;

  profession = requestProfession(
      professions,
      "Por favor ingrese la profesión a la que este curso pertenece");

  if (profession == NULL) {
    cout << "Introdujo una profesión no valida";
    cout << endl << endl;
    return;
  }

  newSubject = requestCreateSubject();

  insert(profession->subjects, newSubject);

  cout << "El curso fue añadido correctamente a la carrera profesional de "
       << profession->name;

  cout << endl << endl;
}

void showAllSubjects(professionsList professions) {
  professionStruct* aux;

  clearScreen();
  showAppTitle();

  gotoxy(20, 5);
  cout << "Listar todos los cursos dictados en la institución" << endl;

  showSubjectsListHeader(7);

  int i = 1;
  for (int x = 0; x < professions.length; x++) {
    aux = (professions.head + x);

    for (int y = 0; y < aux->subjects.length; y++) {
      showSubject(*(aux->subjects.head + y), 8, i);
      i++;
    }
  }

  cout << endl << endl;
}

void findSubject(professionsList professions) {
  professionStruct* aux;
  string textToFind;
  bool foundSubject = false;

  textToFind = requestText("Ingrese el texto a buscar", 3);

  clearScreen();
  showAppTitle();

  gotoxy(20, 5);
  cout << "Buscar un curso dictado en la institución" << endl;

  showSubjectsListHeader(7);

  int i = 1;
  for (int x = 0; x < professions.length; x++) {
    aux = (professions.head + x);

    for (int y = 0; y < aux->subjects.length; y++) {
      if (containsText((aux->subjects.head + y)->name, textToFind)) {
        foundSubject = true;
        showSubject(*(aux->subjects.head + y), 8, i);
        i++;
      }
    }
  }

  if (!foundSubject) {
    gotoxy(20, 9);
    cout << "No se encontró ningun curso con un nombre similar al buscado.";
  }

  cout << endl << endl;
}
#include "structFunctions.h"

void showAppTitle() {
  cout << endl;
  cout << "-----------------------------------------------------------";
  cout << endl;
  cout << "\t\t Sistema virtual del deporte ";
  cout << endl;
  cout << "-----------------------------------------------------------";
  cout << endl;
}

void registerNewTeam(sportStruct &sport) {
  string code, name, city, stadiumName, coachName;

  teamStruct newTeam;

  clearScreen();
  showAppTitle();

  gotoxy(40, 10);
  cout << "Registrar nuevo equipo:" << endl;

  name = requestText("Ingrese el nombre del nuevo equipo", 2);
  code = requestText("Ingrese el codigo del nuevo equipo", 2);
  city = requestText("Ingrese la ciudad del nuevo equipo", 2);
  stadiumName = requestText("Ingrese el nombre de la nueva provincia", 2);
  coachName = requestText("Ingrese el nombre de la nueva provincia", 2);

  newTeam = buildTeam(code, name, city, stadiumName, coachName);

  insert(sport.teams, newTeam);

  cout << "El equipo fue añadido de forma exitosa" << endl;
}

void registerNewPlayer(sportStruct &sport) {
  string firstName;
  string lastName;
  unsigned short age;
  float weigh;
  float heigh;
  string position;

  teamNode *teamNodePointer;

  playerStruct newPlayer;

  clearScreen();
  showAppTitle();

  gotoxy(40, 10);
  cout << "Registrar nuevo distrito:" << endl;

  firstName = requestText("Ingrese el nombre del nuevo jugador", 2);
  lastName = requestText("Ingrese el apellido del nuevo jugador", 2);
  age = requestIntegerNumber("Ingrese la edad del nuevo jugador",
                             "Por favor ingrese un numero igual o superior a 1",
                             1);
  weigh =
      requestFloatNumber("Ingrese el peso del nuevo jugador (Kg)",
                         "Por favor ingrese un numero igual o superior a 1", 1);
  heigh =
      requestFloatNumber("Ingrese la altura del nuevo jugador (Cm)",
                         "Por favor ingrese un numero igual o superior a 1", 1);

  newPlayer = buildPlayer(firstName, lastName, age, weigh, heigh, position);

  teamNodePointer = requestProvinceWithSelector(
      department.provinces,
      "Ingrese la provincia a la que este distrito pertenece:");

  addToCollection(teamNodePointer->province.districts, newPlayer);

  cout << "El distrito fue añadido de forma exitosa" << endl;
}

void findTeam(sportStruct sport) {}

void showTeams(sportStruct sport) {
  provinceNode *provinceNodePointer;

  clearScreen();
  showAppTitle(department);

  gotoxy(40, 10);
  cout << "Todas las provincias del departamento de " << department.name
       << endl;

  provinceNodePointer = department.provinces.head;

  showProvincesListHeaders(12);

  int i = 1;
  while (provinceNodePointer != NULL) {
    showProvince(provinceNodePointer->province, i, i + 13);
    provinceNodePointer = provinceNodePointer->next;
    i++;
  }

  cout << endl << endl;
}

void showTeamDetail(sportStruct sport) {}

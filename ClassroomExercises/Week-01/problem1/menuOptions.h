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
  stadiumName = requestText(
      "Ingrese el nombre del estadio en donde juega el nuevo equipo", 2);
  coachName =
      requestText("Ingrese el nombre del entrenador del nuevo equipo", 2);

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
  cout << "Registrar nuevo jugador:" << endl;

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

  teamNodePointer = requestTeam(
      sport.teams, "Elija el equipo al que este jugador pertenece:");

  insert(teamNodePointer->team.players, newPlayer);

  cout << "El jugador fue añadido de forma exitosa" << endl;
}

void findTeam(sportStruct sport) {
  teamNode *teamNodePointer;
  string teamNameToFind;
  bool teamFound = false;

  teamNameToFind = requestText("Ingrese nombre del equipo a buscar", 2);

  clearScreen();
  showAppTitle();

  gotoxy(40, 10);
  cout << "Equipos con un nombre similar a " << teamNameToFind << ":" << endl;

  teamNodePointer = sport.teams.head;

  showTeamsListHeader(12);

  for (int i = 1; teamNodePointer != NULL; i++) {
    if (containsText(teamNodePointer->team.name, teamNameToFind)) {
      teamFound = true;
      showTeam(teamNodePointer->team, 13, i);
    }
    teamNodePointer = teamNodePointer->next;
  }

  if (!teamFound)
    cout << endl << endl << "No se encontró un equipo con ese nombre.";

  cout << endl << endl;
}

void showTeams(sportStruct sport) {
  teamNode *teamNodePointer;

  clearScreen();
  showAppTitle();

  gotoxy(40, 10);
  cout << "Lista de todos los equipos" << endl;

  teamNodePointer = sport.teams.head;

  showTeamsListHeader(12);

  for (int i = 1; teamNodePointer != NULL; i++) {
    showTeam(teamNodePointer->team, 13, i);
    teamNodePointer = teamNodePointer->next;
  }

  cout << endl << endl;
}

void showTeamDetail(sportStruct sport) {
  teamNode *teamNodePointer;
  playerNode *playerNodePointer;

  teamNodePointer = requestTeam(
      sport.teams, "Seleccione el equipo del que quiere revisar en detalle");

  clearScreen();
  showAppTitle();

  gotoxy(40, 10);
  cout << "Detalle del equipo " << teamNodePointer->team.name << endl;

  showTeamsListHeader(12);
  showTeam(teamNodePointer->team, 13, i);

  playerNodePointer = teamNodePointer->team.players.head;

  showPlayersListHeader(15);
  for (int i = 1; playerNodePointer != NULL; i++) {
    showPlayer(playerNodePointer->player, 16, i);
    playerNodePointer = playerNodePointer->next;
  }

  cout << endl << endl;
}

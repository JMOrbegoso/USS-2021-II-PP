#include "helpers.h"
#include "structs.h"

using namespace std;

void collectionsInitialization(sportStruct &sport) {
  sport.sportName = "Futbol";

  sport.teams.head = NULL;
  sport.teams.length = 0;
}

playerStruct buildPlayer(string firstName, string lastName, unsigned short age,
                         float weigh, float heigh, string position) {
  playerStruct player;

  player.firstName = firstName;
  player.lastName = lastName;
  player.age = age;
  player.weigh = weigh;
  player.heigh = heigh;
  player.position = position;

  return player;
}

teamStruct buildTeam(string code, string name, string city, string stadiumName,
                     string coachName) {
  teamStruct team;

  team.name = name;
  team.city = city;
  team.stadiumName = stadiumName;
  team.coachName = coachName;

  team.players.head = NULL;
  team.players.length = 0;

  return team;
}

void insert(playersList &players, playerStruct newPlayer) {
  playerNode *newNode = new playerNode();

  playerNode *lastNode = players.head;

  newNode->player = newPlayer;
  newNode->next = NULL;

  if (players.head == NULL) {
    players.head = newNode;
  } else {
    while (lastNode->next != NULL) {
      lastNode = lastNode->next;
    }

    lastNode->next = newNode;
  }

  players.length++;
}

void insert(teamsList &teams, teamStruct newTeam) {
  teamNode *newNode = new teamNode();

  teamNode *lastNode = teams.head;

  newNode->team = newTeam;
  newNode->next = NULL;

  if (teams.head == NULL) {
    teams.head = newNode;
  } else {
    while (lastNode->next != NULL) {
      lastNode = lastNode->next;
    }

    lastNode->next = newNode;
  }

  teams.length++;
}

void dataInitialization(sportStruct &sport) {
  playerStruct player1, player2, player3, player4, player5, player6;
  teamStruct team1, team2;

  team1 = buildTeam("t-1", "Deportivo Bolognesi", "Lima", "Estadio Nacional",
                    "Marco Gomez");
  team2 = buildTeam("t-2", "Deportivo Lopez Albujar", "Chiclayo",
                    "Estadio Quiñones", "Rojelio Quiroz");

  player1 = buildPlayer("Ramon", "Rojas", 20, 70, 175, "arquero");
  player2 = buildPlayer("Ramon", "Rojas", 20, 70, 175, "delantero");
  player3 = buildPlayer("Ramon", "Rojas", 20, 70, 175, "defensa");
  player4 = buildPlayer("Ramon", "Rojas", 20, 70, 175, "arquero");
  player5 = buildPlayer("Ramon", "Rojas", 20, 70, 175, "delantero");
  player6 = buildPlayer("Ramon", "Rojas", 20, 70, 175, "defensa");

  insert(team1.players, player1);
  insert(team1.players, player2);
  insert(team1.players, player3);

  insert(team2.players, player4);
  insert(team2.players, player5);
  insert(team2.players, player6);
}

teamNode *iterateTeamsList(teamsList teams, int index) {
  teamNode *teamNodePointer;

  if (0 >= index) {
    return NULL;
  }

  if (index > teams.length) {
    return NULL;
  }

  teamNodePointer = teams.head;

  for (int i = 1; teamNodePointer != NULL; i++) {
    if (i == index) {
      return teamNodePointer;
    }
    teamNodePointer = teamNodePointer->next;
  }

  return NULL;
}

teamNode *requestTeam(teamsList teams, string message) {
  int selectedOption;
  teamNode *teamNodePointer;

  cout << endl
       << message << "." << endl
       << "Escoja entre los " << teams.length << " equipos siguientes:" << endl
       << endl;

  teamNodePointer = teams.head;

  for (int i = 1; teamNodePointer != NULL; i++) {
    cout << "[" << i << "]";
    cout << " - Equipo: ";
    cout << teamNodePointer->team.name;
    cout << " - Con ";
    cout << teamNodePointer->team.players.length;
    cout << " Jugadores.";
    cout << endl;

    teamNodePointer = teamNodePointer->next;
  }

  cout << endl << "Introduzca la opción deseada:" << endl;
  cin >> selectedOption;

  while (!(1 <= selectedOption && selectedOption <= teams.length)) {
    cout << "Por favor, introduzca un valor entre 1 y " << teams.length << "."
         << endl;
    fflush(stdin);
    cin >> selectedOption;
  }

  return iterateTeamsList(teams, selectedOption);
}

void showTeamsListHeader(int y) {
  gotoxy(0, y);
  cout << "Codigo";
  gotoxy(10, y);
  cout << "Nombre";
  gotoxy(30, y);
  cout << "Ciudad";
  gotoxy(45, y);
  cout << "Estadio";
  gotoxy(60, y);
  cout << "Entrenador";
}

void showTeam(teamStruct team, int y, int itemNumber) {
  gotoxy(0, y + itemNumber);
  cout << team.code;
  gotoxy(10, y + itemNumber);
  cout << team.name;
  gotoxy(30, y + itemNumber);
  cout << team.city;
  gotoxy(45, y + itemNumber);
  cout << team.stadiumName;
  gotoxy(60, y + itemNumber);
  cout << team.coachName;
}

void showPlayersListHeader(int y) {
  gotoxy(0, y);
  cout << "Nombres";
  gotoxy(15, y);
  cout << "Apellidos";
  gotoxy(30, y);
  cout << "Edad";
  gotoxy(35, y);
  cout << "Peso";
  gotoxy(45, y);
  cout << "Altura";
  gotoxy(50, y);
  cout << "Posición";
}

void showPlayer(playerStruct player, int y, int itemNumber) {
  gotoxy(0, y + itemNumber);
  cout << player.firstName;
  gotoxy(15, y + itemNumber);
  cout << player.lastName;
  gotoxy(30, y + itemNumber);
  cout << player.age;
  gotoxy(35, y + itemNumber);
  cout << player.weigh;
  gotoxy(45, y + itemNumber);
  cout << player.heigh;
  gotoxy(50, y + itemNumber);
  cout << player.position;
}

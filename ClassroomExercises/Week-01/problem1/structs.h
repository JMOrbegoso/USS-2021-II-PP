#include <iostream>

using namespace std;

struct playerStruct {
  string firstName;
  string lastName;
  unsigned short age;
  float weigh;
  float heigh;
  string position;
};

struct playerNode {
  playerStruct player;
  playerNode *next;
  playerNode *previous;
};

struct playersList {
  playerNode *head;
  int length;
};

struct teamStruct {
  string code;
  string name;
  string city;
  string stadiumName;
  string coachName;
  playersList players;
};

struct teamNode {
  teamStruct team;
  teamNode *next;
  teamNode *previous;
};

struct teamsList {
  teamNode *head;
  int length;
};

struct sportStruct {
  string sportName;
  teamsList teams;
};
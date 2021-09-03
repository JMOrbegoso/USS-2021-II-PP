#include <iostream>

using namespace std;

struct subjectStruct {
  string code;
  string name;
  unsigned short credits;
};

struct subjectsList {
  subjectStruct* head;
  int capacity;
  int length;
};

struct professionStruct {
  string code;
  string name;
  string master;
  unsigned short cyclesQuantity;
  subjectsList subjects;
};

struct professionsList {
  professionStruct* head;
  int capacity;
  int length;
};
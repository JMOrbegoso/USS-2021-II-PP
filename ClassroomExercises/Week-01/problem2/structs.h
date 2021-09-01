#include <iostream>

using namespace std;

struct professionStruct {
  string code;
  string name;
  string master;
  unsigned short cyclesQuantity;
}

struct professionsList {
  int max;
  int quantity;
  professionStruct *head;
}
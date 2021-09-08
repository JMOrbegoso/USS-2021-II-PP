#include <iostream>

using namespace std;

// Student
struct vehicleStruct {
  string ownerFullName;
  string licensePlate;
};

struct vehiclesList {
  vehicleStruct *head;
  int capacity;
  int length;
};

// Day
struct dayStruct {
  string dayName;
  vehiclesList vehicles;
};

struct dayNode {
  dayStruct day;
  dayNode *next;
};

struct daysList {
  dayNode *head;
  int length;
};

// Vehicle Depot
struct vehicleDepotStruct {
  string businessName;
  daysList days;
};

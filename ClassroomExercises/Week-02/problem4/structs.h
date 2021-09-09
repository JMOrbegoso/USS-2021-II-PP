#include <iostream>

using namespace std;

// Vehicle Owner
struct vehicleOwnerStruct {
  string firstName;
  string lastName;
  string dni;
};

// Vehicle
struct vehicleStruct {
  string licensePlate;
  vehicleOwnerStruct owner;
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

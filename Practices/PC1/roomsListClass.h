#include "roomClass.h"

using namespace std;

class roomsListClass {
 private:
  int capacity;
  int length;
  roomClass* head;

  void grow(int growIn);

 public:
  ~roomsListClass();
  roomsListClass();

  int getCapacity();
  void setCapacity(int value);

  int getLength();
  void setLength(int value);

  roomClass* getHead();
  void setHead(roomClass* value);

  void show(int rowNumber);

  roomClass* findRoomByRoomNumber(unsigned short roomNumber);
  clientClass* findClientByDni(string dni);

  void insert(roomClass* newClient);

  roomClass* pickRoom(string message);
};

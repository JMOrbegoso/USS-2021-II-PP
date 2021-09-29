#include "classRoomClass.h";

using namespace std;

class classRoomsListClass {
 private:
  int capacity;
  int length;
  classRoomClass* head;

  void grow(int growIn);

 public:
  ~classRoomsListClass();
  classRoomsListClass();

  int getCapacity();
  void setCapacity(int value) { this->capacity = value; }

  int getLength();
  void setLength(int value);

  classRoomClass* getHead();
  void setHead(classRoomClass* value);

  void showClassRooms(int rowNumber);

  studentClass* findStudentByDni(string dni);

  void insert(classRoomClass* newClassRoom);

  classRoomClass* pickClassRoom(string message);
};

#include "gameClass.h";

using namespace std;

class classRoomsListClass {
 private:
  int capacity;
  int length;
  gameClass* head;

  void grow(int growIn);

 public:
  ~classRoomsListClass();
  classRoomsListClass();

  int getCapacity();
  void setCapacity(int value);

  int getLength();
  void setLength(int value);

  gameClass* getHead();
  void setHead(gameClass* value);

  void showClassRooms(int rowNumber);

  clientClass* findStudentByDni(string dni);

  void insert(gameClass* newClassRoom);

  gameClass* pickClassRoom(string message);
};

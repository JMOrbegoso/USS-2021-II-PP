#include "dataSeedClass.h";

using namespace std;

class menuClass {
 private:
  amusementParkClass* school;

  void showAppTitle();

  int requestMenuOption();

  void showClassRoomsTableHeader(int rowNumber);

  void showStudentsTableHeader(int rowNumber);

  void editSchoolName();

  void registerNewClassRoom();

  void showClassRooms();

  void showClassRoomDetail();

  void editClassRoom();

  void registerNewStudent();

  void showStudents();

  void editStudent();

  void findStudentByDni();

 public:
  ~menuClass();
  menuClass(amusementParkClass*& school1);

  void showMenu();
};

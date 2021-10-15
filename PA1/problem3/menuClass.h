#include "dataSeedClass.h";

using namespace std;

class menuClass {
 private:
  automotiveClass* school;

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
  menuClass(automotiveClass*& school);

  void showMenu();
};

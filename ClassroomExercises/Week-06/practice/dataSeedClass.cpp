#include "dataSeedClass.h"

using namespace std;

void dataSeedClass::seed(schoolClass *&school) {
  classRoomClass *classRoom_1, *classRoom_2;
  studentClass *student_1, *student_2, *student_3, *student_4, *student_5,
      *student_6;

  school->setName("USS");

  classRoom_1 = new classRoomClass("Juan Perez");
  classRoom_2 = new classRoomClass("Juana Perez");

  student_1 = new studentClass("Ricardo", "Flores", "10117618", 19, true);
  student_2 = new studentClass("Susana", "Diaz", "80121607", 20, false);
  student_3 = new studentClass("Roberto", "Rioja", "71188517", 19, true);
  student_4 = new studentClass("Marcos", "Garcia", "52421620", 20, true);
  student_5 = new studentClass("Maria", "Gonzales", "95101014", 21, false);
  student_6 = new studentClass("Guillermo", "Lopez", "13729607", 22, true);

  classRoom_1->getStudents()->insert(student_1);
  classRoom_1->getStudents()->insert(student_2);
  classRoom_1->getStudents()->insert(student_3);
  classRoom_1->getStudents()->insert(student_4);
  classRoom_2->getStudents()->insert(student_5);
  classRoom_2->getStudents()->insert(student_6);

  school->getClassRooms()->insert(classRoom_1);
  school->getClassRooms()->insert(classRoom_2);
}

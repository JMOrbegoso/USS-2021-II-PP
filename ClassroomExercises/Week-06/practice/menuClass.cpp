#include "menuClass.h"

#include <iostream>

#include "helpersClass.h"

using namespace std;

void menuClass::showAppTitle() {
  cout << endl;
  cout << "-----------------------------------------------------------";
  cout << endl;
  cout << "\t\t Sistema virtual de la escuela ";
  cout << this->school->getName();
  cout << endl;
  cout << "-----------------------------------------------------------";
  cout << endl;
}

int menuClass::requestMenuOption() {
  int selectedOption;

  helpersClass::clearScreen();
  this->showAppTitle();

  cout << endl
       << "Esta aplicación tiene las siguientes opciones:" << endl
       << endl;

  cout << "[1] Editar nombre de la escuela" << endl;
  cout << "[2] Registrar aula" << endl;
  cout << "[3] Mostrar todas las aulas" << endl;
  cout << "[4] Ver aula en detalle" << endl;
  cout << "[5] Editar aula" << endl;
  cout << "[6] Registrar estudiante" << endl;
  cout << "[7] Mostrar estudiantes" << endl;
  cout << "[8] Editar estudiante" << endl;
  cout << "[9] Buscar estudiante por DNI" << endl;

  cout << endl;
  cout << "[0] Cerrar" << endl;

  cout << endl << "Por favor ingrese una de las opciones:" << endl;
  cin >> selectedOption;
  while (!(0 <= selectedOption && selectedOption <= 9)) {
    cout << "La opcion seleccionada fue inválida, por favor seleccione una "
            "opcion válida:"
         << endl;
    cin >> selectedOption;
  }
  return selectedOption;
}

void menuClass::showClassRoomsTableHeader(int rowNumber) {
  helpersClass::gotoxy(0, rowNumber);
  cout << "#";
  helpersClass::gotoxy(5, rowNumber);
  cout << "Codigo";
  helpersClass::gotoxy(15, rowNumber);
  cout << "Profesor Responsable";
  helpersClass::gotoxy(45, rowNumber);
  cout << "# de Estudiantes";
}

void menuClass::showStudentsTableHeader(int rowNumber) {
  helpersClass::gotoxy(0, rowNumber);
  cout << "#";
  helpersClass::gotoxy(5, rowNumber);
  cout << "Codigo";
  helpersClass::gotoxy(15, rowNumber);
  cout << "Nombres";
  helpersClass::gotoxy(30, rowNumber);
  cout << "Apellidos";
  helpersClass::gotoxy(45, rowNumber);
  cout << "DNI";
  helpersClass::gotoxy(55, rowNumber);
  cout << "Edad";
  helpersClass::gotoxy(65, rowNumber);
  cout << "Genero";
}

void menuClass::editSchoolName() {
  helpersClass::clearScreen();
  this->showAppTitle();

  cout << "Editar nombre de la escuela:" << endl << endl;

  string name = helpersClass::requestText(
      "Por favor ingrese el nuevo nombre de la escuela", 1);

  this->school->setName(name);

  cout << "Datos del colegio editados correctamente" << endl;
  cout << endl;
}

void menuClass::registerNewClassRoom() {
  classRoomClass* newClassRoom;
  classRoomsListClass* auxClassRoomsList;
  string teacherFullName;

  helpersClass::clearScreen();
  this->showAppTitle();

  cout << "Registrar nueva aula del colegio:" << endl << endl;

  teacherFullName = helpersClass::requestText(
      "Por favor ingrese el nombre del docente responsable de la nueva aula",
      3);

  newClassRoom = new classRoomClass(teacherFullName);

  auxClassRoomsList = this->school->getClassRooms();
  auxClassRoomsList->insert(newClassRoom);
  this->school->setClassRooms(auxClassRoomsList);

  cout << "Aula registrada correctamente" << endl;
  cout << endl;
}

void menuClass::showClassRooms() {
  helpersClass::clearScreen();
  this->showAppTitle();

  helpersClass::gotoxy(20, 5);
  cout << "Lista de todas las aulas del colegio:" << endl << endl;

  if (this->school->getClassRooms()->getLength() == 0) {
    cout << "No hay ningún aula registrada" << endl;
    cout << "Primero registre al menos un aula" << endl;
    return;
  }

  this->showClassRoomsTableHeader(7);

  this->school->getClassRooms()->show(8);

  cout << endl << endl;
}

void menuClass::showClassRoomDetail() {
  classRoomClass* auxClassRoom;
  studentNodeClass* auxStudentNode;

  auxClassRoom = this->school->getClassRooms()->pickClassRoom(
      "Seleccione el aula que quiere ver en detalle");

  if (auxClassRoom == NULL) {
    cout << "Eligió una aula de clase no valida o no hay aulas registradas";
    cout << endl << endl;
    return;
  }

  helpersClass::clearScreen();
  this->showAppTitle();

  helpersClass::gotoxy(20, 5);
  cout << "Detalle del aula " << auxClassRoom->getCode() << endl << endl;

  this->showStudentsTableHeader(7);

  int i = 1;
  auxStudentNode = auxClassRoom->getStudents()->getHead();
  while (auxStudentNode != NULL) {
    auxStudentNode->getStudent()->show(8 + i, i);
    i++;
    auxStudentNode = auxStudentNode->getNext();
  }

  cout << endl << endl;
}

void menuClass::editClassRoom() {
  classRoomClass* auxClassRoom;
  string teacherFullName;

  helpersClass::clearScreen();
  this->showAppTitle();

  cout << "Editar aula del colegio:" << endl << endl;

  auxClassRoom = this->school->getClassRooms()->pickClassRoom(
      "Seleccione el aula que desea editar");

  if (auxClassRoom == NULL) {
    cout << "Eligió una aula de clase no valida o no hay aulas registradas";
    cout << endl << endl;
    return;
  }

  teacherFullName = helpersClass::requestText(
      "Por favor ingrese el nombre completo del nuevo profesor responsable del "
      "aula",
      1);

  auxClassRoom->setTeacherFullName(teacherFullName);

  cout << "Datos del aula editados correctamente";
  cout << endl << endl;
}

void menuClass::registerNewStudent() {
  studentClass* newStudent;
  classRoomClass* auxClassRoom;
  studentsListClass* auxStudentsList;
  string firstName;
  string lastName;
  string dni;
  unsigned short age;
  bool genre;

  helpersClass::clearScreen();
  this->showAppTitle();

  cout << "Registrar nuevo estudiante del colegio:" << endl << endl;

  auxClassRoom = this->school->getClassRooms()->pickClassRoom(
      "Seleccione el aula donde desea añadir el estudiante");

  if (auxClassRoom == NULL) {
    cout << "Eligió una aula de clase no valida o no hay aulas registradas";
    cout << endl << endl;
    return;
  }

  firstName =
      helpersClass::requestText("Ingrese los nombres del nuevo estudiante", 2);
  lastName = helpersClass::requestText(
      "Ingrese los apellidos del nuevo estudiante", 2);
  dni = helpersClass::requestText("Ingrese el DNI del nuevo estudiante", 8, 8);
  age = helpersClass::requestIntegerNumber(
      "Ingrese la edad del nuevo estudiante",
      "Por favor ingrese una edad igual o mayor a 3", 3);
  genre = helpersClass::requestGenre(
      "Porfavor ingrese el genero del nuevo estudiante");

  newStudent = new studentClass(firstName, lastName, dni, age, genre);

  auxStudentsList = auxClassRoom->getStudents();
  auxStudentsList->insert(newStudent);
  auxClassRoom->setStudents(auxStudentsList);

  cout << "Estudiante registrado correctamente" << endl;
  cout << endl;
}

void menuClass::showStudents() {
  classRoomClass* auxClassRoom;
  studentNodeClass* auxStudentNode;

  helpersClass::clearScreen();
  this->showAppTitle();

  helpersClass::gotoxy(20, 5);
  cout << "Lista de todos los estudiantes del colegio:" << endl << endl;

  if (this->school->getClassRooms()->getLength() == 0) {
    cout << "No hay ningún aula registrada" << endl;
    cout << "Primero registre al menos un aula" << endl;
    return;
  }

  this->showStudentsTableHeader(7);

  int i = 1;
  for (int x = 0; x < this->school->getClassRooms()->getLength(); x++) {
    auxClassRoom = this->school->getClassRooms()->getHead() + x;

    auxStudentNode = auxClassRoom->getStudents()->getHead();
    while (auxStudentNode != NULL) {
      auxStudentNode->getStudent()->show(8 + i, i);
      i++;
      auxStudentNode = auxStudentNode->getNext();
    }
  }

  cout << endl << endl;
}

void menuClass::editStudent() {
  classRoomClass* auxClassRoom;
  studentClass* auxStudent;
  string firstName;
  string lastName;
  string dni;
  unsigned short age;
  bool genre;

  helpersClass::clearScreen();
  this->showAppTitle();

  cout << "Editar estudiante del colegio:" << endl << endl;

  auxClassRoom = this->school->getClassRooms()->pickClassRoom(
      "Seleccione el aula donde se encuentra el estudiante que desea editar");

  if (auxClassRoom == NULL) {
    cout << "Eligió una aula de clase no valida o no hay aulas registradas";
    cout << endl << endl;
    return;
  }

  auxStudent = auxClassRoom->getStudents()->pickStudent(
      "Seleccione el estudiante que desea editar");

  if (auxStudent == NULL) {
    cout << "Eligió un estudiante no valido o no hay estudiantes registrados";
    cout << endl << endl;
    return;
  }

  firstName =
      helpersClass::requestText("Ingrese los nuevo nombres del estudiante", 2);
  lastName = helpersClass::requestText(
      "Ingrese los nuevo apellidos del estudiante", 2);
  dni = helpersClass::requestText("Ingrese el nuevo DNI del estudiante", 8, 8);
  age = helpersClass::requestIntegerNumber(
      "Ingrese la nuevo edad del estudiante",
      "Por favor ingrese una edad igual o mayor a 3", 3);
  genre = helpersClass::requestGenre(
      "Por favor ingrese el nuevo genero del estudiante");

  auxStudent->setFirstName(firstName);
  auxStudent->setLastName(lastName);
  auxStudent->setDni(dni);
  auxStudent->setAge(age);
  auxStudent->setGenre(genre);

  cout << "Datos del estudiante editados correctamente";
  cout << endl << endl;
}

void menuClass::findStudentByDni() {
  studentClass* auxStudent;
  string dniToFind;

  dniToFind =
      helpersClass::requestText("Ingrese el DNI del estudiante a buscar", 8, 8);

  helpersClass::clearScreen();
  this->showAppTitle();

  auxStudent = this->school->getClassRooms()->findStudentByDni(dniToFind);

  if (auxStudent == NULL) {
    cout << "No se encontró un estudiante con el DNI ingresado";
    cout << endl << endl;
    return;
  }

  helpersClass::gotoxy(20, 5);
  cout << "Estudiante con el DNI: " << dniToFind << endl;

  this->showStudentsTableHeader(7);

  auxStudent->show(9, 1);

  cout << endl << endl;
}

menuClass::~menuClass() {}
menuClass::menuClass(schoolClass*& school) { this->school = school; }

void menuClass::showMenu() {
  int selectedOption;

  do {
    selectedOption = this->requestMenuOption();

    if (selectedOption != 0) {
      switch (selectedOption) {
        case 1:
          this->editSchoolName();
          helpersClass::addDelay(1.5);
          break;
        case 2:
          this->registerNewClassRoom();
          helpersClass::addDelay(1.5);
          break;
        case 3:
          this->showClassRooms();
          helpersClass::pauseProcess();
          break;
        case 4:
          this->showClassRoomDetail();
          helpersClass::pauseProcess();
          break;
        case 5:
          this->editClassRoom();
          helpersClass::addDelay(1500);
          break;
        case 6:
          this->registerNewStudent();
          helpersClass::addDelay(1500);
          break;
        case 7:
          this->showStudents();
          helpersClass::pauseProcess();
          break;
        case 8:
          this->editStudent();
          helpersClass::addDelay(1500);
          break;
        case 9:
          this->findStudentByDni();
          helpersClass::pauseProcess();
          break;
      }
    }
  } while (!(selectedOption == 0));

  cout << "Gracias por usar la app, tenga un buen día!" << endl;
}

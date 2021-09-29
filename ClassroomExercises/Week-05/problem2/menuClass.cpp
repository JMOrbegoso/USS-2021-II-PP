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
  cout << "[6] Registrar cliente" << endl;
  cout << "[7] Mostrar clientes" << endl;
  cout << "[8] Editar cliente" << endl;
  cout << "[9] Buscar cliente por DNI" << endl;

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
  cout << "# de clientes";
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
  gameClass* newClassRoom;
  string code;
  string teacherFullName;

  helpersClass::clearScreen();
  this->showAppTitle();

  cout << "Registrar nueva aula del colegio:" << endl << endl;

  code = helpersClass::requestText(
      "Por favor ingrese el codigo de la nueva aula", 3, 3);
  teacherFullName = helpersClass::requestText(
      "Por favor ingrese el nombre del docente responsable de la nueva aula",
      3);

  newClassRoom = new gameClass(code, teacherFullName);

  this->school->getClassRooms()->insert(newClassRoom);

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

  this->school->getClassRooms()->showClassRooms(8);

  cout << endl << endl;
}

void menuClass::showClassRoomDetail() {
  gameClass* auxClassRoom;
  clientClass* auxStudent;

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
  for (int y = 0; y < auxClassRoom->getClients()->getLength(); y++) {
    auxStudent = auxClassRoom->getClients()->getHead() + y;
    auxStudent->show(8 + i, i);
    i++;
  }

  cout << endl << endl;
}

void menuClass::editClassRoom() {
  gameClass* auxClassRoom;
  string code;
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

  code = helpersClass::requestText("Por favor ingrese el nuevo codigo del aula",
                                   3, 3);
  teacherFullName = helpersClass::requestText(
      "Por favor ingrese el nombre del nuevo profesor responsable del aula", 1);

  auxClassRoom->setCode(code);
  auxClassRoom->setTeacherFullName(teacherFullName);

  cout << "Datos del aula editados correctamente";
  cout << endl << endl;
}

void menuClass::registerNewStudent() {
  clientClass* newStudent;
  gameClass* auxClassRoom;
  string code;
  string firstName;
  string lastName;
  string dni;
  unsigned short age;
  bool genre;

  helpersClass::clearScreen();
  this->showAppTitle();

  cout << "Registrar nuevo cliente del colegio:" << endl << endl;

  auxClassRoom = this->school->getClassRooms()->pickClassRoom(
      "Seleccione el aula donde desea añadir el cliente");

  if (auxClassRoom == NULL) {
    cout << "Eligió una aula de clase no valida o no hay aulas registradas";
    cout << endl << endl;
    return;
  }

  code = helpersClass::requestText("Ingrese el codigo del nuevo cliente", 3, 3);
  firstName =
      helpersClass::requestText("Ingrese los nombres del nuevo cliente", 2);
  lastName =
      helpersClass::requestText("Ingrese los apellidos del nuevo cliente", 2);
  dni = helpersClass::requestText("Ingrese el DNI del nuevo cliente", 8, 8);
  age = helpersClass::requestIntegerNumber(
      "Ingrese la edad del nuevo cliente",
      "Por favor ingrese una edad igual o mayor a 3", 3);
  genre = helpersClass::requestGenre(
      "Porfavor ingrese el genero del nuevo cliente");

  newStudent = new clientClass(code, firstName, lastName, dni, age, genre);

  auxClassRoom->getClients()->insert(newStudent);

  cout << "cliente registrado correctamente" << endl;
  cout << endl;
}

void menuClass::showStudents() {
  gameClass* auxClassRoom;
  clientClass* auxStudent;

  helpersClass::clearScreen();
  this->showAppTitle();

  helpersClass::gotoxy(20, 5);
  cout << "Lista de todos los clientes del colegio:" << endl << endl;

  if (this->school->getClassRooms()->getLength() == 0) {
    cout << "No hay ningún aula registrada" << endl;
    cout << "Primero registre al menos un aula" << endl;
    return;
  }

  this->showStudentsTableHeader(7);

  int i = 1;
  for (int x = 0; x < this->school->getClassRooms()->getLength(); x++) {
    auxClassRoom = this->school->getClassRooms()->getHead() + x;

    for (int y = 0; y < auxClassRoom->getClients()->getLength(); y++) {
      auxStudent = auxClassRoom->getClients()->getHead() + y;
      auxStudent->show(8 + i, i);
      i++;
    }
  }

  cout << endl << endl;
}

void menuClass::editStudent() {
  gameClass* auxClassRoom;
  clientClass* auxStudent;
  string code;
  string firstName;
  string lastName;
  string dni;
  unsigned short age;
  float heigh;

  helpersClass::clearScreen();
  this->showAppTitle();

  cout << "Editar cliente del colegio:" << endl << endl;

  auxClassRoom = this->school->getClassRooms()->pickClassRoom(
      "Seleccione el aula donde se encuentra el cliente que desea editar");

  if (auxClassRoom == NULL) {
    cout << "Eligió una aula de clase no valida o no hay aulas registradas";
    cout << endl << endl;
    return;
  }

  auxStudent = auxClassRoom->getClients()->pickStudent(
      "Seleccione el cliente que desea editar");

  if (auxStudent == NULL) {
    cout << "Eligió un cliente no valido o no hay clientes registrados";
    cout << endl << endl;
    return;
  }

  code = helpersClass::requestText("Ingrese el nuevo codigo del cliente", 3, 3);
  firstName =
      helpersClass::requestText("Ingrese los nuevo nombres del cliente", 2);
  lastName =
      helpersClass::requestText("Ingrese los nuevo apellidos del cliente", 2);
  dni = helpersClass::requestText("Ingrese el nuevo DNI del cliente", 8, 8);
  age = helpersClass::requestIntegerNumber(
      "Ingrese la nuevo edad del cliente",
      "Por favor ingrese una edad igual o mayor a 3", 3);
  heigh = helpersClass::requestFloatNumber(
      "Por favor ingrese la altura del cliente en metros",
      "Por favor ingrese una altura igual o superior a 1m", 1);

  auxStudent->setCode(code);
  auxStudent->setFirstName(firstName);
  auxStudent->setLastName(lastName);
  auxStudent->setDni(dni);
  auxStudent->setAge(age);
  auxStudent->setHeigh(heigh);

  cout << "Datos del clientes editados correctamente";
  cout << endl << endl;
}

void menuClass::findStudentByDni() {
  clientClass* auxStudent;
  string dniToFind;

  dniToFind =
      helpersClass::requestText("Ingrese el DNI del cliente a buscar", 8, 8);

  helpersClass::clearScreen();
  this->showAppTitle();

  auxStudent = this->school->getClassRooms()->findStudentByDni(dniToFind);

  if (auxStudent == NULL) {
    cout << "No se encontró un cliente con el DNI ingresado";
    cout << endl << endl;
    return;
  }

  helpersClass::gotoxy(20, 5);
  cout << "Cliente con el DNI: " << dniToFind << endl;

  this->showStudentsTableHeader(7);

  auxStudent->show(9, 1);

  cout << endl << endl;
}

menuClass::~menuClass() {}
menuClass::menuClass(amusementParkClass*& school1) { this->school = school1; }

void menuClass::showMenu() {
  int selectedOption;

  do {
    selectedOption = this->requestMenuOption();

    if (selectedOption != 0) {
      switch (selectedOption) {
        case 1:
          this->editSchoolName();
          Sleep(1500);
          break;
        case 2:
          this->registerNewClassRoom();
          Sleep(1500);
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
          Sleep(1500);
          break;
        case 6:
          this->registerNewStudent();
          Sleep(1500);
          break;
        case 7:
          this->showStudents();
          helpersClass::pauseProcess();
          break;
        case 8:
          this->editStudent();
          Sleep(1500);
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

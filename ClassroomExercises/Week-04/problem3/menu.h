#include <Windows.h>

#include <iostream>

#include "dataSeed.h";

using namespace std;

class menu {
 private:
  school* college;

  void showAppTitle() {
    cout << endl;
    cout << "-----------------------------------------------------------";
    cout << endl;
    cout << "\t\t Sistema virtual de la escuela ";
    cout << this->college->getName();
    cout << endl;
    cout << "-----------------------------------------------------------";
    cout << endl;
  }

  int requestMenuOption() {
    int selectedOption;

    system("cls");
    showAppTitle();

    cout << endl
         << "Esta aplicación tiene las siguientes opciones:" << endl
         << endl;

    cout << "[1] Editar nombre de la escuela" << endl;
    cout << "[2] Registrar aula" << endl;
    cout << "[3] Mostrar aulas" << endl;
    cout << "[4] Editar aula" << endl;
    cout << "[5] Registrar estudiante" << endl;
    cout << "[6] Mostrar estudiantes" << endl;
    cout << "[7] Editar estudiante" << endl;
    cout << "[8] Buscar estudiante por DNI" << endl;

    cout << endl;
    cout << "[0] Cerrar" << endl;

    cout << endl << "Por favor ingrese una de las opciones:" << endl;
    cin >> selectedOption;
    while (!(0 <= selectedOption && selectedOption <= 8)) {
      cout << "La opcion seleccionada fue inválida, por favor seleccione una "
              "opcion válida:"
           << endl;
      cin >> selectedOption;
    }
    return selectedOption;
  }

  void editSchoolName() {
    system("cls");

    cout << "Editar nombre de la escuela:" << endl << endl;

    string name = helpers::requestText(
        "Por favor ingrese el nuevo nombre de la escuela", 1);

    this->college->setName(name);

    cout << "Datos del colegio editados correctamente" << endl;
    cout << endl;
  }

  void registerNewClassRoom() {
    classRoom* newClassRoom;
    string code;
    string teacherFullName;

    system("cls");

    cout << "Registrar nueva aula del colegio:" << endl << endl;

    code = helpers::requestText("Por favor ingrese el codigo de la nueva aula",
                                3, 3);
    teacherFullName = helpers::requestText(
        "Por favor ingrese el nombre del docente responsable de la nueva aula",
        3);

    newClassRoom = new classRoom(code, teacherFullName);

    this->college->getClassRooms()->insert(newClassRoom);

    cout << "Aula registrada correctamente" << endl;
    cout << endl;
  }

  void showClassRooms() {
    system("cls");

    helpers::gotoxy(20, 5);
    cout << "Lista de todas las aulas del colegio:" << endl << endl;

    this->college->getClassRooms()->showClassRooms(7);

    cout << endl << endl;
  }

  void editClassRoom() {
    classRoom* auxClassRoom;
    string code;
    string teacherFullName;

    system("cls");

    cout << "Editar aula del colegio:" << endl << endl;

    auxClassRoom = this->college->getClassRooms()->pickClassRoom(
        "Seleccione el aula que desea editar");

    if (auxClassRoom == NULL) {
      cout << "Eligió una aula de clase no valida o no hay aulas registradas";
      cout << endl << endl;
      return;
    }

    code = helpers::requestText("Por favor ingrese el nuevo codigo del aula", 3,
                                3);
    teacherFullName = helpers::requestText(
        "Por favor ingrese el nombre del nuevo profesor responsable del aula",
        1);

    auxClassRoom->setCode(code);
    auxClassRoom->setTeacherFullName(teacherFullName);

    cout << "Datos del aula editados correctamente";
    cout << endl << endl;
  }

  void registerNewStudent() {
    student* newStudent;
    classRoom* auxClassRoom;
    string code;
    string firstName;
    string lastName;
    string dni;
    unsigned short age;
    bool genre;

    system("cls");

    cout << "Registrar nuevo estudiante del colegio:" << endl << endl;

    auxClassRoom = this->college->getClassRooms()->pickClassRoom(
        "Seleccione el aula donde desea añadir el estudiante");

    if (auxClassRoom == NULL) {
      cout << "Eligió una aula de clase no valida o no hay aulas registradas";
      cout << endl << endl;
      return;
    }

    code = helpers::requestText("Ingrese el codigo del nuevo estudiante", 3, 3);
    firstName =
        helpers::requestText("Ingrese los nombres del nuevo estudiante", 2);
    lastName =
        helpers::requestText("Ingrese los apellidos del nuevo estudiante", 2);
    dni = helpers::requestText("Ingrese el DNI del nuevo estudiante", 8, 8);
    age = helpers::requestIntegerNumber(
        "Ingrese la edad del nuevo estudiante",
        "Por favor ingrese una edad igual o mayor a 3", 3);
    genre = helpers::requestGenre(
        "Porfavor ingrese el genero del nuevo estudiante");

    newStudent = new student(code, firstName, lastName, dni, age, genre);

    auxClassRoom->getStudents()->insert(newStudent);

    cout << "Estudiante registrado correctamente" << endl;
    cout << endl;
  }

  void showStudents() {
    classRoom* auxClassRoom;
    student* auxStudent;

    system("cls");

    helpers::gotoxy(20, 5);
    cout << "Lista de todos los estudiantes del colegio:" << endl << endl;

    if (this->college->getClassRooms()->getLength() == 0) {
      cout << "No hay ningún aula registrada" << endl;
      cout << "Primero registre al menos un aula" << endl;
      return;
    }

    int i = 1;
    for (int x = 0; x < this->college->getClassRooms()->getLength(); x++) {
      auxClassRoom = this->college->getClassRooms()->getHead() + x;

      for (int y = 0; y < auxClassRoom->getStudents()->getLength(); y++) {
        auxStudent = auxClassRoom->getStudents()->getHead() + y;
        auxStudent->showStudent(7 + i, i);
        i++;
      }
    }

    cout << endl << endl;
  }

  void editStudent() {
    classRoom* auxClassRoom;
    student* auxStudent;
    string code;
    string firstName;
    string lastName;
    string dni;
    unsigned short age;
    bool genre;

    system("cls");

    cout << "Editar estudiante del colegio:" << endl << endl;

    auxClassRoom = this->college->getClassRooms()->pickClassRoom(
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

    code = helpers::requestText("Ingrese el nuevo codigo del estudiante", 3, 3);
    firstName =
        helpers::requestText("Ingrese los nuevo nombres del estudiante", 2);
    lastName =
        helpers::requestText("Ingrese los nuevo apellidos del estudiante", 2);
    dni = helpers::requestText("Ingrese el nuevo DNI del estudiante", 8, 8);
    age = helpers::requestIntegerNumber(
        "Ingrese la nuevo edad del estudiante",
        "Por favor ingrese una edad igual o mayor a 3", 3);
    genre = helpers::requestGenre(
        "Por favor ingrese el nuevo genero del estudiante");

    auxStudent->setCode(code);
    auxStudent->setFirstName(firstName);
    auxStudent->setLastName(lastName);
    auxStudent->setDni(dni);
    auxStudent->setAge(age);
    auxStudent->setGenre(genre);

    cout << "Datos del estudiante editados correctamente";
    cout << endl << endl;
  }

  void findStudentByDni() {
    student* auxStudent;
    string dniToFind;

    dniToFind =
        helpers::requestText("Ingrese el DNI del estudiante a buscar", 8, 8);

    system("cls");

    auxStudent = this->college->getClassRooms()->findStudentByDni(dniToFind);

    if (auxStudent == NULL) {
      cout << "No se encontró un estudiante con el DNI ingresado";
      cout << endl << endl;
      return;
    }

    helpers::gotoxy(20, 5);
    cout << "Estudiante con el DNI: " << dniToFind << endl;

    auxStudent->showStudent(7, 1);

    cout << endl << endl;
  }

 public:
  menu(school*& school) { this->college = school; }

  void showMenu() {
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
            system("pause");
            break;
          case 4:
            this->editClassRoom();
            Sleep(1500);
            break;
          case 5:
            this->registerNewStudent();
            Sleep(1500);
            break;
          case 6:
            this->showStudents();
            system("pause");
            break;
          case 7:
            this->editStudent();
            Sleep(1500);
            break;
          case 8:
            this->findStudentByDni();
            system("pause");
            break;
        }
      }
    } while (!(selectedOption == 0));

    cout << "Gracias por usar la app, tenga un buen día!" << endl;
  }
};

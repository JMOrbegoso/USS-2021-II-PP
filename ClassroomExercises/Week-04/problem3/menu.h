#include <Windows.h>

#include <iostream>

#include "school.h";

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

    cout << endl;
    cout << "[0] Cerrar" << endl;

    cout << endl << "Por favor ingrese una de las opciones:" << endl;
    cin >> selectedOption;
    while (!(0 <= selectedOption && selectedOption <= 7)) {
      cout << "La opcion seleccionada fue inválida, por favor seleccione una "
              "opcion válida:"
           << endl;
      cin >> selectedOption;
    }
    return selectedOption;
  }

  void editSchoolName() {
    this->college->setName("");

    cout << "Datos del colegio editados correctamente" << endl;
    cout << endl;
  }

  void registerNewClassRoom() {
    this->college->getClassRooms()->registerNewClassRoom();

    cout << "Aula registrada correctamente" << endl;
    cout << endl;
  }

  void showClassRooms() {
    this->college->getClassRooms()->showClassRooms();
    cout << endl << endl;
  }

  void editClassRoom() {
    classRoom* auxClassRoom;

    auxClassRoom = this->college->getClassRooms()->pickClassRoom(
        "Seleccione el aula que desea editar");

    if (auxClassRoom == NULL) {
      cout << "Eligió una aula de clase no valida o no hay aulas registradas";
      cout << endl << endl;
      return;
    }

    auxClassRoom->setCode("");
    auxClassRoom->setTeacherFullName("");

    cout << "Datos del aula editados correctamente" << endl;
    cout << endl;
  }

  void registerNewStudent() {
    classRoom* auxClassRoom;

    auxClassRoom = this->college->getClassRooms()->pickClassRoom(
        "Seleccione el aula donde desea añadir el estudiante");

    auxClassRoom->getStudents()->registerNewStudent();

    cout << "Estudiante registrado correctamente" << endl;
    cout << endl;
  }

  void showStudents() {
    this->college->getClassRooms()->showStudents();

    cout << endl << endl;
  }

  void editStudent() {
    classRoom* auxClassRoom;
    student* auxStudent;

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

    auxStudent->setCode("");
    auxStudent->setFirstName("");
    auxStudent->setLastName("");
    auxStudent->setDni("");
    auxStudent->setAge(0);
    auxStudent->setGenre(true);

    cout << "Datos del estudiante editados correctamente" << endl;
    cout << endl;
  }

 public:
  menu(school* school) { this->college = school; }

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
        }
      }
    } while (!(selectedOption == 0));

    cout << "Gracias por usar la app, tenga un buen día!" << endl;
  }
};

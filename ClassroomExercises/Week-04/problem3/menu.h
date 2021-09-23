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
         << "Esta aplicaci�n tiene las siguientes opciones:" << endl
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
      cout << "La opcion seleccionada fue inv�lida, por favor seleccione una "
              "opcion v�lida:"
           << endl;
      cin >> selectedOption;
    }
    return selectedOption;
  }

  void editSchoolName() {
    string name = helpers::requestText(
        "Por favor ingrese el nuevo nombre de la escuela", 1);

    this->college->setName(name);

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
      cout << "Eligi� una aula de clase no valida o no hay aulas registradas";
      cout << endl << endl;
      return;
    }

    string code = helpers::requestText(
        "Por favor ingrese el nuevo codigo del aula", 3, 3);
    string teacherFullName = helpers::requestText(
        "Por favor ingrese el nombre del nuevo profesor responsable del aula",
        1);

    auxClassRoom->setCode(code);
    auxClassRoom->setTeacherFullName(teacherFullName);

    cout << "Datos del aula editados correctamente" << endl;
    cout << endl;
  }

  void registerNewStudent() {
    classRoom* auxClassRoom;

    auxClassRoom = this->college->getClassRooms()->pickClassRoom(
        "Seleccione el aula donde desea a�adir el estudiante");

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
      cout << "Eligi� una aula de clase no valida o no hay aulas registradas";
      cout << endl << endl;
      return;
    }

    auxStudent = auxClassRoom->getStudents()->pickStudent(
        "Seleccione el estudiante que desea editar");

    if (auxStudent == NULL) {
      cout << "Eligi� un estudiante no valido o no hay estudiantes registrados";
      cout << endl << endl;
      return;
    }

    string code =
        helpers::requestText("Ingrese el nuevo codigo del estudiante", 3, 3);
    string firstName =
        helpers::requestText("Ingrese los nuevo nombres del estudiante", 2);
    string lastName =
        helpers::requestText("Ingrese los nuevo apellidos del estudiante", 2);
    string dni =
        helpers::requestText("Ingrese el nuevo DNI del estudiante", 8, 8);
    unsigned short age = helpers::requestIntegerNumber(
        "Ingrese la nuevo edad del estudiante",
        "Por favor ingrese una edad igual o mayor a 3", 3);
    bool genre = helpers::requestGenre(
        "Por favor ingrese el nuevo genero del estudiante");

    auxStudent->setCode(code);
    auxStudent->setFirstName(firstName);
    auxStudent->setLastName(lastName);
    auxStudent->setDni(dni);
    auxStudent->setAge(age);
    auxStudent->setGenre(genre);

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

    cout << "Gracias por usar la app, tenga un buen d�a!" << endl;
  }
};

#include <iostream>
#include <string>

#include "classRoom.h";

using namespace std;

class classRoomsList {
 private:
  int capacity;
  int length;
  classRoom* head;

  void grow(int growIn) {
    classRoom* aux = new classRoom[this->length + growIn];

    for (int i = 0; i < this->length; i++) {
      *(aux + i) = *(this->head + i);
    }

    this->head = aux;
    this->capacity += growIn;
  }

 public:
  classRoomsList() {
    this->capacity = 0;
    this->length = 0;
    this->head = NULL;
  }

  int getCapacity() { return this->capacity; }
  void setCapacity(int value) { this->capacity = value; }

  int getLength() { return this->length; }
  void setLength(int value) { this->length = value; }

  classRoom* getHead() { return this->head; }
  void setHead(classRoom* value) { this->head = value; }

  void showClassRooms() {
    if (this->length == 0) {
      cout << "No hay ningún aula registrada" << endl;
      cout << "Primero registre al menos un aula" << endl;
      return;
    }

    for (int x = 0; x < this->length; x++) {
      (*(this->head + x)).showClassRoom(x + 1);
    }
  }

  student* findStudentByDni(string dni) {
    classRoom* auxClassRoom;
    student* auxStudent;

    if (this->length == 0) {
      return NULL;
    }

    for (int x = 0; x < this->length; x++) {
      auxClassRoom = this->head + x;

      for (int y = 0; y < auxClassRoom->getStudents()->getLength(); y++) {
        auxStudent = auxClassRoom->getStudents()->getHead() + y;

        if (auxStudent->getDni() == dni) return auxStudent;
      }
    }
  }

  void insert(classRoom* newClassRoom) {
    if (this->length == this->capacity) {
      this->grow(2);
    }

    *(this->head + this->length) = *newClassRoom;
    this->length++;
  }

  classRoom* pickClassRoom(string message) {
    classRoom* aux;
    int selectedOption;

    if (this->length == 0) {
      return NULL;
    }

    cout << endl
         << message << "." << endl
         << "Escoja entre las " << this->getLength()
         << " aulas siguientes:" << endl
         << endl;

    for (int x = 0; x < this->getLength(); x++) {
      aux = this->getHead() + x;

      cout << "[" << x + 1 << "]";
      cout << " - Aula: ";
      cout << aux->getCode();
      cout << " - Con el prof. ";
      cout << aux->getTeacherFullName();
      cout << endl;
    }

    cout << endl << "Introduzca la opción deseada:" << endl;
    cin >> selectedOption;

    while (!(1 <= selectedOption && selectedOption <= this->getLength())) {
      cout << "Por favor, introduzca un valor entre 1 y " << this->getLength()
           << "." << endl;
      fflush(stdin);
      cin >> selectedOption;
    }

    return (this->getHead() + selectedOption - 1);
  }
};

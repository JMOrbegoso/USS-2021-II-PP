#include "classRoomsListClass.h"

#include "helpersClass.h"

void classRoomsListClass::grow(int growIn) {
  classRoomClass* aux = new classRoomClass[this->length + growIn];

  for (int i = 0; i < this->length; i++) {
    *(aux + i) = *(this->head + i);
  }

  this->head = aux;
  this->capacity += growIn;
}

classRoomsListClass::~classRoomsListClass() {}
classRoomsListClass::classRoomsListClass() {
  this->capacity = 0;
  this->length = 0;
  this->head = NULL;
}

int classRoomsListClass::getCapacity() { return this->capacity; }
void classRoomsListClass::setCapacity(int value) { this->capacity = value; }

int classRoomsListClass::getLength() { return this->length; }
void classRoomsListClass::setLength(int value) { this->length = value; }

classRoomClass* classRoomsListClass::getHead() { return this->head; }
void classRoomsListClass::setHead(classRoomClass* value) { this->head = value; }

void classRoomsListClass::showClassRooms(int rowNumber) {
  if (this->length == 0) {
    cout << "No hay ningún aula registrada" << endl;
    cout << "Primero registre al menos un aula" << endl;
    return;
  }

  for (int x = 0; x < this->length; x++) {
    (*(this->head + x)).showClassRoom(rowNumber + x + 1, x + 1);
  }
}

studentClass* classRoomsListClass::findStudentByDni(string dni) {
  classRoomClass* auxClassRoom;
  studentClass* auxStudent;

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

void classRoomsListClass::insert(classRoomClass* newClassRoom) {
  if (this->length == this->capacity) {
    this->grow(2);
  }

  *(this->head + this->length) = *newClassRoom;
  this->length++;
}

classRoomClass* classRoomsListClass::pickClassRoom(string message) {
  classRoomClass* aux;
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

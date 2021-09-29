#include "gamesListClass.h"

#include "helpersClass.h"

void gamesListClass::grow(int growIn) {
  gameClass* aux = new gameClass[this->length + growIn];

  for (int i = 0; i < this->length; i++) {
    *(aux + i) = *(this->head + i);
  }

  this->head = aux;
  this->capacity += growIn;
}

gamesListClass::~gamesListClass() {}
gamesListClass::gamesListClass() {
  this->capacity = 0;
  this->length = 0;
  this->head = NULL;
}

int gamesListClass::getCapacity() { return this->capacity; }
void gamesListClass::setCapacity(int value) { this->capacity = value; }

int gamesListClass::getLength() { return this->length; }
void gamesListClass::setLength(int value) { this->length = value; }

gameClass* gamesListClass::getHead() { return this->head; }
void gamesListClass::setHead(gameClass* value) { this->head = value; }

void gamesListClass::showClassRooms(int rowNumber) {
  if (this->length == 0) {
    cout << "No hay ningún aula registrada" << endl;
    cout << "Primero registre al menos un aula" << endl;
    return;
  }

  for (int x = 0; x < this->length; x++) {
    (*(this->head + x)).show(rowNumber + x + 1, x + 1);
  }
}

clientClass* gamesListClass::findStudentByDni(string dni) {
  gameClass* auxClassRoom;
  clientClass* auxStudent;

  if (this->length == 0) {
    return NULL;
  }

  for (int x = 0; x < this->length; x++) {
    auxClassRoom = this->head + x;

    for (int y = 0; y < auxClassRoom->getClients()->getLength(); y++) {
      auxStudent = auxClassRoom->getClients()->getHead() + y;

      if (auxStudent->getDni() == dni) return auxStudent;
    }
  }
}

void gamesListClass::insert(gameClass* newClassRoom) {
  if (this->length == this->capacity) {
    this->grow(2);
  }

  *(this->head + this->length) = *newClassRoom;
  this->length++;
}

gameClass* gamesListClass::pickClassRoom(string message) {
  gameClass* aux;
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

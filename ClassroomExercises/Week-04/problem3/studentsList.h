#include <iostream>
#include <string>

#include "student.h";

using namespace std;

class studentsList {
 private:
  int capacity;
  int length;
  student* head;

  void grow(int growIn) {
    student* aux = new student[this->length + growIn];

    for (int i = 0; i < this->length; i++) {
      *(aux + i) = *(this->head + i);
    }

    this->head = aux;
    this->capacity += growIn;
  }

  void insert(student* newStudent) {
    if (this->length == this->capacity) {
      this->grow(2);
    }

    *(this->head + this->length) = *newStudent;
    this->length++;
  }

 public:
  studentsList() {
    this->capacity = 0;
    this->length = 0;
    this->head = NULL;
  }

  int getCapacity() { return this->capacity; }
  void setCapacity(int value) { this->capacity = value; }

  int getLength() { return this->length; }
  void setLength(int value) { this->length = value; }

  student* getHead() { return this->head; }
  void setHead(student* value) { this->head = value; }

  void showStudents() {
    student* auxStudent;
    int i = 1;

    if (this->length == 0) {
      cout << "No hay ningún estudiante registrado" << endl;
      cout << "Primero registre al menos un estudiante" << endl;
      return;
    }

    for (int x = 0; x < this->length; x++) {
      auxStudent = this->head + x;
      auxStudent->showStudent(i);
      i++;
    }
  }

  void registerNewStudent(string code, string firstName, string lastName,
                          string dni, unsigned short age, bool genre) {
    student* newStudent =
        new student(code, firstName, lastName, dni, age, genre);

    this->insert(newStudent);
  }

  student* pickStudent(string message) {
    student* aux;
    int selectedOption;

    if (this->length == 0) {
      return NULL;
    }

    cout << endl
         << message << "." << endl
         << "Escoja entre los " << this->getLength()
         << " estudiantes siguientes:" << endl
         << endl;

    for (int x = 0; x < this->getLength(); x++) {
      aux = this->getHead() + x;

      cout << "[" << x + 1 << "]";
      cout << " - ";
      cout << aux->getCode();
      cout << " - ";
      cout << aux->getLastName();
      cout << " ";
      cout << aux->getFirstName();
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

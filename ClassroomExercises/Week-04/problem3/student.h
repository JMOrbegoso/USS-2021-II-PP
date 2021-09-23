#include <iostream>
#include <string>

#include "helpers.h"

using namespace std;

class student {
 private:
  string code;
  string firstName;
  string lastName;
  string dni;
  unsigned short age;
  bool genre;

 public:
  student() {}
  student(string code, string firstName, string lastName, string dni,
          unsigned short age, bool genre) {
    this->code = code;
    this->firstName = firstName;
    this->lastName = lastName;
    this->dni = dni;
    this->age = age;
    this->genre = genre;
  }

  string getCode() { return this->code; }
  void setCode(string value) { this->code = value; }

  string getFirstName() { return this->firstName; }
  void setFirstName(string value) { this->firstName = value; }

  string getLastName() { return this->lastName; }
  void setLastName(string value) { this->lastName = value; }

  string getDni() { return this->dni; }
  void setDni(string value) { this->dni = value; }

  unsigned short getAge() { return this->age; }
  void setAge(unsigned short value) { this->age = value; }

  bool getGenre() { return this->genre; }
  string getGenreAsString() {
    if (this->genre)
      return "Masculino";
    else
      return "Femenino";
  }
  void setGenre(bool value) { this->genre = value; }

  void showStudent(int itemNumber) {
    cout << "# de Orden: " << itemNumber << endl;
    cout << "Codigo: " << this->getCode() << endl;
    cout << "Nombres: " << this->getFirstName() << endl;
    cout << "Apellidos: " << this->getLastName() << endl;
    cout << "DNI: " << this->getDni() << endl;
    cout << "Edad: " << this->getAge() << endl;
    cout << "Genero: " << this->getGenreAsString() << endl;
    cout << endl;
  }
};
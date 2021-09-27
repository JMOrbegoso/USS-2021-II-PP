#include "helpers.h";

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
  void setGenre(bool value) { this->genre = value; }
  string getGenreAsString() {
    if (this->genre)
      return "Masculino";
    else
      return "Femenino";
  }

  void showStudent(int rowNumber, int itemNumber) {
    helpers::gotoxy(0, rowNumber);
    cout << itemNumber;
    helpers::gotoxy(5, rowNumber);
    cout << this->getCode();
    helpers::gotoxy(15, rowNumber);
    cout << this->getFirstName();
    helpers::gotoxy(30, rowNumber);
    cout << this->getLastName();
    helpers::gotoxy(45, rowNumber);
    cout << this->getDni();
    helpers::gotoxy(55, rowNumber);
    cout << this->getAge();
    helpers::gotoxy(65, rowNumber);
    cout << this->getGenreAsString();
  }
};
// problem1.cpp : This file contains the 'main' function. Program execution
// begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class person {
 private:
  string code;
  string firstName;
  string lastName;
  string dni;
  string email;
  float salary;
  bool isAvailable;

  person(string code, string firstName, string lastName, string dni) {
    this->code = code;
    this->firstName = firstName;
    this->lastName = lastName;
    this->dni = dni;

    this->email = "";
    this->salary = 0;
    this->isAvailable = true;
  }

 public:
  string configuration;

  string getCode() { return this->code; }
  void setCode(string code) { this->code = code; }

  string getFirstName() { return this->firstName; }
  void setFirstName(string firstName) { this->firstName = firstName; }

  string getLastName() { return this->lastName; }
  void setLastName(string lastName) { this->lastName = lastName; }

  string getDni() { return this->dni; }
  void setDni(string dni) { this->dni = dni; }

  string getEmail() { return this->email; }
  void setEmail(string email) { this->email = email; }

  float getSalary() { return this->salary; }
  void setSalary(float salary) { this->salary = salary; }

  void disable() { this->isAvailable = false; }

  string getFullName() { return this->firstName + " " + this->lastName; }

  static person* build(string code, string firstName, string lastName,
                       string dni) {
    return new person(code, firstName, lastName, dni);
  }
};

int main() {
  person* julio = person::build("jr-1", "Julio", "Rojas", "10101010");

  julio->setEmail("julio@rojas.com");
  julio->setSalary(1000);

  cout << "FullName: " << julio->getFullName();
  cout << endl;
  cout << "Salary: " << julio->getSalary();
  cout << endl;
  system("pause");
}
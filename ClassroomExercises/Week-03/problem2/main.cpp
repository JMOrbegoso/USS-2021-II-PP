// problem1.cpp : This file contains the 'main' function. Program execution
// begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class subject {
 private:
  string code;
  string name;
  unsigned short creditsQuantity;
  bool status;

  subject(string code, string name) {
    this->code = code;
    this->name = name;

    this->creditsQuantity = 0;
    this->status = true;
  }

 public:
  string schoolName;

  string getCode() { return this->code; }
  void setCode(string code) { this->code = code; }

  string getName() { return this->name; }
  void setName(string name) { this->name = name; }

  float getCreditsQuantity() { return this->creditsQuantity; }
  void setCreditsQuantity(float creditsQuantity) {
    this->creditsQuantity = creditsQuantity;
  }

  bool getStatus() { return this->status; }
  void setStatus(bool status) { this->status = status; }

  string getStatusString() { return this->status ? "Active" : "Inactive"; }

  void disable() { this->status = false; }

  static subject* create(string code, string name) {
    return new subject(code, name);
  }
};

int main() {
  subject* math = subject::create("mt-1", "Math");
  math->setCreditsQuantity(4);
  math->schoolName = "USS";

  cout << "Subject: " << math->getName();
  cout << endl;
  cout << "Code: " << math->getCode();
  cout << endl;
  cout << "SchoolName: " << math->schoolName;
  cout << endl;
  cout << "Credits: " << math->getCreditsQuantity();
  cout << endl;
  cout << "Status: " << math->getStatusString();
  cout << endl;
  cout << endl;

  cout << "Disabling subject:";
  cout << endl;
  math->disable();
  cout << "New Status: " << math->getStatusString();
  cout << endl;
  cout << endl;

  system("pause");
}
#include <string>

using namespace std;

class studentClass {
 private:
  string code;
  string firstName;
  string lastName;
  string dni;
  unsigned short age;
  bool genre;

 public:
  ~studentClass() {}
  studentClass() {}
  studentClass(string code, string firstName, string lastName, string dni,
               unsigned short age, bool genre) {}

  string getCode();
  void setCode(string value);

  string getFirstName();
  void setFirstName(string value);

  string getLastName();
  void setLastName(string value);

  string getDni();
  void setDni(string value);

  unsigned short getAge();
  void setAge(unsigned short value);

  bool getGenre();
  void setGenre(bool value);
  string getGenreAsString();

  void showStudent(int rowNumber, int itemNumber);
};

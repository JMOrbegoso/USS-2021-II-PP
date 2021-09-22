#include <iostream>
#include <string>

using namespace std;

#define Max 3

class pet {
 private:
  string code;
  string name;
  string race;
  unsigned short age;
  string petOwner;

  static string requestText(string message, long unsigned int minLength) {
    string text;

    cout << message << " (Mínimo " << minLength << " caracteres)" << endl;

    do {
      fflush(stdin);
      getline(cin, text);
    } while (!(minLength <= text.length()));

    return text;
  }

  static int requestIntegerNumber(string requestMessage, string errorMessage,
                                  int min) {
    int integer;

    cout << requestMessage << endl;
    cin >> integer;

    while (!(min <= integer)) {
      cout << errorMessage << endl;
      fflush(stdin);
      cin >> integer;
    }

    return integer;
  }

 public:
  pet(){};
  pet(string code, string name, string race, unsigned short age,
      string petOwner) {
    this->code = code;
    this->name = name;
    this->race = race;
    this->age = age;
    this->petOwner = petOwner;
  }

  string getCode() { return this->code; }
  void setCode(string code) { this->code = code; }

  string getName() { return this->name; }
  void setName(string name) { this->name = name; }

  string getRace() { return this->race; }
  void setRace(string race) { this->race = race; }

  unsigned short getAge() { return this->age; }
  void setAge(unsigned short age) { this->age = age; }

  string getPetOwner() { return this->petOwner; }
  void setPetOwner(string petOwner) { this->petOwner = petOwner; }

  void showPet(int itemNumber) {
    cout << "Mascota #: " << itemNumber << endl;
    cout << "Codigo: " << this->code << endl;
    cout << "Nombre: " << this->name << endl;
    cout << "Raza: " << this->race << endl;
    cout << "Edad: " << this->age << endl;
    cout << "Dueño: " << this->petOwner << endl;
    cout << endl;
  }

  static pet* requestCreatePet() {
    string code = requestText("Ingrese el codigo de la mascota", 1);
    string name = requestText("Ingrese el nombre de la mascota", 1);
    string race = requestText("Ingrese la raza de la mascota", 1);
    unsigned short age = requestIntegerNumber(
        "Ingrese la edad de la mascota",
        "Por favor ingrese un numero igual o mayor a 1", 1);
    string petOwner =
        requestText("Ingrese el nombre del dueño de la mascota", 1);

    return new pet(code, name, race, age, petOwner);
  }
};

class petsList {
 private:
  int capacity;
  int length;
  pet* head;

  void grow(int growIn) {
    pet* aux = new pet[this->length + growIn];

    for (int i = 0; i < this->length; i++) {
      *(aux + i) = *(this->head + i);
    }

    this->head = aux;
    this->capacity += growIn;
  }

  string requestText(string message, long unsigned int minLength) {
    string text;

    cout << message << " (Mínimo " << minLength << " caracteres)" << endl;

    do {
      fflush(stdin);
      getline(cin, text);
    } while (!(minLength <= text.length()));

    return text;
  }

 public:
  petsList() {
    this->capacity = 0;
    this->length = 0;
    this->head = NULL;
  }

  int getCapacity() { return this->capacity; }
  void setCapacity(int max) { this->capacity = max; }

  int getLength() { return this->length; }
  void setLength(int lengh) { this->length = lengh; }

  pet* getPet() { return this->head; }
  void setPet(pet* pet) { this->head = pet; }

  void insert(pet* newPet) {
    if (this->length == this->capacity) {
      this->grow(Max);
    }

    *(this->head + this->length) = *newPet;
    this->length++;
  }

  void registerNewPet() {
    pet* newPet = pet::requestCreatePet();

    this->insert(newPet);

    cout << "Mascota registrada correctamente";
  }

  void showPets() {
    system("cls");

    cout << "Lista de mascotas:" << endl << endl;

    for (int x = 0; x < this->length; x++) {
      (*(this->head + x)).showPet(x + 1);
    }

    cout << endl << endl;
  }

  void findPets() {
    string nameToFind = this->requestText("Ingrese el texto a buscar:");
   


  
  }
};

#include <windows.h>

#include <iostream>
#include <string>

#define Max 3

using namespace std;

class alumno {
 private:
  string nameAlumno;
  string apellidoAlumno;
  string dni;
  unsigned short edad;
  bool genero;

 public:
  string getNameAlumno() const;
  void setNameAlumno(const string &value);
  string getApellidoAlumno() const;
  void setApellidoAlumno(const string &value);
  string getDni() const;
  void setDni(const string &value);
  unsigned short getEdad() const;
  void setEdad(unsigned short value);
  bool getGenero() const;
  void setGenero(bool value);

  void mostrarAlumno(int i);
};

string alumno::getApellidoAlumno() const { return apellidoAlumno; }

void alumno::setApellidoAlumno(const string &value) { apellidoAlumno = value; }

string alumno::getDni() const { return dni; }

void alumno::setDni(const string &value) { dni = value; }

unsigned short alumno::getEdad() const { return edad; }

void alumno::setEdad(unsigned short value) { edad = value; }

bool alumno::getGenero() const { return genero; }

void alumno::setGenero(bool value) { genero = value; }

string alumno::getNameAlumno() const { return nameAlumno; }

void alumno::setNameAlumno(const string &value) { nameAlumno = value; }

class listaAlumnos {
 private:
  int maxAlu;
  int nAlumnos;
  alumno *cabAlu;

 public:
  int getMaxAlu() const;
  void setMaxAlu(int value);
  int getNAlumnos() const;
  void setNAlumnos(int value);
  alumno *getCabAlu() const;
  void setCabAlu(alumno *value);
  void gotoxy(int x, int y);
  void crecer();
  void insertar(alumno *nuevoAlumno);
};

int listaAlumnos::getNAlumnos() const { return nAlumnos; }

void listaAlumnos::setNAlumnos(int value) { nAlumnos = value; }

alumno *listaAlumnos::getCabAlu() const { return cabAlu; }

void listaAlumnos::setCabAlu(alumno *value) { cabAlu = value; }

int listaAlumnos::getMaxAlu() const { return maxAlu; }

void listaAlumnos::setMaxAlu(int value) { maxAlu = value; }

void listaAlumnos::gotoxy(int x, int y) {
  HANDLE hcon;
  hcon = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD dwPos;
  dwPos.X = x;
  dwPos.Y = y;
  SetConsoleCursorPosition(hcon, dwPos);
}

///////////////////////

class aula {
 private:
  string codigoAula;
  unsigned short numAula;
  string profesorAcargo;
  listaAlumnos *lA;

 public:
  string getCodigoAula() const;
  void setCodigoAula(const string &value);
  unsigned short getNumAula() const;
  void setNumAula(unsigned short value);
  string getProfesorAcargo() const;
  void setProfesorAcargo(const string &value);

  listaAlumnos *getListAlumnos() { return this->lA; }
};

unsigned short aula::getNumAula() const { return numAula; }

void aula::setNumAula(unsigned short value) { numAula = value; }

string aula::getProfesorAcargo() const { return profesorAcargo; }

void aula::setProfesorAcargo(const string &value) { profesorAcargo = value; }

string aula::getCodigoAula() const { return codigoAula; }

void aula::setCodigoAula(const string &value) { codigoAula = value; }

////////////////////////////

class listaAulas {
 private:
  int max;
  int nAulas;
  aula *cabA;

 public:
  int getMax() const;
  void setMax(int value);
  int getNAulas() const;
  void setNAulas(int value);
  aula *getCabA() const;
  void setCabA(aula *value);
  void gotoxy(int x, int y);
  int menuOpciones();
  void buscarAlumno();
  string requestText(string message, long unsigned int minLength);
  aula *seleccionarAula(string mensaje);
  void crecer();
  void insertar(aula *nuevaAula);
  void registrarNuevoAlumno();
  bool containsText(string textBase, string textToFind);
};

int listaAulas::getNAulas() const { return nAulas; }

void listaAulas::setNAulas(int value) { nAulas = value; }

aula *listaAulas::getCabA() const { return cabA; }

void listaAulas::setCabA(aula *value) { cabA = value; }

int listaAulas::getMax() const { return max; }

void listaAulas::setMax(int value) { max = value; }

void listaAulas::gotoxy(int x, int y) {
  HANDLE hcon;
  hcon = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD dwPos;
  dwPos.X = x;
  dwPos.Y = y;
  SetConsoleCursorPosition(hcon, dwPos);
}

int listaAulas::menuOpciones() {
  unsigned short op1;
  system("cls");
  gotoxy(34, 4);
  cout << "====================";
  gotoxy(34, 5);
  cout << "| MENU DE OPCIONES |";
  gotoxy(34, 6);
  cout << "====================";
  gotoxy(30, 8);
  cout << "1. Registrar Aula";  // carlos
  gotoxy(30, 9);
  cout << "2. Mostrar Lista de Aulas";  // carlos
  gotoxy(30, 10);
  cout << "3. Buscar Aula";  // angel obed
  gotoxy(30, 11);
  cout << "4. Registrar Alumno en Aula";  // anegl torres
  gotoxy(30, 12);
  cout << "5. Mostar Alumnos con sus Aulas";  // dara
  gotoxy(30, 13);
  cout << "6. Buscar Alumno";  // manuel
  gotoxy(30, 14);
  cout << "7. Salir del Programa";  // manuel :)
  do {
    gotoxy(32, 16);
    cout << "Ingrese Opcion: ";
    cin >> op1;
  } while (!(op1 >= 1 && op1 <= 7));
  return op1;
}

///////////////////////////////

aula *listaAulas::seleccionarAula(string mensaje) {
  int selectedOption;

  cout << endl
       << mensaje << "." << endl
       << "Escoja entre las " << this->getNAulas()
       << " aulas siguientes:" << endl
       << endl;

  for (int x = 0; x < this->getNAulas(); x++) {
    cout << "[" << x + 1 << "]";
    cout << " - Aula: ";
    cout << (*(this->getCabA() + x)).getCodigoAula();
    cout << " - Con el prof. ";
    cout << (*(this->getCabA() + x)).getProfesorAcargo();
    cout << endl;
  }

  cout << endl << "Introduzca la opción deseada:" << endl;
  cin >> selectedOption;

  while (!(1 <= selectedOption && selectedOption <= this->getNAulas())) {
    cout << "Por favor, introduzca un valor entre 1 y " << this->getNAulas()
         << "." << endl;
    fflush(stdin);
    cin >> selectedOption;
  }

  return (this->getCabA() + selectedOption - 1);
}

void listaAulas::crecer() {}

void listaAulas::insertar(aula *nuevaAula) {}

void listaAulas::registrarNuevoAlumno() {
  aula *aulaSeleccionada;
  // Seleccionar el aula
  aulaSeleccionada = this->seleccionarAula("Seleccione el aula");

  aulaSeleccionada->getListAlumnos()->insertar
}

string listaAulas::requestText(string message, long unsigned int minLength) {
  string text;

  cout << message << " (Mínimo " << minLength << " caracteres)" << endl;

  do {
    fflush(stdin);
    getline(cin, text);
  } while (!(minLength <= text.length()));

  return text;
}

bool listaAulas::containsText(string textBase, string textToFind) {
  if (textBase.find(textToFind, 0) != string::npos) {
    return true;
  }
  return false;
}

void alumno::mostrarAlumno(int i) {}

void listaAulas::buscarAlumno() {
  string apellidoPorBuscar;
  bool alumnoEncontrado = false;
  aula *aulaAux;

  apellidoPorBuscar = this->requestText("Ingrese el texto a buscar", 3);

  system("cls");

  gotoxy(20, 5);
  cout << "Buscar un curso dictado en la institución" << endl;

  int i = 1;
  for (int x = 0; x < this->getNAulas(); x++) {
    aulaAux = (this->getCabA() + x);

    for (int y = 0; y < aulaAux->getListAlumnos()->getNAlumnos(); y++) {
      if (this->containsText(
              (aulaAux->getListAlumnos()->getCabAlu() + y)->getApellidoAlumno(),
              apellidoPorBuscar)) {
        alumnoEncontrado = true;
        (*(aulaAux->getListAlumnos()->getCabAlu() + y)).mostrarAlumno(i);
        i++;
      }
    }
  }

  if (!alumnoEncontrado) {
    gotoxy(20, 9);
    cout << "No se encontró ningun alumno con un nombre similar al buscado.";
  }

  cout << endl << endl;
}

int main() { return 0; }
#include <windows.h>

#include <iostream>
#include <string>

#define Max 3

using namespace std;

/////////////////////////

class alumno {
 private:
  string nameAlumno;
  string apellidoAlumno;
  string dni;
  unsigned short edad;
  bool genero;

 public:
  alumno();
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
  string leerTexto(string mensaje);
  unsigned short leerEntero(string mensaje);
  void gotoxy(int x, int y);
  void leerAlumno(int x);
};

alumno::alumno() { this->edad = 0; }

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

string alumno::leerTexto(string mensaje) {
  string texto;
  cout << mensaje;
  fflush(stdin);
  getline(cin, texto);
  return texto;
}

unsigned short alumno::leerEntero(string mensaje) {
  unsigned short x;
  do {
    cout << mensaje;
    cin >> x;
  } while (!(x > 0));
  return x;
}

void alumno::gotoxy(int x, int y) {
  HANDLE hcon;
  hcon = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD dwPos;
  dwPos.X = x;
  dwPos.Y = y;
  SetConsoleCursorPosition(hcon, dwPos);
}

///////////////////////////////

class listaAlumnos {
 private:
  int maxAlu;
  int nAlumnos;
  alumno *cabAlu;

 public:
  listaAlumnos();
  int getMaxAlu() const;
  void setMaxAlu(int value);
  int getNAlumnos() const;
  void setNAlumnos(int value);
  alumno *getCabAlu() const;
  void setCabAlu(alumno *value);
  void gotoxy(int x, int y);
  void crecerListaAlumno();
  void insertarAlumno(alumno *alu);
  void registrarEstudiante();
};

listaAlumnos::listaAlumnos() {
  this->cabAlu = NULL;
  this->maxAlu = 0;
  this->nAlumnos = 0;
}

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
  aula();
  string getCodigoAula() const;
  void setCodigoAula(const string &value);
  unsigned short getNumAula() const;
  void setNumAula(unsigned short value);
  string getProfesorAcargo() const;
  void setProfesorAcargo(const string &value);
  void gotoxy(int x, int y);
  string leerTexto(string mensaje);
  unsigned short leerEntero(string mensaje);
  listaAlumnos *getLA() const;
  void setLA(const listaAlumnos *value);
  void leerAula(int x);
};

aula::aula() {
  this->numAula = 0;
  this->lA = new listaAlumnos();
}

unsigned short aula::getNumAula() const { return numAula; }

void aula::setNumAula(unsigned short value) { numAula = value; }

string aula::getProfesorAcargo() const { return profesorAcargo; }

void aula::setProfesorAcargo(const string &value) { profesorAcargo = value; }

listaAlumnos *aula::getLA() const { return lA; }

string aula::getCodigoAula() const { return codigoAula; }

void aula::setCodigoAula(const string &value) { codigoAula = value; }

void aula::gotoxy(int x, int y) {
  HANDLE hcon;
  hcon = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD dwPos;
  dwPos.X = x;
  dwPos.Y = y;
  SetConsoleCursorPosition(hcon, dwPos);
}

string aula::leerTexto(string mensaje) {
  string texto;
  cout << mensaje;
  fflush(stdin);
  getline(cin, texto);
  return texto;
}

unsigned short aula::leerEntero(string mensaje) {
  unsigned short x;
  do {
    cout << mensaje;
    cin >> x;
  } while (!(x > 0));
  return x;
}

//////////////////////////////////

class listaAulas {
 private:
  int max;
  int nAulas;
  aula *cabA;

 public:
  listaAulas();
  int getMax() const;
  void setMax(int value);
  int getNAulas() const;
  void setNAulas(int value);
  aula *getCabA() const;
  void setCabA(aula *value);
  void gotoxy(int x, int y);
  string leerTexto(string mensaje);
  int menuOpciones();
  void crecerListaAula();
  void insertarAula(aula *aul);
  void registrarAula();
  void registrarAlumno();
  void mostrarAulas(aula &aul, int x);
  void listarAulas();
  void mostrarBusquedaAula(aula &aul);
  void buscarAula();
  aula *elegirAula();
  void mostrarEstudiantesAulas();
};

listaAulas::listaAulas() {
  this->max = 0;
  this->cabA = NULL;
  this->nAulas = 0;
}

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

string listaAulas::leerTexto(string mensaje) {
  string texto;
  cout << mensaje;
  fflush(stdin);
  getline(cin, texto);
  return texto;
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

/////////////////////////////////

void aula::leerAula(int x) {
  system("cls");
  gotoxy(35, 5);
  cout << "=======================";
  gotoxy(35, 6);
  cout << "| REGISTRO AULA N - " << x + 1 << " |";
  gotoxy(35, 7);
  cout << "=======================";
  gotoxy(28, 9);
  this->codigoAula = this->leerTexto("Ingrese Codigo del Aula: ");
  gotoxy(28, 10);
  this->numAula = this->leerEntero("Ingrese Numero del Aula: ");
  gotoxy(28, 11);
  this->profesorAcargo = this->leerTexto("Ingrese Profesor Acargo del Aula: ");
}

void listaAulas::crecerListaAula() {
  aula *aux = new aula[this->nAulas + Max];
  for (int i = 0; i < this->nAulas; i++) {
    *(aux + i) = *(this->cabA + i);
  }
  /*if (lE.cab != NULL){
      delete lE.cab;
  }*/
  this->cabA = aux;
  this->max += Max;
}

void listaAulas::insertarAula(aula *aul) {
  if (this->nAulas == this->max) {
    this->crecerListaAula();
  }
  *(this->cabA + this->nAulas) = *aul;
  this->nAulas++;
}

void listaAulas::registrarAula() {
  aula *aul = new aula();
  aul->leerAula(this->nAulas);
  this->insertarAula(aul);
}

void listaAulas::mostrarAulas(aula &aul, int x) {
  gotoxy(20, 5);
  cout << "==============================";
  gotoxy(20, 6);
  cout << "| LISTA DE AULAS REGISTRADAS |";
  gotoxy(20, 7);
  cout << "==============================";
  gotoxy(10, 9 + x);
  cout << "CODIGO: " << aul.getCodigoAula();
  gotoxy(30, 9 + x);
  cout << "NUMERO: " << aul.getNumAula();
  gotoxy(50, 9 + x);
  cout << "PROFESOR: " << aul.getProfesorAcargo() << endl << endl;
}

void listaAulas::listarAulas() {
  system("cls");
  if (this->nAulas > 0) {
    for (int x = 0; x < this->nAulas; x++) {
      mostrarAulas(*(this->cabA + x), x);
    }
    system("pause");
  } else {
    gotoxy(28, 5);
    cout << "*NO HAY REGISTROS DE AULAS*";
    Sleep(1500);
    return;
  }
}

void listaAulas::mostrarBusquedaAula(aula &aul) {
  system("cls");
  gotoxy(20, 5);
  cout << "===================";
  gotoxy(20, 6);
  cout << "| AULA ENCONTRADA |";
  gotoxy(20, 7);
  cout << "===================";
  gotoxy(10, 9);
  cout << "CODIGO: " << aul.getCodigoAula();
  gotoxy(30, 9);
  cout << "NUMERO: " << aul.getNumAula();
  gotoxy(50, 9);
  cout << "PROFESOR: " << aul.getProfesorAcargo() << endl << endl;
}

void listaAulas::buscarAula() {
  system("cls");
  if (this->nAulas > 0) {
    string codB;
    gotoxy(28, 5);
    codB = leerTexto("Ingrese Codigo del Aula a Buscar: ");
    for (int x = 0; x < this->nAulas; x++) {
      if (codB == (this->cabA + x)->getCodigoAula()) {
        mostrarBusquedaAula(*(this->cabA + x));
        break;
      }
    }
    system("pause");
  } else {
    gotoxy(28, 5);
    cout << "*NO HAY REGISTROS DE AULAS*";
    Sleep(1500);
    return;
  }
}

aula *listaAulas::elegirAula() {
  system("cls");
  int opc, x;
  gotoxy(17, 4);
  cout << "==================";
  gotoxy(17, 5);
  cout << "| LISTA DE AULAS |";
  gotoxy(17, 6);
  cout << "==================";
  for (x = 0; x < this->nAulas; x++) {
    gotoxy(15, 8 + x);
    cout << x + 1 << ".- CODIGO: " << (this->cabA + x)->getCodigoAula()
         << "   --   PROFESOR: " << (this->cabA + x)->getProfesorAcargo();
  }
  do {
    gotoxy(18, 8 + 2 * x);
    cout << "Ingrese Opcion: ";
    cin >> opc;
  } while (!(opc > 0 && opc <= this->nAulas));
  return (this->cabA + opc - 1);
}

void alumno::leerAlumno(int x) {
  system("cls");
  gotoxy(35, 5);
  cout << "=======================";
  gotoxy(35, 6);
  cout << "| REGISTRO ALUMNO N - " << x + 1 << " |";
  gotoxy(35, 7);
  cout << "=======================";
  gotoxy(28, 9);
  this->nameAlumno = this->leerTexto("Ingrese Nombre del Alumno: ");
  gotoxy(28, 10);
  this->apellidoAlumno = this->leerTexto("Ingrese Apellido del Alumno: ");
  gotoxy(28, 11);
  this->dni = this->leerTexto("Ingrese DNI del Alumno: ");
  gotoxy(28, 12);
  this->edad = this->leerEntero("Ingrese Edad del Alumno: ");
}

void listaAlumnos::crecerListaAlumno() {
  alumno *temp = new alumno[this->nAlumnos + Max];
  for (int i = 0; i < this->nAlumnos; i++) {
    *(temp + i) = *(this->cabAlu + i);
  }
  /*if (lE.cab != NULL){
      delete lE.cab;
  }*/
  this->cabAlu = temp;
  this->maxAlu += Max;
}

void listaAlumnos::insertarAlumno(alumno *alu) {
  if (this->nAlumnos == this->maxAlu) {
    this->crecerListaAlumno();
  }
  *(this->cabAlu + this->nAlumnos) = *alu;
  this->nAlumnos++;
}

void listaAlumnos::registrarEstudiante() {
  alumno *alu = new alumno();
  alu->leerAlumno(this->nAlumnos);
  this->insertarAlumno(alu);
}

void listaAulas::registrarAlumno() {
  system("cls");
  if (this->nAulas > 0) {
    aula *aux = new aula();
    aux = elegirAula();
    if (aux != NULL) {
      aux->getLA()->registrarEstudiante();
    }
  } else {
    gotoxy(28, 5);
    cout << "NO HAY REGISTROS DE AULAS";
    Sleep(1500);
    return;
  }
}

void listaAulas::mostrarEstudiantesAulas() {}

int main() {
  listaAulas *lA = new listaAulas();
  int opc;
  do {
    opc = lA->menuOpciones();
    switch (opc) {
      case 1:
        lA->registrarAula();
        break;
      case 2:
        lA->listarAulas();
        break;
      case 3:
        lA->buscarAula();
        break;
      case 4:
        lA->registrarAlumno();
        break;
      case 5:
        lA->mostrarEstudiantesAulas();
        break;
      case 6:
        break;
    }
  } while (!(opc == 7));
  return 0;
}

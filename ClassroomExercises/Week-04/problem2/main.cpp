#include <windows.h>

#include <iostream>
#include <string>

#define incre 2

using namespace std;

class alumnoAl {
 private:
  string codigo;
  string nombre;
  string apellido;
  unsigned short edad;

 public:
  alumnoAl();
  alumnoAl(string cod, string nomb, string apelli, unsigned short eda);

  string getCodigo() const;
  void setCodigo(const string &value);
  string getNombre() const;
  void setNombre(const string &value);
  string getApellido() const;
  void setApellido(const string &value);
  unsigned short getEdad() const;
  void setEdad(unsigned short value);
  void gotoxy(int x, int y);
  unsigned short leerEdad(string mensaje);
  string leerTexto(string mensaje);
  void leerAl();
};

alumnoAl::alumnoAl() {}

alumnoAl::alumnoAl(string cod, string nomb, string apelli, unsigned short eda) {
  this->codigo = cod;
  this->nombre = nomb;
  this->apellido = apelli;
  this->edad = eda;
}

string alumnoAl::getCodigo() const { return codigo; }
void alumnoAl::setCodigo(const string &value) { codigo = value; }

string alumnoAl::getNombre() const { return nombre; }
void alumnoAl::setNombre(const string &value) { nombre = value; }

string alumnoAl::getApellido() const { return apellido; }
void alumnoAl::setApellido(const string &value) { apellido = value; }

unsigned short alumnoAl::getEdad() const { return edad; }
void alumnoAl::setEdad(unsigned short value) { edad = value; }

void alumnoAl::gotoxy(int x, int y) {
  HANDLE hcon;
  hcon = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD dwPos;
  dwPos.X = x;
  dwPos.Y = y;
  SetConsoleCursorPosition(hcon, dwPos);
}

unsigned short alumnoAl::leerEdad(string mensaje) {
  unsigned short x;
  do {
    cout << mensaje;
    cin >> x;
  } while (!(x > 17));
  return x;
}

string alumnoAl::leerTexto(string mensaje) {
  string texto;
  cout << mensaje;
  fflush(stdin);
  getline(cin, texto);
  return texto;
}

void alumnoAl::leerAl() {
  system("cls");
  gotoxy(35, 2);
  cout << "********************";
  gotoxy(35, 3);
  cout << "*REGISTRAR ALUMNO*";
  gotoxy(35, 4);
  cout << "********************";
  gotoxy(30, 5);
  codigo = this->leerTexto("Ingrese el Codigo del Alumno: ");
  gotoxy(30, 6);
  nombre = this->leerTexto("Ingrese el Nombre del Alumno: ");
  gotoxy(30, 7);
  apellido = this->leerTexto("Ingrese el Apellido del Alumno: ");
  gotoxy(30, 7);
  edad = this->leerEdad("Ingrese el Edad del Alumno: ");
}

// Separador :) //

class listaAl {
 private:
  int max;
  int cantAl;
  alumnoAl *cab;

 public:
  listaAl();

  int getMax() const;
  void setMax(int value);
  int getCantAl() const;
  void setCantAl(int value);
  alumnoAl *getCab() const;
  void setCab(alumnoAl *value);
  string leerTexto(string mensaje);
  void gotoxy(int x, int y);
  void registrarAlumno();
  void insertarAl(alumnoAl *aL);
  void crecerAl();
};

listaAl::listaAl() {
  this->cab = NULL;
  this->cantAl = 0;
  this->max = 0;
}

int listaAl::getMax() const { return max; }
void listaAl::setMax(int value) { max = value; }

int listaAl::getCantAl() const { return cantAl; }
void listaAl::setCantAl(int value) { cantAl = value; }

alumnoAl *listaAl::getCab() const { return cab; }
void listaAl::setCab(alumnoAl *value) { cab = value; }

string listaAl::leerTexto(string mensaje) {
  string texto;
  cout << mensaje;
  fflush(stdin);
  getline(cin, texto);
  return texto;
}

void listaAl::gotoxy(int x, int y) {
  HANDLE hcon;
  hcon = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD dwPos;
  dwPos.X = x;
  dwPos.Y = y;
  SetConsoleCursorPosition(hcon, dwPos);
}

void listaAl::crecerAl() {
  alumnoAl *aux = new alumnoAl[this->cantAl + incre];
  for (int i = 0; i < this->cantAl; i++) {
    *(aux + i) = *(this->cab + i);
  }
  if (this->cab != NULL) {
    delete this->cab;
  }
  this->cab = aux;
  this->max += incre;
}

void listaAl::insertarAl(alumnoAl *aL) {
  if (this->cantAl == this->max) {
    this->crecerAl();
  }
  *(this->cab + this->cantAl) = *aL;
  this->cantAl++;
}

void listaAl::registrarAlumno() {
  alumnoAl *aL = new alumnoAl();
  aL->leerAl();
  this->insertarAl(aL);
}

// Separador :) //

class aulaAu {
 private:
  string codigo;
  string nombre;
  unsigned short numero;
  listaAl lAlu;

 public:
  aulaAu();
  aulaAu(string cod, string nomb, unsigned short nume);

  string getCodigo() const;
  void setCodigo(const string &value);
  string getNombre() const;
  void setNombre(const string &value);
  unsigned short getNumero() const;
  void setNumero(unsigned short value);
  void gotoxy(int x, int y);
  unsigned short leerEdad(string mensaje);
  string leerTexto(string mensaje);
  void leerAu();
  listaAl getLAlu() const;
  void setLAlu(const listaAl &value);
};

aulaAu::aulaAu() {}

aulaAu::aulaAu(string cod, string nomb, unsigned short nume) {
  this->codigo = cod;
  this->nombre = nomb;
  this->numero = nume;
}

string aulaAu::getCodigo() const { return codigo; }
void aulaAu::setCodigo(const string &value) { codigo = value; }

string aulaAu::getNombre() const { return nombre; }
void aulaAu::setNombre(const string &value) { nombre = value; }

unsigned short aulaAu::getNumero() const { return numero; }
void aulaAu::setNumero(unsigned short value) { numero = value; }

listaAl aulaAu::getLAlu() const { return lAlu; }
void aulaAu::setLAlu(const listaAl &value) { lAlu = value; }

void aulaAu::gotoxy(int x, int y) {
  HANDLE hcon;
  hcon = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD dwPos;
  dwPos.X = x;
  dwPos.Y = y;
  SetConsoleCursorPosition(hcon, dwPos);
}

unsigned short aulaAu::leerEdad(string mensaje) {
  unsigned short x;
  do {
    cout << mensaje;
    cin >> x;
  } while (!(x > 0));
  return x;
}

string aulaAu::leerTexto(string mensaje) {
  string texto;
  cout << mensaje;
  fflush(stdin);
  getline(cin, texto);
  return texto;
}

void aulaAu::leerAu() {
  system("cls");
  gotoxy(35, 2);
  cout << "*****************";
  gotoxy(35, 3);
  cout << "*REGISTRAR AULA*";
  gotoxy(35, 4);
  cout << "*****************";
  gotoxy(30, 5);
  codigo = this->leerTexto("Ingrese el Codigo del Aula: ");
  gotoxy(30, 6);
  nombre = this->leerTexto("Ingrese el Nombre del Aula: ");
  gotoxy(30, 7);
  numero = this->leerEdad("Ingrese el Numero del Aula: ");
}

// Separador :) //

class listaAu {
 private:
  int max;
  int cantAu;
  aulaAu *cab;

 public:
  listaAu();

  int getMax() const;
  void setMax(int value);
  int getCantAu() const;
  void setCantAu(int value);
  aulaAu *getCab() const;
  void setCab(aulaAu *value);
  int menu();
  string leerTexto(string mensaje);
  void gotoxy(int x, int y);
  void registrarAu();
  void insertarAu(aulaAu *aU);
  void crecerAu();
  void mostrarListaAulas();
  void mostrarListaAu(aulaAu &aU, int x);
  void encabezadoListaAu();
  void buscarAu();
  void encabezadoB();
  void mostrarB(aulaAu &aU);
  void registrarAl();
  aulaAu *elegirAu();
  void encabezadoTituloE();
  void mostrarListaAl();
  void mostrarAl(aulaAu &aU, int x);
};

listaAu::listaAu() {
  this->cab = NULL;
  this->cantAu = 0;
  this->max = 0;
}

int listaAu::getMax() const { return max; }
void listaAu::setMax(int value) { max = value; }

int listaAu::getCantAu() const { return cantAu; }
void listaAu::setCantAu(int value) { cantAu = value; }

aulaAu *listaAu::getCab() const { return cab; }
void listaAu::setCab(aulaAu *value) { cab = value; }

void listaAu::encabezadoTituloE() {
  gotoxy(35, 2);
  cout << "*****************************";
  gotoxy(35, 3);
  cout << "*ELEGIR AULA PARA INSCRIBIRTE*";
  gotoxy(35, 4);
  cout << "*****************************";
}

aulaAu *listaAu::elegirAu() {
  int opc;
  int x;
  for (x = 0; x < this->cantAu; x++) {
    encabezadoTituloE();
    gotoxy(30, 5 + x);
    cout << x + 1 << ". " << (this->cab + x)->getCodigo() << " - "
         << (this->cab + x)->getNombre();
  }
  do {
    gotoxy(30, 6 + x);
    cout << "Elegir Aula: ";
    cin >> opc;
  } while (!(opc > 0 && opc <= this->cantAu));
  return (this->cab + opc - 1);
}

void listaAu::registrarAl() {
  system("cls");
  if (this->cantAu > 0) {
    aulaAu *aU = new aulaAu();
    aU = elegirAu();
    if (aU != NULL) {
      aU->getLAlu().registrarAlumno();
      /*
       * esto me dijo que haga el profesor
       * alumno *aux = new alumno();
       * aux->leerAl();
       * this->insertarAu(aux);
       */
    }
  } else {
    system("cls");
    gotoxy(30, 5);
    cout << "NO HAY REGISTRO DE AULAS - OPCION 1 " << endl << endl;
  }
  system("pause");
}

void listaAu::mostrarB(aulaAu &aU) {
  system("cls");
  gotoxy(35, 3);
  cout << "*****************************";
  gotoxy(35, 4);
  cout << "*RESULTADOS DE LA BUSQUEDA*";
  gotoxy(35, 5);
  cout << "*****************************";
  gotoxy(30, 6);
  cout << "CODIGO: " << aU.getCodigo();
  gotoxy(30, 7);
  cout << "NOMBRE: " << aU.getNombre();
  gotoxy(30, 8);
  cout << "NUMERO: " << aU.getNumero() << endl << endl;
  system("pause");
}

void listaAu::encabezadoB() {
  gotoxy(35, 2);
  cout << "***************************";
  gotoxy(35, 3);
  cout << "*BUSCAR AULA REGISTRADAS*";
  gotoxy(35, 4);
  cout << "***************************";
}

void listaAu::buscarAu() {
  system("cls");
  if (this->cantAu > 0) {
    string buscar;
    encabezadoB();
    gotoxy(30, 5);
    buscar = this->leerTexto("Ingrese el Codigo del Aula: ");
    for (int i = 0; i < this->cantAu; i++) {
      if ((this->cab + i)->getCodigo() == buscar) {
        mostrarB(*(this->cab + i));
        break;
      } else {
        system("cls");
        gotoxy(30, 5);
        cout << "NO SE ENCONTRO EL AULA..." << endl << endl;
        system("pause");
      }
    }
  } else {
    system("cls");
    gotoxy(30, 5);
    cout << "NO HAY REGISTRO DE AULAS - OPCION 1 " << endl << endl;
    system("pause");
  }
}

void listaAu::encabezadoListaAu() {
  gotoxy(35, 3);
  cout << "****************************";
  gotoxy(35, 4);
  cout << "*LISTA DE AULAS REGISTRADAS*";
  gotoxy(35, 5);
  cout << "****************************";
  gotoxy(1, 6);
  cout << "CODIGO";
  gotoxy(20, 6);
  cout << "NOMBRE";
  gotoxy(39, 6);
  cout << "NUMERO";
}

void listaAu::mostrarListaAu(aulaAu &aU, int x) {
  encabezadoListaAu();
  gotoxy(1, 7 + x);
  cout << aU.getCodigo();
  gotoxy(20, 7 + x);
  cout << aU.getNombre();
  gotoxy(39, 7 + x);
  cout << aU.getNumero() << endl << endl;
}

void listaAu::mostrarListaAulas() {
  system("cls");
  if (this->cantAu > 0) {
    for (int x = 0; x < this->cantAu; x++) {
      mostrarListaAu(*(this->cab + x), x);
    }
  } else {
    system("cls");
    gotoxy(30, 5);
    cout << "NO HAY REGISTRO DE AULAS - OPCION 1 " << endl << endl;
  }
  system("pause");
}

void listaAu::crecerAu() {
  aulaAu *aux = new aulaAu[this->cantAu + incre];
  for (int i = 0; i < this->cantAu; i++) {
    *(aux + i) = *(this->cab + i);
  }
  if (this->cab != NULL) {
    delete this->cab;
  }
  this->cab = aux;
  this->max += incre;
}

void listaAu::insertarAu(aulaAu *aU) {
  if (this->cantAu == this->max) {
    this->crecerAu();
  }
  *(this->cab + this->cantAu) = *aU;
  this->cantAu++;
}

void listaAu::registrarAu() {
  aulaAu *aU = new aulaAu();
  aU->leerAu();
  this->insertarAu(aU);
}

void listaAu::mostrarAl(aulaAu &aU, int x) {
  system("cls");
  alumnoAl *aux;
  gotoxy(1, 7 + x);
  cout << "CODIGO: " << aU.getCodigo() << " - "
       << "SECCION: " << aU.getNombre() << endl
       << endl;
  aux = aU.getLAlu().getCab();
  while (aux != NULL) {
    gotoxy(1, 8 + x);
    cout << "CODIGO: " << aux->getCodigo();
  }
}

void listaAu::mostrarListaAl() {
  system("cls");
  if (this->cantAu > 0) {
    for (int x = 0; x < this->cantAu; x++) {
      mostrarAl(*(this->cab + x), x);
    }
  } else {
    system("cls");
    gotoxy(30, 5);
    cout << "NO HAY REGISTRO DE AULAS - OPCION 1 " << endl << endl;
  }
  system("pause");
}

// Separador :) //

int listaAu::menu() {
  unsigned short opc;
  system("cls");
  gotoxy(35, 4);
  cout << "***************************";
  gotoxy(35, 5);
  cout << "*COLEGIO NO ME DESAPRUEBES*";
  gotoxy(35, 6);
  cout << "***************************";
  gotoxy(30, 7);
  cout << "1. Registrar Aula";
  gotoxy(30, 8);
  cout << "2. Mostrar Lista de Aulas";
  gotoxy(30, 9);
  cout << "3. Buscar Aula";
  gotoxy(30, 10);
  cout << "4. Registrar Alumno en Aula";
  gotoxy(30, 11);
  cout << "5. Mostar Alumnos con sus Aulas";
  gotoxy(30, 12);
  cout << "6. Buscar Alumno";
  gotoxy(30, 13);
  cout << "7. Salir ";
  do {
    gotoxy(31, 14);
    cout << "Ingrese Opcion: ";
    cin >> opc;
  } while (!(opc >= 1 && opc <= 7));
  return opc;
}

string listaAu::leerTexto(string mensaje) {
  string texto;
  cout << mensaje;
  fflush(stdin);
  getline(cin, texto);
  return texto;
}

void listaAu::gotoxy(int x, int y) {
  HANDLE hcon;
  hcon = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD dwPos;
  dwPos.X = x;
  dwPos.Y = y;
  SetConsoleCursorPosition(hcon, dwPos);
}

int main() {
  listaAu *lAu = new listaAu();
  unsigned short opc;
  do {
    opc = lAu->menu();
    switch (opc) {
      case 1:
        lAu->registrarAu();
        break;
      case 2:
        lAu->mostrarListaAulas();
        break;
      case 3:
        lAu->buscarAu();
        break;
      case 4:
        lAu->registrarAl();
        break;
      case 5:
        lAu->mostrarListaAl();
        break;
      case 6:  // lAu->buscarAl();
        break;
    }
  } while (!(opc == 6));
  return 0;
}

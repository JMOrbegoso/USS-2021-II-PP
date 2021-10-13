#include <iostream>
#ifndef LIBROL_H
#define LIBROL_H

using namespace std;

class libroL {
 private:
  static int contador;
  string codigo;
  string titulo;
  string autor;
  string fecha;

 public:
  libroL();
  ~libroL();

  string getCodigo() const;
  void setCodigo(const string &value);
  string getTitulo() const;
  void setTitulo(const string &value);
  string getAutor() const;
  void setAutor(const string &value);
  string getFecha() const;
  void setFecha(const string &value);
  void leerLibro();
  float leerFloat(string mensaje);
  int leerEntero(string mensaje);
  string leerTexto(string mensaje);
};

#endif  // LIBROL_H

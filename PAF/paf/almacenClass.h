#include <string>

using namespace std;

class almacenClass {
 private:
  string codigo;
  string encargado;
  string direccion;
  bool estado;

 public:
  ~almacenClass();
  almacenClass();

  string getCodigo();
  void setCodigo(string value);

  string getEncargado();
  void setEncargado(string value);

  string getDireccion();
  void setDireccion(string value);

  bool getEstado();
  void setEstado(bool value);

  void mostrar(int fila, int numeroDeOrden);
};

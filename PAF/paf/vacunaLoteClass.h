#include <string>

using namespace std;

class vacunaLoteClass {
 private:
  string codigo;
  string nombre;
  unsigned short numeroDeVacunas;
  string fechaCaducidad;
  bool estado;

 public:
  ~vacunaLoteClass();
  vacunaLoteClass();

  string getCodigo();
  void setCodigo(string value);

  string getNombre();
  void setNombre(string value);

  unsigned short getNumeroDeVacunas();
  void setNumeroDeVacunas(unsigned short value);

  string getFechaCaducidad();
  void setFechaCaducidad(string value);

  bool getEstado();
  void setEstado(bool value);

  void mostrar(int fila, int numeroDeOrden);
};

#include <string>

#include "almacenClass.h"

using namespace std;

class almacenesListaClass {
 private:
  almacenClass* cab;
  int max;
  int cantidad;
  void crecer(int crecerEn);

 public:
  ~almacenesListaClass();
  almacenesListaClass();

  int getMax();
  void setMax(int value);

  int getCantidad();
  void setCantidad(int value);

  almacenClass* getCab();
  void setCab(almacenClass* value);

  void mostrar(int fila);

  void insertar(almacenClass* nuevoAlmacen);

  almacenClass* elegirAlmacen(string mensaje);
};

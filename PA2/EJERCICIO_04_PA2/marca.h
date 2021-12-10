#ifndef MARCA_H
#define MARCA_H
#include <licorclass.h>
#include <listalicores.h>

class marca : public licorClass{
private:
    static int contador;
    string codigo;
    string pais;
    string fechaIngreso;
    listaLicores *licores;
public:
    marca();
    marca(string nombre, string descripcion, string pais, string fecha);
    string getPais() const;
    void setPais(const string &value);
    string getFechaIngreso() const;
    void setFechaIngreso(const string &value);
    listaLicores *getLicores() const;
    void setLicores(listaLicores *value);
    void leerMarca(int x);
    string getCodigo() const;
    void setCodigo(const string &value);
};

#endif // MARCA_H

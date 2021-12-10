#ifndef COMPRA_H
#define COMPRA_H
#include <listalicorescomprados.h>


class compra{
private:
    string codigo;
    string dni;
    string nombre;
    string apellido;
    listaLicoresComprados *licores;
public:
    compra();
    string getCodigo() const;
    void setCodigo(const string &value);
    string getDni() const;
    void setDni(const string &value);
    string getNombre() const;
    void setNombre(const string &value);
    string getApellido() const;
    void setApellido(const string &value);
    listaLicoresComprados *getLicores() const;
    void setLicores(listaLicoresComprados *value);
};

#endif // COMPRA_H

#include <iostream>
#ifndef VACUNALOTECLASS_H
#define VACUNALOTECLASS_H

using namespace std;

class vacunaLoteClass{
private:
    static int codigo;
    string nombre;
    unsigned short numeroDeVacunas;
    string fechaCaducidad;
    bool estado;
public:
    vacunaLoteClass();
    ~vacunaLoteClass();
    string getNombre() const;
    void setNombre(const string &value);
    unsigned short getNumeroDeVacunas() const;
    void setNumeroDeVacunas(unsigned short value);
    string getFechaCaducidad() const;
    void setFechaCaducidad(const string &value);
    bool getEstado() const;
    void setEstado(bool value);
};

#endif // VACUNALOTECLASS_H

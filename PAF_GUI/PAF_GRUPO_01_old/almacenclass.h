#ifndef ALMACENCLASS_H
#define ALMACENCLASS_H
#include <vacunasloteslistaclass.h>

class almacenClass{
private:
    string codigo;
    string encargado;
    string direccion;
    bool estado;
    vacunasLotesListaClass *lotesDeVacunas;
public:
    almacenClass();
    ~almacenClass();
    string getCodigo() const;
    void setCodigo(const string &value);
    string getEncargado() const;
    void setEncargado(const string &value);
    string getDireccion() const;
    void setDireccion(const string &value);
    bool getEstado() const;
    void setEstado(bool value);
    vacunasLotesListaClass *getLotesDeVacunas() const;
    void setLotesDeVacunas(vacunasLotesListaClass *value);
};

#endif // ALMACENCLASS_H

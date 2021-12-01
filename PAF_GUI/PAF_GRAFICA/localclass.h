#ifndef LOCALCLASS_H
#define LOCALCLASS_H
#include <listapersonalclass.h>
#include <listapacientesclass.h>
#include <listalotesvacunaclass.h>

class localClass{
private:
    static int contador;
    listaPersonalClass *personales;
    listaPacientesClass *pacientes;
    listaLotesVacunaClass *lotes;
    string codigo;
    string nombreLocal;
    string direccionLocal;
    bool estadoLocal;
public:
    localClass(string nombre, string direccion, bool estado);
    localClass();
    ~localClass();

    listaPersonalClass *getPersonales() const;
    void setPersonales(listaPersonalClass *value);

    listaPacientesClass *getPacientes() const;
    void setPacientes(listaPacientesClass *value);

    listaLotesVacunaClass *getLotes() const;
    void setLotes(listaLotesVacunaClass *value);

    string getDireccionLocal() const;
    void setDireccionLocal(const string &value);

    bool getEstadoLocal() const;
    void setEstadoLocal(bool value);

    string getNombreLocal() const;
    void setNombreLocal(const string &value);

    string getCodigoLocal();
};

#endif // LOCALCLASS_H

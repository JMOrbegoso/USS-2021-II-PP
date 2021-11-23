#ifndef ALMACENGENERALCLASS_H
#define ALMACENGENERALCLASS_H
#include <listalotesvacunageneralclass.h>

class almacenGeneralClass{
private:
    string codigo;
    string encargado;
    string direccion;
    bool estado;
    listaLotesVacunaGeneralClass *lotes;
public:
    almacenGeneralClass();
    ~almacenGeneralClass();
    string getCodigo() const;
    void setCodigo(const string &value);
    string getEncargado() const;
    void setEncargado(const string &value);
    string getDireccion() const;
    void setDireccion(const string &value);
    bool getEstado() const;
    void setEstado(bool value);
    listaLotesVacunaGeneralClass *getLotes() const;
    void setLotes(listaLotesVacunaGeneralClass *value);
};

#endif // ALMACENGENERALCLASS_H

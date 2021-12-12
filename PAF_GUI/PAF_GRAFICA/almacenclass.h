#ifndef ALMACENCLASS_H
#define ALMACENCLASS_H
#include <listalotesvacunageneralclass.h>

class almacenClass{
private:
    string codigo;
    string encargado;
    string direccion;
    bool estado;
    listaLotesVacunaGeneralClass *lotes;
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
    listaLotesVacunaGeneralClass *getLotes() const;
    void setLotes(listaLotesVacunaGeneralClass *value);
};

#endif // ALMACENCLASS_H

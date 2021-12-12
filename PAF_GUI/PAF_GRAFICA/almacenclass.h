#ifndef ALMACENCLASS_H
#define ALMACENCLASS_H
#include <listalotesvacunaclass.h>

class almacenClass{
private:
    string codigo;
    string encargado;
    string direccion;
    bool estado;
    listaLotesVacunaClass *lotes;
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
    listaLotesVacunaClass *getLotes() const;
    void setLotes(listaLotesVacunaClass *value);
};

#endif // ALMACENCLASS_H

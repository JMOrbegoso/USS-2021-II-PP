#ifndef PACIENTECLASS_H
#define PACIENTECLASS_H
#include <personaclass.h>
#include <atendidoclass.h>

class pacienteClass : public personaClass{
private:
    static int contador;
    string codigo;
    string enfermedad;
    string cualEnfermedad;
    atendidoClass *atendido;
public:
    pacienteClass();
    pacienteClass(string dni,string nombre,string apellido,int edad,string telefono,string direccion,string enfermedad, string cual);
    ~pacienteClass();
    string getEnfermedad() const;
    void setEnfermedad(const string &value);
    string getCualEnfermedad() const;
    void setCualEnfermedad(const string &value);
    string getCodigo();
    atendidoClass *getAtendido() const;
    void setAtendido(atendidoClass *value);
};

#endif // PACIENTECLASS_H

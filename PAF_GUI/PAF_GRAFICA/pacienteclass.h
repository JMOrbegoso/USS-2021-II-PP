#ifndef PACIENTECLASS_H
#define PACIENTECLASS_H
#include <personaclass.h>

class pacienteClass : public personaClass{
private:
    static int contador;
    string codigo;
    string enfermedad;
    string fecha;
    string cualEnfermedad;
public:
    pacienteClass();
    pacienteClass(string dni,string nombre,string apellido,int edad,string telefono,string direccion,string enfermedad, string cual);
    ~pacienteClass();
    string getEnfermedad() const;
    void setEnfermedad(const string &value);
    string getFecha() const;
    void setFecha(const string &value);
    string getCualEnfermedad() const;
    void setCualEnfermedad(const string &value);
    string getCodigo();
};

#endif // PACIENTECLASS_H

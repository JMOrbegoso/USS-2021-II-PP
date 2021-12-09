#ifndef PACIENTECLASS_H
#define PACIENTECLASS_H
#include <personaclass.h>
#include <atencionclass.h>

class pacienteClass : public personaClass{
private:
    static int contador;
    string codigo;
    string enfermedad;
    atencionClass *atencion;
public:
    pacienteClass();
    pacienteClass(string dni, string nombre, string apellido, int edad, string telefono, string direccion, string enfermedad);
    pacienteClass(string dni, string nombre, string apellido, int edad, string telefono, string direccion);
    ~pacienteClass();
    string getEnfermedad() const;
    void setEnfermedad(const string &value);
    string getCodigo();
    atencionClass *getAtencion() const;
    void setAtencion(atencionClass *value);
};

#endif // PACIENTECLASS_H

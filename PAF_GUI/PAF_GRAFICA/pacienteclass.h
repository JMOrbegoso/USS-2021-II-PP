#ifndef PACIENTECLASS_H
#define PACIENTECLASS_H
#include <personaclass.h>

class pacienteClass : public personaClass{
private:
    string enfermedad;
    string fecha;
    string cualEnfermedad;
public:
    pacienteClass();
    ~pacienteClass();
    string getEnfermedad() const;
    void setEnfermedad(const string &value);
    string getFecha() const;
    void setFecha(const string &value);
    string getCualEnfermedad() const;
    void setCualEnfermedad(const string &value);
};

#endif // PACIENTECLASS_H

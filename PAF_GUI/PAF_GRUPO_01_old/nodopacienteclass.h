#ifndef NODOPACIENTECLASS_H
#define NODOPACIENTECLASS_H
#include <pacienteclass.h>

class nodoPacienteClass{
private:
    pacienteClass *paciente;
    nodoPacienteClass *sgte;
    nodoPacienteClass *ant;
public:
    nodoPacienteClass();
    ~nodoPacienteClass();
    pacienteClass *getPaciente() const;
    void setPaciente(pacienteClass *value);
    nodoPacienteClass *getSgte() const;
    void setSgte(nodoPacienteClass *value);
    nodoPacienteClass *getAnt() const;
    void setAnt(nodoPacienteClass *value);
};

#endif // NODOPACIENTECLASS_H

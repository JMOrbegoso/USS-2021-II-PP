#ifndef NODOPACIENTECLASS_H
#define NODOPACIENTECLASS_H
#include <pacienteclass.h>

class nodoPacienteClass{
    pacienteClass *info;
    nodoPacienteClass *sgte;
    nodoPacienteClass *ant;
public:
    nodoPacienteClass();
    ~nodoPacienteClass();
    pacienteClass *getInfo() const;
    void setInfo(pacienteClass *value);
    nodoPacienteClass *getSgte() const;
    void setSgte(nodoPacienteClass *value);
    nodoPacienteClass *getAnt() const;
    void setAnt(nodoPacienteClass *value);
};

#endif // NODOPACIENTECLASS_H

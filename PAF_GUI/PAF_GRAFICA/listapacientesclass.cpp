#include "listapacientesclass.h"


nodoPacienteClass *listaPacientesClass::getCab() const
{
    return cab;
}

void listaPacientesClass::setCab(nodoPacienteClass *value)
{
    cab = value;
}

int listaPacientesClass::getCant() const
{
    return cant;
}

void listaPacientesClass::setCant(int value)
{
    cant = value;
}
listaPacientesClass::listaPacientesClass()
{
    cab = NULL;
    cant = 0;
}

listaPacientesClass::~listaPacientesClass()
{

}

void listaPacientesClass::insertarPaciente(pacienteClass *paci)
{
    nodoPacienteClass *aux = new (struct nodoPacienteClass);
    nodoPacienteClass *temp = new (struct nodoPacienteClass);
    temp->setInfo(paci);
    temp->setSgte(NULL);
    if( this->cab == NULL){
        this->setCab(temp);
        this->getCab()->setAnt(NULL);
    }else{
        aux =  this->getCab();
        while(aux->getSgte() != NULL){
            aux = aux->getSgte();
        }
        aux->setSgte(temp);
        temp->setAnt(aux);
    }
    this->cant++;
}

listaPacientesClass *listaPacientesClass::buscarDni(string dni)
{
    listaPacientesClass* temp = new listaPacientesClass();
    nodoPacienteClass *aux = this->getCab();

    while(aux != NULL)
    {
        if (aux->getInfo()->getDni().find(dni, 0) != string::npos)
            temp->insertarPaciente(aux->getInfo());

        aux = aux->getSgte();
    }

    return temp;
}


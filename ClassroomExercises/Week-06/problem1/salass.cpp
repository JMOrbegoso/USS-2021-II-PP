#include "salass.h"

string salasS::getCodigo() const { return codigo; }
void salasS::setCodigo(const string &value) { codigo = value; }

string salasS::getTematica() const { return tematica; }
void salasS::setTematica(const string &value) { tematica = value; }

listaL *salasS::getLL() const { return lL; }
void salasS::setLL(listaL *value) { lL = value; }

salasS::salasS() {}

salasS::~salasS() {}

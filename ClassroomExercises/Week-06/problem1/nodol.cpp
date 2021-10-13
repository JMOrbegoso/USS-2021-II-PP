#include "nodol.h"

libroL *nodoL::getInfo() const { return info; }

void nodoL::setInfo(libroL *value) { info = value; }

nodoL *nodoL::getSgte() const { return sgte; }

void nodoL::setSgte(nodoL *value) { sgte = value; }

nodoL *nodoL::getAnt() const { return ant; }

void nodoL::setAnt(nodoL *value) { ant = value; }
nodoL::nodoL() {}

nodoL::~nodoL() {}

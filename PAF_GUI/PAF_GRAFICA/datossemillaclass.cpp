#include "datossemillaclass.h"

void datosSemillaClass::sembrar(vacunatonContraDengueClass *&vacunaton) {
    localClass *local1, *local2;

    local1 = new localClass();
    local1->setNombreLocal("local 1");
    local1->setDireccionLocal("Av. Bolognesi 444");
    local1->setEstadoLocal(true);
    local1->setPersonales(new listaPersonalClass());
    local1->setPacientes(new listaPacientesClass());
    local1->setAlmacen(new almacenClass());

    local2 = new localClass();
    local2->setNombreLocal("local 2");
    local2->setDireccionLocal("Av. Heroes 222");
    local2->setEstadoLocal(true);
    local2->setPersonales(new listaPersonalClass());
    local2->setPacientes(new listaPacientesClass());
    local2->setAlmacen(new almacenClass());

    auto locales = vacunaton->getLocales();
    locales->insertarLocal(local1);
    locales->insertarLocal(local2);

    vacunaton->setLocales(locales);
  }

#include "datossemillaclass.h"

void datosSemillaClass::sembrar(vacunatonContraDengueClass *&vacunaton) {
    localClass *local1, *local2;

    local1 = new localClass("local 1", "Av. Bolognesi 444", true);
    local2 = new localClass("local 2", "Av. Heroes 222", false);

    auto locales = vacunaton->getLocales();
    locales->insertarLocal(local1);
    locales->insertarLocal(local2);

    vacunaton->setLocales(locales);
  }

#include "datossemillaclass.h"

void datosSemillaClass::sembrar(vacunatonContraDengueClass *&vacunaton) {
    localClass *local1, *local2;
    personalClass *medico1, *medico2;
    personalClass *enfermera1, *enfermera2, *enfermera3;

    medico1 = new personalClass("Antonio", "Gomez", "12345678", "959090909", "Av. Pinos 445", 45, 4500, "8 horas", true);
    medico2 = new personalClass("Julia", "Ramirez", "92949678", "989010403", "Av. Robles 745", 39, 4800, "10 horas", true);

    enfermera1 = new personalClass("Rosario", "Gutierrez", "82345678", "914090909", "Av. Pinos 245", 24, 2500, "12 horas", false);
    enfermera2 = new personalClass("Diana", "Lopez", "28445678", "959093929", "Av. Robles 345", 29, 2500, "12 horas", false);
    enfermera3 = new personalClass("Roxana", "Rojas", "84535678", "959190409", "Av. España 745", 32, 2500, "12 horas", false);

    local1 = new localClass("local 1", "Av. Bolognesi 444", true);
    local2 = new localClass("local 2", "Av. Heroes 222", false);

    local1->getPersonales()->insertarPersonal(medico1);
    local2->getPersonales()->insertarPersonal(medico2);

    local1->getPersonales()->insertarPersonal(enfermera1);
    local2->getPersonales()->insertarPersonal(enfermera2);
    local2->getPersonales()->insertarPersonal(enfermera3);

    auto locales = vacunaton->getLocales();
    locales->insertarLocal(local1);
    locales->insertarLocal(local2);

    vacunaton->setLocales(locales);
  }

#include "datossemillaclass.h"

void datosSemillaClass::sembrar(vacunatonContraDengueClass *&vacunaton) {
    localClass *local1, *local2;
    loteVacunaClass *lote1, *lote2;
    personalClass *medico1, *medico2;
    personalClass *enfermera1, *enfermera2, *enfermera3;
    pacienteClass *paciente1, *paciente2, *paciente3,*paciente4;

    lote1 = new loteVacunaClass("CYD-TDV", 1000, "2022-01-12", true);
    lote2 = new loteVacunaClass("CYD-TDV", 500, "2022-01-24", true);

    medico1 = new personalClass("Antonio", "Gomez", "12345678", "959090909", "Av. Pinos 445", 45, 4500, "8 horas", true);
    medico2 = new personalClass("Julia", "Ramirez", "92949678", "989010403", "Av. Robles 745", 39, 4800, "10 horas", true);

    enfermera1 = new personalClass("Rosario", "Gutierrez", "82345678", "914090909", "Av. Pinos 245", 24, 2500, "12 horas", false);
    enfermera2 = new personalClass("Diana", "Lopez", "28445678", "959093929", "Av. Robles 345", 29, 2500, "12 horas", false);
    enfermera3 = new personalClass("Roxana", "Rojas", "84535678", "959190409", "Av. España 745", 32, 2500, "12 horas", false);

    paciente1 = new pacienteClass("77236677", "Dara", "Querevalu Leonardo", 19,"970685321", "Av.Balta 983", "Alergia");
    paciente2 = new pacienteClass("73772066","Angel","Torres Salazar",19, "986565666","Av.Chiclayo 9");
    paciente3 = new pacienteClass("16695685","Juanito","Sosa Paz",35, "963568231","Los Incas 66", "Hipertension");
    paciente4 = new pacienteClass("14569853","Huerfanito","Costa Azul",60, "966539651","Av.Balta 1563");

    paciente4->setAtencion(new atencionClass("2021-12-09", enfermera3, lote2));

    local1 = new localClass("local 1", "Av. Bolognesi 444", true);
    local2 = new localClass("local 2", "Av. Heroes 222", false);

    vacunaton->getAlmacenGeneral()->getLotes()->insertarLote(lote1);
    vacunaton->getAlmacenGeneral()->getLotes()->insertarLote(lote2);

    local1->getLotes()->insertarLote(lote1);
    local2->getLotes()->insertarLote(lote2);

    local1->getPersonales()->insertarPersonal(medico1);
    local2->getPersonales()->insertarPersonal(medico2);

    local1->getPersonales()->insertarPersonal(enfermera1);
    local2->getPersonales()->insertarPersonal(enfermera2);
    local2->getPersonales()->insertarPersonal(enfermera3);

    auto locales = vacunaton->getLocales();
    locales->insertarLocal(local1);
    locales->insertarLocal(local2);

    local1->getPacientes()->insertarPaciente(paciente1);
    local2->getPacientes()->insertarPaciente(paciente3);
    local1->getPacientes()->insertarPaciente(paciente2);
    local2->getPacientes()->insertarPaciente(paciente4);

    vacunaton->setLocales(locales);
  }

TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    basicas.cpp \
    menusclass.cpp \
    vacunadengueclass.cpp \
    listalocalesclass.cpp \
    personaclass.cpp \
    localclass.cpp \
    listadoctoresclass.cpp \
    nododoctorclass.cpp \
    doctorclass.cpp \
    listapacienteclass.cpp \
    nodopacienteclass.cpp \
    pacienteclass.cpp \
    listaenfermerasclass.cpp \
    nodoenfermeraclass.cpp \
    enfermeraclass.cpp \
    listaalmacenesclass.cpp \
    almacenclass.cpp \
    vacunasloteslistaclass.cpp \
    vacunaloteclass.cpp \
    listaatendidosclass.cpp \
    nodoatendidoclass.cpp \
    atendidoclass.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    basicas.h \
    menusclass.h \
    vacunadengueclass.h \
    listalocalesclass.h \
    personaclass.h \
    localclass.h \
    listadoctoresclass.h \
    nododoctorclass.h \
    doctorclass.h \
    listapacienteclass.h \
    nodopacienteclass.h \
    pacienteclass.h \
    listaenfermerasclass.h \
    nodoenfermeraclass.h \
    enfermeraclass.h \
    listaalmacenesclass.h \
    almacenclass.h \
    vacunasloteslistaclass.h \
    vacunaloteclass.h \
    listaatendidosclass.h \
    nodoatendidoclass.h \
    atendidoclass.h


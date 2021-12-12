#-------------------------------------------------
#
# Project created by QtCreator 2021-11-22T22:44:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PAF_GRAFICA
TEMPLATE = app


SOURCES += main.cpp\
    atencionclass.cpp \
    datossemillaclass.cpp \
    gui/atenderpaciente.cpp \
    gui/gestionaralmacenes.cpp \
    gui/gestionarlotegui.cpp \
        gui/mainwindow.cpp \
    almacenclass.cpp \
    listalocalesclass.cpp \
    listalotesvacunaclass.cpp \
    listalotesvacunageneralclass.cpp \
    listapacientesclass.cpp \
    listapersonalclass.cpp \
    listapersonasclass.cpp \
    localclass.cpp \
    loteGeneralclass.cpp \
    lotevacunaclass.cpp \
    nodopacienteclass.cpp \
    nodopersonalclass.cpp \
    pacienteclass.cpp \
    personaclass.cpp \
    personalclass.cpp \
    gui/registrarlotegui.cpp \
    vacunatoncontradengueclass.cpp \
    gui/aboutgui.cpp \
    gui/gestionaratendidos.cpp \
    gui/gestionarlocal.cpp \
    gui/gestionarpaciente.cpp \
    gui/login.cpp \
    gui/registrarlocal.cpp \
    gui/registrarpaciente.cpp \
    gui/registrarpersonalgui.cpp \
    gui/gestionarpersonalgui.cpp

HEADERS  += gui/mainwindow.h \
    almacenclass.h \
    atencionclass.h \
    datossemillaclass.h \
    gui/atenderpaciente.h \
    gui/gestionaralmacenes.h \
    gui/gestionarlotegui.h \
    listalocalesclass.h \
    listalotesvacunaclass.h \
    listalotesvacunageneralclass.h \
    listapacientesclass.h \
    listapersonalclass.h \
    listapersonasclass.h \
    localclass.h \
    lotegeneralclass.h \
    lotevacunaclass.h \
    nodopacienteclass.h \
    nodopersonalclass.h \
    pacienteclass.h \
    personaclass.h \
    personalclass.h \
    gui/registrarlotegui.h \
    vacunatoncontradengueclass.h \
    gui/aboutgui.h \
    gui/gestionaratendidos.h \
    gui/gestionarlocal.h \
    gui/gestionarpaciente.h \
    gui/login.h \
    gui/registrarlocal.h \
    gui/registrarpaciente.h \
    gui/registrarpersonalgui.h \
    gui/gestionarpersonalgui.h

FORMS    += gui/mainwindow.ui \
    gui/aboutgui.ui \
    gui/atenderpaciente.ui \
    gui/gestionaralmacenes.ui \
    gui/gestionaratendidos.ui \
    gui/gestionarlocal.ui \
    gui/gestionarlotegui.ui \
    gui/gestionarpaciente.ui \
    gui/login.ui \
    gui/registrarlocal.ui \
    gui/registrarlotegui.ui \
    gui/registrarpaciente.ui \
    gui/registrarpersonalgui.ui \
    gui/gestionarpersonalgui.ui



RESOURCES += \
    resource.qrc

DISTFILES +=

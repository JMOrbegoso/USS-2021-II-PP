#-------------------------------------------------
#
# Project created by QtCreator 2021-11-10T14:42:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AlojamientoHotel
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    loginsystem.cpp \
    registrarusuario.cpp \
    listausuarios.cpp \
    clscliente.cpp \
    clsnodocliente.cpp \
    clslistaclientes.cpp \
    clssupermercado.cpp

HEADERS  += mainwindow.h \
    loginsystem.h \
    registrarusuario.h \
    listausuarios.h \
    clscliente.h \
    clsnodocliente.h \
    clslistaclientes.h \
    clssupermercado.h

FORMS    += mainwindow.ui \
    loginsystem.ui \
    registrarusuario.ui \
    listausuarios.ui

RESOURCES += \
    imagenes.qrc

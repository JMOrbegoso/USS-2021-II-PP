QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    butacaclass.cpp \
    circoclass.cpp \
    clienteclass.cpp \
    listabutacasclass.cpp \
    listaclienteclass.cpp \
    listarbutacaszonagui.cpp \
    listaticketsclass.cpp \
    listatrabajadoresclass.cpp \
    listazonasclass.cpp \
    main.cpp \
    mainwindow.cpp \
    nodobutacasclass.cpp \
    nodoclienteclass.cpp \
    nodoticketclass.cpp \
    nodotrabajadorclass.cpp \
    personaclass.cpp \
    registrarclientegui.cpp \
    registrartrabajadoresgui.cpp \
    registrarventaticketgui.cpp \
    registrarzonagui.cpp \
    ticketclass.cpp \
    trabajadorclass.cpp \
    zonaclass.cpp

HEADERS += \
    butacaclass.h \
    circoclass.h \
    clienteclass.h \
    listabutacasclass.h \
    listaclienteclass.h \
    listarbutacaszonagui.h \
    listaticketsclass.h \
    listatrabajadoresclass.h \
    listazonasclass.h \
    mainwindow.h \
    nodobutacasclass.h \
    nodoclienteclass.h \
    nodoticketclass.h \
    nodotrabajadorclass.h \
    personaclass.h \
    registrarclientegui.h \
    registrartrabajadoresgui.h \
    registrarventaticketgui.h \
    registrarzonagui.h \
    ticketclass.h \
    trabajadorclass.h \
    zonaclass.h

FORMS += \
    listarbutacaszonagui.ui \
    mainwindow.ui \
    registrarclientegui.ui \
    registrartrabajadoresgui.ui \
    registrarventaticketgui.ui \
    registrarzonagui.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    Resources.qrc

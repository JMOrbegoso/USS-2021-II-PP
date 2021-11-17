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
    aboutgui.cpp \
    buscaralmacengui.cpp \
    buscarlocalgui.cpp \
    buscarlotegui.cpp \
    editaralmacengui.cpp \
    editarlocalgui.cpp \
    editarlotegui.cpp \
    habilitarinhabilitaralmacengui.cpp \
    habilitarinhabilitarlocalgui.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    mostraralmacenesgui.cpp \
    mostrardetalleslocaldoctores.cpp \
    mostrardetalleslocallotes.cpp \
    mostrardetalleslocalpacientes.cpp \
    mostrarestadosalmacenesgui.cpp \
    mostrarestadoslocalesgui.cpp \
    mostrarlocalesgui.cpp \
    mostrarlotesgui.cpp \
    registrarlotegui.cpp \
    registroalmacengui.cpp \
    registrolocalgui.cpp \
    registrarcolapacientesgui.cpp \
    mostrarfilapacientesgui.cpp \
    buscarpacientegui.cpp \
    atenderpacientegui.cpp \
    mostrarfilaatendidosgui.cpp \
    buscaratendidogui.cpp \
    mostrardetalleslocalenfermeras.cpp \
    registrarmedicogui.cpp \
    registrarenfermeragui.cpp \
    mostrarmedicogui.cpp

HEADERS += \
    aboutgui.h \
    buscaralmacengui.h \
    buscarlocalgui.h \
    buscarlotegui.h \
    editaralmacengui.h \
    editarlocalgui.h \
    editarlotegui.h \
    habilitarinhabilitaralmacengui.h \
    habilitarinhabilitarlocalgui.h \
    login.h \
    mainwindow.h \
    mostraralmacenesgui.h \
    mostrardetalleslocaldoctores.h \
    mostrardetalleslocallotes.h \
    mostrardetalleslocalpacientes.h \
    mostrarestadosalmacenesgui.h \
    mostrarestadoslocalesgui.h \
    mostrarlocalesgui.h \
    mostrarlotesgui.h \
    registrarlotegui.h \
    registroalmacengui.h \
    registrolocalgui.h \
    registrarcolapacientesgui.h \
    mostrarfilapacientesgui.h \
    buscarpacientegui.h \
    atenderpacientegui.h \
    mostrarfilaatendidosgui.h \
    buscaratendidogui.h \
    mostrardetalleslocalenfermeras.h \
    registrarmedicogui.h \
    registrarenfermeragui.h \
    mostrarmedicogui.h

FORMS += \
    aboutgui.ui \
    buscaralmacengui.ui \
    buscarlocalgui.ui \
    buscarlotegui.ui \
    editaralmacengui.ui \
    editarlocalgui.ui \
    editarlotegui.ui \
    habilitarinhabilitaralmacengui.ui \
    habilitarinhabilitarlocalgui.ui \
    login.ui \
    mainwindow.ui \
    mostraralmacenesgui.ui \
    mostrardetalleslocaldoctores.ui \
    mostrardetalleslocallotes.ui \
    mostrardetalleslocalpacientes.ui \
    mostrarestadosalmacenesgui.ui \
    mostrarestadoslocalesgui.ui \
    mostrarlocalesgui.ui \
    mostrarlotesgui.ui \
    registrarlotegui.ui \
    registroalmacengui.ui \
    registrolocalgui.ui \
    registrarcolapacientesgui.ui \
    mostrarfilapacientesgui.ui \
    buscarpacientegui.ui \
    atenderpacientegui.ui \
    mostrarfilaatendidosgui.ui \
    buscaratendidogui.ui \
    mostrardetalleslocalenfermeras.ui \
    registrarmedicogui.ui \
    registrarenfermeragui.ui \
    mostrarmedicogui.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Controler.cpp \
    Epi.cpp \
    Insumo.cpp \
    JanelaCadEpi.cpp \
    JanelaCadMedicamento.cpp \
    JanelaCadVacina.cpp \
    JanelaCadastro.cpp \
    JanelaConsulta.cpp \
    JanelaDistribuir.cpp \
    Local.cpp \
    Medicamento.cpp \
    Persistencia.cpp \
    Vacina.cpp \
    main.cpp \
    JanelaPrincipal.cpp

HEADERS += \
    Controler.h \
    Epi.h \
    Insumo.h \
    JanelaCadEpi.h \
    JanelaCadMedicamento.h \
    JanelaCadastro.h \
    JanelaConsulta.h \
    JanelaDistribuir.h \
    JanelaPrincipal.h \
    Local.h \
    Medicamento.h \
    Persistencia.h \
    Vacina.h \
    janelaCadVacina.h

FORMS += \
    JanelaCadEpi.ui \
    JanelaCadMedicamento.ui \
    JanelaCadVacina.ui \
    JanelaCadastro.ui \
    JanelaConsulta.ui \
    JanelaDistribuir.ui \
    JanelaPrincipal.ui

TRANSLATIONS += \
    Controle_de_Estoque_pt_BR.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Arquivo_de_Recursos.qrc

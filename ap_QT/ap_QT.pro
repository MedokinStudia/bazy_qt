QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

TARGET=mysqlconnect
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    interfejs_kasjera.cpp \
    interfejs_kierownika.cpp \
    interfejs_magazyniera.cpp \
    interfejs_technika.cpp \
    main.cpp \
    mainwindow.cpp \
    tabele.cpp

HEADERS += \
    interfejs_kasjera.h \
    interfejs_kierownika.h \
    interfejs_magazyniera.h \
    interfejs_technika.h \
    mainwindow.h \
    tabele.h

FORMS += \
    interfejs_kasjera.ui \
    interfejs_kierownika.ui \
    interfejs_magazyniera.ui \
    interfejs_technika.ui \
    mainwindow.ui \
    tabele.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32:CONFIG(release, debug|release): LIBS += -LE:/lib/ -llibmysql

INCLUDEPATH += E:/
DEPENDPATH += E:/

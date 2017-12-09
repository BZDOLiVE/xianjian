#-------------------------------------------------
#
# Project created by QtCreator 2016-05-15T15:30:51
#
#-------------------------------------------------

QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = xianjian
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    map1.cpp \
    mapgraphicitem.cpp \
    diren.cpp \
    zhujue.cpp

HEADERS  += mainwindow.h \
    map1.h \
    mapgraphicitem.h \
    diren.h \
    zhujue.h


FORMS    += mainwindow.ui \
    map1.ui

RESOURCES += \
    res.qrc

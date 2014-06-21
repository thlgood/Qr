#-------------------------------------------------
#
# Project created by QtCreator 2014-06-05T14:13:52
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = test
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

DESTDIR = ../bin/

SOURCES += main.cpp

win32{
QMAKE_LFLAGS += /INCREMENTAL:NO
}

#-------------------------------------------------
#
# Project created by QtCreator 2014-06-05T13:10:29
#
#-------------------------------------------------

QT       += core

#QT       -= gui

TARGET = Qr
#CONFIG   += console
#CONFIG   -= app_bundle

TEMPLATE = lib

DESTDIR += ../Qr/bin

SOURCES += main.cpp

include (QZXing/QZXing.pri)

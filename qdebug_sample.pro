QT += core
QT -= gui

CONFIG += c++11

TARGET = qdebug_sample
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    Student.cpp

HEADERS += \
    Student.h

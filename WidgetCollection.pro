#-------------------------------------------------
#
# Project created by QtCreator 2013-12-31T17:44:39
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = WidgetCollection
TEMPLATE = app


SOURCES += main.cpp\
        widget/analogclock.cpp \
        widget/widgetloader.cpp \
    widget/samplewidget.cpp

HEADERS  += \
        widget/analogclock.h \
        widget/widgetloader.h \
    widget/samplewidget.h

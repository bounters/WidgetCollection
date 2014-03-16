#-------------------------------------------------
#
# Project created by QtCreator 2013-12-31T17:44:39
#
#-------------------------------------------------

QT       += core declarative gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = WidgetCollection
TEMPLATE = app


SOURCES += main.cpp\
        widget/analogclock.cpp \
        widget/widgetloader.cpp \
    widget/samplewidget.cpp \

HEADERS  += \
        widget/analogclock.h \
        widget/widgetloader.h \
    widget/samplewidget.h \

OTHER_FILES += \
    qml/QMLBusTimetable.qml

#Add qml Files here
APP_QML_FILES.files = qml/QMLBusTimetable.qml
#Change to OS dependent resources file
APP_QML_FILES.path = Contents/MacOS/qml/
QMAKE_BUNDLE_DATA += APP_QML_FILES

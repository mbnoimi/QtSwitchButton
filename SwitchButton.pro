QT       += core gui widgets

TARGET = SwitchButton

TEMPLATE = app

SOURCES += mainwidget.cpp \
    switchbutton.cpp \
    main.cpp

HEADERS  += mainwidget.h \
    switchbutton.h

CONFIG += mobility

MOBILITY =

ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android

OTHER_FILES += android/AndroidManifest.xml


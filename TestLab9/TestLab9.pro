include(gtest_dependency.pri)
INCLUDEPATH += C:\Lab9_Project_for_tests
TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

HEADERS += \
        ../../../../Lab9_Project_for_tests/IKeypad.h \
        ../../../../Lab9_Project_for_tests/ILatch.h \
        ../../../../Lab9_Project_for_tests/lockcontroller.h \
        mockkeypad.h \
        mocklatch.h \
        tst_testlockController.h

SOURCES += \
        ../../../../Lab9_Project_for_tests/lockcontroller.cpp \
        main.cpp \
        mockkeypad.cpp \
        mocklatch.cpp

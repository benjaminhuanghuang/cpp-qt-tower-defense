QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

SOURCES += \
    main.cpp \
    game.cpp \
    bullet.cpp \
    tower.cpp 


HEADERS += \
    game.h \
    bullets.h \
    tower.h 

    
RESOURCES += \
    res.qrc


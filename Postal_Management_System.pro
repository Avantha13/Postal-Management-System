QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    air_mail.cpp \
    foreing_data.cpp \
    foring_mail.cpp \
    local_data.cpp \
    local_mail.cpp \
    main.cpp \
    home_page.cpp \
    normal_mail.cpp \
    register_mail.cpp \
    sea_mail.cpp

HEADERS += \
    air_mail.h \
    foreing_data.h \
    foring_mail.h \
    home_page.h \
    local_data.h \
    local_mail.h \
    normal_mail.h \
    register_mail.h \
    sea_mail.h

FORMS += \
    air_mail.ui \
    foreing_data.ui \
    foring_mail.ui \
    home_page.ui \
    local_data.ui \
    local_mail.ui \
    normal_mail.ui \
    register_mail.ui \
    sea_mail.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Image.qrc

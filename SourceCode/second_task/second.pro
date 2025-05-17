QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
QMAKE_INFO_PLIST = Info.plist  # 指定自定义 Info.plist（可选）
QMAKE_MACOSX_DEPLOYMENT_TARGET = 10.14  # 确保支持权限 API

# 添加摄像头权限
QMAKE_INFO_PLIST_CAMERA_USAGE = "此应用需要使用摄像头进行视频处理"

SOURCES += \
    MSRCR.cpp \
    main.cpp \
    dialog.cpp

HEADERS += \
    MSRCR.h \
    dialog.h

FORMS += \
    dialog.ui

INCLUDEPATH += /usr/local/opt/opencv/include/opencv4
               /usr/local/opt/opencv/include/opencv4/opencv2


LIBS += /usr/local/opt/opencv/lib/libopencv_*
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

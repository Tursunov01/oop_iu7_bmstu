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

SOURCES += \
    main.cpp \
    mainwindow.cpp \
geometry/model/model3d.cpp \
        geometry/point.cpp \
        geometry/edge.cpp \
        io/readerimplementator_stdio.cpp \
        ui/drawer.cpp \
        controller/maincontroller.cpp \
        patterns/observer/subject.cpp \
        command/iappcommand.cpp \
        factory/model3dfactory.cpp \
        command/scalecommand.cpp \
        command/rotatecommand.cpp \
        command/transfercommand.cpp \
        ui/scene/sceneobjectcomposite.cpp \
        ui/scene/sceneobject.cpp \
        ui/camera/camera.cpp \
        datamanager/viewerdatamanager.cpp \
        controller/loadimplementater.cpp \
        controller/groupimplementater.cpp \
        controller/drawimplementater.cpp \
        controller/executor.cpp \
        controller/motionimplementer.cpp \
        ui/drawermediator.cpp \
        geometry/model/builder/3dmodelBuilder.cpp

HEADERS += \
    mainwindow.h\
    geometry/model/model3d.h\
        geometry/point.h\
        geometry/edge.h\
        exception/error.h\
        io/readerimplementator_stdio.h\
        ui/drawer.h\
        command/command.h\
        geometry/model/imodel.h\
        geometry/ipoint.h\
        geometry/iedge.h\
        io/ireaderimplementator.h\
        factory/iabstractfactory.h\
        io/reader.cpp io/reader.h\
        io/ireader.h\
        controller/maincontroller.h\
        patterns/observer/observer.h\
        patterns/observer/subject.h\
        command/iappcommand.h \
        factory/model3dfactory.h\
        command/scalecommand.h\
        command/rotatecommand.h \
        command/transfercommand.h \
        ui/imediator.h ui/iparticipant.h\
        ui/scene/sceneobjectcomposite.h\
        ui/scene/sceneobject.h\
        ui/camera/camera.h \
        datamanager/viewerdatamanager.h \
        controller/icommandexecuteimplementer.h \
        controller/loadimplementater.h\
        controller/groupimplementater.h\
        controller/drawimplementater.h\
        controller/icommandexecute.h\
        controller/executor.h\
        controller/motionimplementer.h\
        ui/drawermediator.h\
        geometry/model/builder/director.h\
        geometry/model/builder/imodelbuilder.h\
        geometry/model/builder/3dmodelBuilder.h \

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

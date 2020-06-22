#ifndef LAB_03_MAINFACADE_H
#define LAB_03_MAINFACADE_H


#include <mainwindow.h>
#include <geometry/model/imodel.h>
#include <command/command.h>
#include <datamanager/viewerdatamanager.h>
#include "patterns/observer/subject.h"

class MainFacade : public Observer {
    friend union IAppCommand::Argument;
public:
    MainFacade();
    virtual ~MainFacade();
    void update(Subject *subject) override;

private:
    MainWindow *_subject { nullptr };
    ViewerDataManager _dataManager;

};


#endif

#ifndef MAINFACADE_H
#define MAINFACADE_H

#include "mainwindow.h"
#include "ModelInterface.h"
#include "command.h"
#include "DataManager.h"

class MainFacade{
    friend union AbstractCmd::Argument;
private:
    DataManager datamanger;
    std::map<unsigned, std::shared_ptr<AbstractCmd>> commands;

public:
    MainFacade();
    virtual ~MainFacade();
    void doOperation(DataManager datamanager,MainWindow *window);
};

#endif // MAINFACADE_H

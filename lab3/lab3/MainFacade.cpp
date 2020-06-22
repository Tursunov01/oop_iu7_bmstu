#include "MainFacade.h"
#include "ProgrammFactory.h"
#include "mainwindow.h"

MainFacade::MainFacade(){
  ProgramFactory *factory = ProgramFactory::getInstance();

  commands[MainWindow::ROTATE] = std::shared_ptr<RotateCommand>(factory->createRotateCommand());
  commands[MainWindow::MOVE] = std::shared_ptr<MoveCommand>(factory->createMoveCommand());
  commands[MainWindow::SCALE] = std::shared_ptr<ScaleCommand>(factory->createScaleCommand());
  commands[MainWindow::LOAD_MODEL] = std::shared_ptr<LoadCommand>(factory->createLoadCommand());
  commands[MainWindow::DRAW] = std::shared_ptr<DrawCommand>(factory->createDrawCommand());

}

MainFacade::~MainFacade(){

}

void MainFacade::doOperation(MainWindow *window){
    MainWindow::State winState = window->getState();

    commands[winState.cmd]->execute(winState.arg);
}

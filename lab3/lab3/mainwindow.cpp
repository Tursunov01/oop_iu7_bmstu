#include "MainFacade.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    ProgrammFactory* factory = ProgrammFactory::getInstance(); //получить Фабрику
//    mainFacade = factory->createMainFacade(); //создание mainFacade

    scene = new QGraphicsScene();
    ProgramFacade = new MainFacade();
    ui->graphicsView->setScene(scene);
    int width = ui->graphicsView->width();
    int height = ui->graphicsView->height();
    scene->setSceneRect(0, 0, width, height);
};



MainWindow::~MainWindow()
{
    delete ProgramFacade;
    delete scene;
    delete ui;
}


void MainWindow::on_pushButton_clicked() //move
{

}

void MainWindow::on_pushButton_2_clicked() //turn
{

}



void MainWindow::on_pushButton_3_clicked() // zoom
{

}



void MainWindow::on_pushButton_4_clicked() //download
{

}

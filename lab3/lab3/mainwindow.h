#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QGraphicsScene>
#include <QMainWindow>
#include "AbstractCommand.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
class MainFacade;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    enum CMD {
            LOAD_MODEL,
            DRAW,
            ROTATE,
            SCALE,
            MOVE,
            ADD_CAMERA,
            SET_ACTIVE_CAMERA

        };

    struct State {
         CMD cmd;
         AbstractCmd::Argument arg;
    };
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    State& getState();
    void setState(State &state);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
    MainFacade *ProgramFacade {nullptr};
    QGraphicsScene *scene { nullptr };
    State *CurrentCommand;
};


#endif // MAINWINDOW_H

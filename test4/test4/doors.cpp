#include "doors.h"
#include "errors.h"
#include "waitTime.h"

doors::doors()
{
    this->st = CLOSED;
    connect(this, SIGNAL(opening()), this, SLOT(start_open()));
    connect(this, SIGNAL(closing()), this, SLOT(start_close()));

}

void doors::set_state(doors_state state)
{
    this->st = state;
    if(state == OPENED)
        this->lab->setText("Открыты");
    else if(state == CLOSED)
        this->lab->setText("Закрыты");
    else if(state == CLOSING)
        this->lab->setText("Закрываются");
    else if(state == OPENING)
        this->lab->setText("Открываются");
}


void doors::open()
{
    if(this->st == OPENED)
        return;

    this->set_state(OPENED);
}

void doors::close()
{
    if(this->st == CLOSED)
        return;


    this->set_state(CLOSED);
}


void doors::start_open()
{
    if(this->st == OPENING)
        return;

    this->set_state(OPENING);
    wait_time(200);
    this->open();
}

void doors::start_close()
{
    if(this->st == CLOSING)
        return;


    this->set_state(CLOSING);
    wait_time(200);
    this->close();
}



void doors::set_label(QLabel* l)
{
    this->lab = l;
    this->set_state(CLOSED);
}


bool doors::is_open()
{
    return this->st == OPENED;
}

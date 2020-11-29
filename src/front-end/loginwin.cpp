#include "loginwin.h"
#include "ui_loginwin.h"

LoginWin::LoginWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWin)
{
    ui->setupUi(this);
}

LoginWin::~LoginWin()
{
    delete ui;
}

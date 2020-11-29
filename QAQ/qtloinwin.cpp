#include "qtloinwin.h"
#include "ui_qtloinwin.h"
#include "mainwindow.h"

QtLoinWin::QtLoinWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QtLoinWin)
{
    ui->setupUi(this);
}

QtLoinWin::~QtLoinWin()
{
    delete ui;
}

void QtLoinWin::on_pushButton_2_clicked()
{
    this->hide();
    MainWindow* win = new MainWindow;
    win->show();
}

#include "outwin.h"
#include "ui_outwin.h"
#include "mainwindow.h"

outWin::outWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::outWin)
{
    ui->setupUi(this);
    this->setWindowTitle("QAQ--分析界面");
}

outWin::~outWin()
{
    delete ui;
}

void outWin::on_pushButton_3_clicked()
{
    this->hide();
    MainWindow* win = new MainWindow;
    win->show();
}

void outWin::on_pushButton_clicked()
{
    this->close();
}

void outWin::on_pushButton_2_clicked()
{
    this->hide();
    nextAnalyseWin* win = new nextAnalyseWin;
    win->show();
}

void outWin::on_actionabout_us_triggered()
{
    QMessageBox::information(this, "消息", "选择了打开菜单项");
}

void outWin::on_actiondakai_triggered()
{
    QMessageBox::information(this, "消息", "选择了关于菜单项");
}

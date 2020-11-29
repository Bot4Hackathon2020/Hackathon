#include "nextanalysewin.h"
#include "ui_nextanalysewin.h"
#include "outwin.h"
#include "mainwindow.h"

nextAnalyseWin::nextAnalyseWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::nextAnalyseWin)
{
    ui->setupUi(this);
    this->setWindowTitle("QAQ--深度分析界面");
}

nextAnalyseWin::~nextAnalyseWin()
{
    delete ui;
}

void nextAnalyseWin::on_pushButton_clicked()
{
    this->close();
}

void nextAnalyseWin::on_pushButton_2_clicked()
{
    this->hide();
    outWin* win = new outWin;
    win->show();
}

void nextAnalyseWin::on_pushButton_3_clicked()
{
    this->hide();
    MainWindow* win = new MainWindow;
    win->show();
}

void nextAnalyseWin::on_actiondaikai_triggered()
{
    QMessageBox::information(this, "消息", "选择了打开菜单项");
}

void nextAnalyseWin::on_actiongaunhy_triggered()
{
    QMessageBox::information(this, "消息", "选择了关于菜单项");
}

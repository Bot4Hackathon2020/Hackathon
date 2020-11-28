#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_triggered()
{
    QMessageBox::information(this, "消息", "选择了打开菜单项");
}

void MainWindow::on_action_2_triggered()
{
    QMessageBox::information(this, "消息", "选择了打开菜单项");
}

void MainWindow::on_pushButton_clicked()
{
    ui->statusbar->showMessage(tr("你单击了：")+ui->pushButton->text());
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->statusbar->showMessage(tr("你单击了：")+ui->pushButton_2->text());
    close();
}

void MainWindow::on_pushButton_3_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,tr("选择文件"),tr(":/"),tr("*.*"));
    QFile myFile(fileName);
    if(!myFile.open(QIODevice::ReadOnly | QIODevice::Text))
        return;
}

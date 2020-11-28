#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTextCodec>
#include<QMessageBox>//信息提示事件
#include<QMouseEvent>//鼠标事件
#include<QIcon>
#include<QTime>
#include<QLCDNumber>




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    createView();
    this->setWindowTitle("窗口图标");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createView(){
    addControls();
    createToolBar();
    createMenu();
    createMouse();
    createSystemTray();
}
void MainWindow::addControls(){

}
void MainWindow::createToolBar(){


}
void MainWindow::createMenu(){
    m_Act = new QAction(QIcon(":/apple.png"),tr("&A关于"),this);

    connect(m_Act,SIGNAL(triggered()),this,SLOT(about()));
    m_Menu = menuBar()->addMenu(tr("&A关于"));
    m_Menu->addAction(m_Act);
}
void MainWindow::createMouse(){
    MouseX = new QLabel(ui->statusbar);
    MouseX->setFixedWidth(50);
    MouseX->setIndent(3);

    MouseY = new QLabel(ui->statusbar);
    MouseY->setFixedWidth(50);
    MouseY->setIndent(3);

    ui->statusbar->addWidget(MouseX);
    ui->statusbar->addWidget(MouseY);

    setMouseTracking(true);
}
void MainWindow::createSystemTray(){
    QIcon systemIcon(":/open.png");
    myTrayIcon = new QSystemTrayIcon(systemIcon,this);
    myTrayIcon->show();
    myTrayIcon->showMessage("提示","单击隐藏，双击显示主窗口");
    myTrayIcon->setContextMenu(ui->menu);

    connect(myTrayIcon,SIGNAL(activated(QSystemTrayIcon::ActivationReason)),this,SLOT(activated(QSystemTrayIcon::ActivationReason )));
}

void MainWindow::on_actiondakai_triggered(){
    QMessageBox::information(this,"消息","选择了打开菜单项");
}
void MainWindow::on_actionsave_triggered(){
    QMessageBox::information(this,"消息","选择了保存菜单项");
}
void MainWindow::on_actionexit_triggered()
{
    QMessageBox::information(this,"消息","选择了退出菜单项");
    close();
}
void MainWindow::on_action_0_triggered(){
    statusBar()->showMessage(tr("选择了打开菜单项"));
}
void MainWindow::activated(QSystemTrayIcon::ActivationReason reason){
    switch(reason){
    case QSystemTrayIcon::Trigger:
        this->hide();
        break;
    case QSystemTrayIcon::DoubleClick:
        this->showNormal();
        break;
    default:break;
    }
}
void MainWindow::about(){
    QMessageBox::about(this,"消息","选择了菜单项");
}

void MainWindow::mousePressEvent(QMouseEvent * event){
    //右键

    if(event->button() == Qt::RightButton){
         m_Menu->popup(event->globalPos());
    }
    //左键
    if(event->button() == Qt::LeftButton){
         ui->menu->popup(event->globalPos());
    }

}

void MainWindow::mouseMoveEvent(QMouseEvent * event){
    MouseX->setNum(event->x());
    MouseY->setNum(event->y());
}

void MainWindow::on_actionType_here_triggered(){
    about();
}


#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    myPath = "D:大二上";
    QDir dir(myPath);
    QFileInfoList list;

    list = dir.entryInfoList();
    showFileInfoList(list);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_triggered()
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

void MainWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    connect(ui->listWidget,SIGNAL(itemDoubleClicked(QListWidgetItem*)),
                    this,SLOT(slotDirShow(QListWidgetItem*)));
}

void MainWindow::showFileInfoList(QFileInfoList list)
{
    ui->listWidget->clear();
    for(int i=0; i<list.count() ;i++)
    {
        QFileInfo tmpFileInfo = list.at(i);
        if(tmpFileInfo.isDir())    //为目录则添加文件夹图标及对应文件名
        {
            QIcon icon(":/1.jpg");
            QString fileName = tmpFileInfo.fileName();
            QListWidgetItem *tmp = new QListWidgetItem(icon, fileName);
            ui->listWidget->addItem(tmp);
        }
        else if(tmpFileInfo.isFile())    //为普通文件则添加普通文件图标及对应文件名
        {
            QIcon icon(":/2.jpg");
            QString fileName = tmpFileInfo.fileName();
            QListWidgetItem *tmp = new QListWidgetItem(icon, fileName);
            ui->listWidget->addItem(tmp);
        }
    }
}

void MainWindow::slotShow(QDir dir)
{
    QFileInfoList list = dir.entryInfoList();
    showFileInfoList(list);
}

//鼠标双击触发，接受item参数
void MainWindow::slotDirShow(QListWidgetItem *item)
{
    QString str = item->text();
    QDir dir;

    dir.setPath(myPath);
    if(!dir.cd(str))         //如果进入失败，则为普通文件，创建新的进程打开对应文件
    {
        QStringList arguments;
        QString start_path = myPath+"\\" + str;
        arguments << "/c" << start_path;

        QProcess* process = new QProcess;

        qDebug() << start_path << endl;
        process->start("cmd.exe",arguments);  //开启新进程打开文件
        return;
    }
    myPath = dir.absolutePath();    //更新路径
    slotShow(dir);
}

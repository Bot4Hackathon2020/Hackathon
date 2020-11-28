#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QDir>
#include <QFileInfoList>
#include <QFileInfo>
#include <QProcess>
#include <QListWidgetItem>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_action_triggered();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::MainWindow *ui;

    void showFileInfoList(QFileInfoList list);  //根据获取的QFileInfoList显示本地目录
    void slotDirShow(QListWidgetItem *item);    //由双击的文件确定新的目录
    void slotShow(QDir dir);                    //由新的目录调用showFileInfoList显示

    private:
      QString myPath;   //记录文件当前路径
};
#endif // MAINWINDOW_H

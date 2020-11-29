#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QLabel>
#include<QSystemTrayIcon>
#include<QLCDNumber>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void mousePressEvent(QMouseEvent * event);
    void mouseMoveEvent(QMouseEvent * event);
    QLabel* MouseX;
    QLabel* MouseY;
    QSystemTrayIcon* myTrayIcon;
    QLCDNumber* myToolBarTime;

    void timerEvent(QTimerEvent* event);

    void on_action_0_triggered();
    void createView();
    void addControls();
    void createToolBar();
    void createMenu();
    void createMouse();
    void createSystemTray();


private slots:
    void on_actionexit_triggered();

    void on_actiondakai_triggered();

    void on_actionsave_triggered();

    void about();

    void activated(QSystemTrayIcon::ActivationReason reason);

    void on_actionType_here_triggered();

private:
    Ui::MainWindow *ui;
    QMenu * m_Menu;
    QAction * m_Act;
    QToolBar * m_ToolBar;
};


#endif // MAINWINDOW_H

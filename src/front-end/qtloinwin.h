#ifndef QTLOINWIN_H
#define QTLOINWIN_H

#include <QMainWindow>

namespace Ui {
class QtLoinWin;
}

class QtLoinWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit QtLoinWin(QWidget *parent = 0);
    ~QtLoinWin();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::QtLoinWin *ui;
};

#endif // QTLOINWIN_H

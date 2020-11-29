#ifndef LOGINWIN_H
#define LOGINWIN_H

#include <QMainWindow>

namespace Ui {
class LoginWin;
}

class LoginWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginWin(QWidget *parent = nullptr);
    ~LoginWin();

private:
    Ui::LoginWin *ui;
};

#endif // LOGINWIN_H

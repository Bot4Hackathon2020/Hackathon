#ifndef OUTWIN_H
#define OUTWIN_H

#include <QMainWindow>

#include "nextanalysewin.h"

namespace Ui {
class outWin;
}

class outWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit outWin(QWidget *parent = nullptr);
    ~outWin();

public:
    nextAnalyseWin analyseWin;

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_actionabout_us_triggered();

    void on_actiondakai_triggered();

private:
    Ui::outWin *ui;
};

#endif // OUTWIN_H

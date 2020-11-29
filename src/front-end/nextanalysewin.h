#ifndef NEXTANALYSEWIN_H
#define NEXTANALYSEWIN_H

#include <QMainWindow>

namespace Ui {
class nextAnalyseWin;
}

class nextAnalyseWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit nextAnalyseWin(QWidget *parent = nullptr);
    ~nextAnalyseWin();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_actiondaikai_triggered();

    void on_actiongaunhy_triggered();

private:
    Ui::nextAnalyseWin *ui;
};

#endif // NEXTANALYSEWIN_H

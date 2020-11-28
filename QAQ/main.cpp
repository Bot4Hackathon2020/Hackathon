#include "mainwindow.h"
#include "qtloinwin.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtLoinWin w;
    w.show();
    return a.exec();
}

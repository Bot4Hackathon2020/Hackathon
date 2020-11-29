/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit_Port;
    QPushButton *pushButton_Listen;
    QLabel *label;
    QPushButton *pushButton_Send;
    QTextEdit *textEdit_Recv;
    QTextEdit *textEdit_Send;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lineEdit_Port = new QLineEdit(centralWidget);
        lineEdit_Port->setObjectName(QString::fromUtf8("lineEdit_Port"));
        lineEdit_Port->setGeometry(QRect(70, 20, 51, 20));
        pushButton_Listen = new QPushButton(centralWidget);
        pushButton_Listen->setObjectName(QString::fromUtf8("pushButton_Listen"));
        pushButton_Listen->setGeometry(QRect(130, 20, 75, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 41, 21));
        pushButton_Send = new QPushButton(centralWidget);
        pushButton_Send->setObjectName(QString::fromUtf8("pushButton_Send"));
        pushButton_Send->setGeometry(QRect(290, 250, 75, 23));
        textEdit_Recv = new QTextEdit(centralWidget);
        textEdit_Recv->setObjectName(QString::fromUtf8("textEdit_Recv"));
        textEdit_Recv->setGeometry(QRect(30, 60, 341, 81));
        textEdit_Send = new QTextEdit(centralWidget);
        textEdit_Send->setObjectName(QString::fromUtf8("textEdit_Send"));
        textEdit_Send->setGeometry(QRect(30, 160, 341, 81));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_Listen->setText(QApplication::translate("MainWindow", "\344\276\246\345\220\254", nullptr));
        label->setText(QApplication::translate("MainWindow", "\347\253\257\345\217\243\357\274\232", nullptr));
        pushButton_Send->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

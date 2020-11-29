/********************************************************************************
** Form generated from reading UI file 'outwin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTWIN_H
#define UI_OUTWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_outWin
{
public:
    QAction *actionabout_us;
    QAction *actiondakai;
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QTextBrowser *textBrowser;
    QLabel *label_3;
    QGraphicsView *graphicsView;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *outWin)
    {
        if (outWin->objectName().isEmpty())
            outWin->setObjectName(QString::fromUtf8("outWin"));
        outWin->resize(800, 600);
        outWin->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	background-color: rgb(255, 254, 240);\n"
"	border-image: url(:/new/prefix1/back.jpg);\n"
"}\n"
"\n"
"QLineEdit{\n"
"\n"
"	border:3px solid#7b7b7b;\n"
"	border-radius:5px;\n"
"	background-color:#fffef0\n"
"}\n"
"\n"
"QPushButton{\n"
"	border:2px solid#7b7b7b;\n"
"	border-radius:15px;\n"
"	background-color:#6a92ff;\n"
"	\n"
"	font: 10 15pt \"\345\255\227\351\255\20217\345\217\267-\350\220\214\350\266\243\346\236\234\345\206\273\344\275\223\";\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color:#aa92ff\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#FF90ff\n"
"}\n"
""));
        actionabout_us = new QAction(outWin);
        actionabout_us->setObjectName(QString::fromUtf8("actionabout_us"));
        actiondakai = new QAction(outWin);
        actiondakai->setObjectName(QString::fromUtf8("actiondakai"));
        centralwidget = new QWidget(outWin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(670, 490, 121, 41));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(380, 490, 121, 41));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(530, 490, 121, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 64, 578, 21));
        label_2->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\255\227\351\255\2027\345\217\267-\346\270\251\346\232\226\347\253\245\347\250\232\344\275\223\";"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 100, 641, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 154, 578, 21));
        label_3->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\255\227\351\255\2027\345\217\267-\346\270\251\346\232\226\347\253\245\347\250\232\344\275\223\";"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(20, 190, 391, 241));
        outWin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(outWin);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        outWin->setMenuBar(menubar);
        statusbar = new QStatusBar(outWin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        outWin->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(actiondakai);
        menu->addSeparator();
        menu_2->addAction(actionabout_us);
        menu_2->addSeparator();

        retranslateUi(outWin);

        QMetaObject::connectSlotsByName(outWin);
    } // setupUi

    void retranslateUi(QMainWindow *outWin)
    {
        outWin->setWindowTitle(QApplication::translate("outWin", "MainWindow", nullptr));
        actionabout_us->setText(QApplication::translate("outWin", "\345\205\263\344\272\216\346\210\221\344\273\254", nullptr));
        actiondakai->setText(QApplication::translate("outWin", "\346\211\223\345\274\200", nullptr));
        pushButton->setText(QApplication::translate("outWin", "\351\200\200\345\207\272", nullptr));
        pushButton_2->setText(QApplication::translate("outWin", "\347\273\247\347\273\255\345\210\206\346\236\220", nullptr));
        pushButton_3->setText(QApplication::translate("outWin", "\350\277\224\345\233\236", nullptr));
        label_2->setText(QApplication::translate("outWin", "1\343\200\201\345\277\203\346\200\201\350\257\215\345\205\270\345\214\271\351\205\215\347\273\223\346\236\234\357\274\232", nullptr));
        label_3->setText(QApplication::translate("outWin", "2\343\200\201\346\203\205\347\273\252\351\245\274\345\233\276\357\274\232", nullptr));
        menu->setTitle(QApplication::translate("outWin", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QApplication::translate("outWin", "\345\205\263\344\272\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class outWin: public Ui_outWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTWIN_H

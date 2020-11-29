/********************************************************************************
** Form generated from reading UI file 'nextanalysewin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEXTANALYSEWIN_H
#define UI_NEXTANALYSEWIN_H

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

class Ui_nextAnalyseWin
{
public:
    QAction *actiondaikai;
    QAction *actiongaunhy;
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QGraphicsView *graphicsView;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *nextAnalyseWin)
    {
        if (nextAnalyseWin->objectName().isEmpty())
            nextAnalyseWin->setObjectName(QString::fromUtf8("nextAnalyseWin"));
        nextAnalyseWin->resize(800, 600);
        nextAnalyseWin->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
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
        actiondaikai = new QAction(nextAnalyseWin);
        actiondaikai->setObjectName(QString::fromUtf8("actiondaikai"));
        actiongaunhy = new QAction(nextAnalyseWin);
        actiongaunhy->setObjectName(QString::fromUtf8("actiongaunhy"));
        centralwidget = new QWidget(nextAnalyseWin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(580, 490, 201, 51));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 50, 121, 31));
        label->setStyleSheet(QString::fromUtf8("font: 13pt \"\346\226\271\346\255\243\350\210\222\344\275\223\";"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 140, 121, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 13pt \"\346\226\271\346\255\243\350\210\222\344\275\223\";"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 230, 291, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 13pt \"\346\226\271\346\255\243\350\210\222\344\275\223\";"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(580, 430, 201, 51));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(580, 370, 201, 51));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(20, 270, 541, 231));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 180, 621, 41));
        textBrowser_2 = new QTextBrowser(centralwidget);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(20, 90, 621, 51));
        nextAnalyseWin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(nextAnalyseWin);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        nextAnalyseWin->setMenuBar(menubar);
        statusbar = new QStatusBar(nextAnalyseWin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        nextAnalyseWin->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(actiondaikai);
        menu_2->addAction(actiongaunhy);

        retranslateUi(nextAnalyseWin);

        QMetaObject::connectSlotsByName(nextAnalyseWin);
    } // setupUi

    void retranslateUi(QMainWindow *nextAnalyseWin)
    {
        nextAnalyseWin->setWindowTitle(QApplication::translate("nextAnalyseWin", "MainWindow", nullptr));
        actiondaikai->setText(QApplication::translate("nextAnalyseWin", "\346\211\223\345\274\200", nullptr));
        actiongaunhy->setText(QApplication::translate("nextAnalyseWin", "\345\205\263\344\272\216\346\210\221\344\273\254", nullptr));
        pushButton->setText(QApplication::translate("nextAnalyseWin", "\351\200\200\345\207\272", nullptr));
        label->setText(QApplication::translate("nextAnalyseWin", "1.\345\210\206\346\236\220\347\273\223\346\236\2341\357\274\232", nullptr));
        label_2->setText(QApplication::translate("nextAnalyseWin", "2.\345\210\206\346\236\220\347\273\223\346\236\2342\357\274\232", nullptr));
        label_3->setText(QApplication::translate("nextAnalyseWin", "3.\345\210\206\346\236\220\347\273\223\346\236\2343\357\274\232(\345\233\276\347\211\207\345\261\225\347\244\272)", nullptr));
        pushButton_2->setText(QApplication::translate("nextAnalyseWin", "\350\277\224\345\233\236\344\270\212\344\270\200\347\272\247", nullptr));
        pushButton_3->setText(QApplication::translate("nextAnalyseWin", "\350\277\224\345\233\236QAQ\344\270\273\351\241\265\351\235\242", nullptr));
        menu->setTitle(QApplication::translate("nextAnalyseWin", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QApplication::translate("nextAnalyseWin", "\345\205\263\344\272\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nextAnalyseWin: public Ui_nextAnalyseWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEXTANALYSEWIN_H

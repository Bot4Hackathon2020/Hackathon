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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QComboBox *comboBox;
    QPushButton *pushButton_3;
    QTextEdit *textEdit;
    QLabel *label;
    QLabel *label_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_3;
    QLabel *label_2;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	background-color: rgb(255, 254, 240);\n"
"	border-image: url(:/picture/back.jpg);\n"
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
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setStyleSheet(QString::fromUtf8("font: 9pt \"\351\273\221\344\275\223\";\n"
""));

        gridLayout->addWidget(comboBox, 6, 0, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 8, 0, 1, 1);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 9, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 13pt \"\346\226\271\346\255\243\350\210\222\344\275\223\";"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 13pt \"\346\226\271\346\255\243\350\210\222\344\275\223\";"));

        gridLayout->addWidget(label_3, 7, 0, 1, 1);

        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setMinimumSize(QSize(91, 0));
        radioButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(radioButton, 1, 0, 1, 1);

        radioButton_3 = new QRadioButton(centralwidget);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(radioButton_3, 3, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 13pt \"\346\226\271\346\255\243\350\210\222\344\275\223\";"));

        gridLayout->addWidget(label_2, 5, 0, 1, 1);

        radioButton_2 = new QRadioButton(centralwidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(radioButton_2, 2, 0, 1, 1);

        radioButton_4 = new QRadioButton(centralwidget);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(radioButton_4, 4, 0, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	background-color: rgb(255, 254, 240);\n"
"	border-image: url(:/new/prefix1/back.jpg);\n"
"}\n"
"\n"
"QLineEdit{\n"
"\n"
"	border:2px solid#7b7b7b;\n"
"	border-radius:15px;\n"
"	background-color:#fffef0\n"
"}\n"
"\n"
"QPushButton{\n"
"	border:2px solid#7b7b7b;\n"
"	border-radius:15px;\n"
"	background-color:#6a92ff;\n"
"	\n"
"	\n"
"	font: 15 16pt \"\345\255\227\351\255\20217\345\217\267-\350\220\214\350\266\243\346\236\234\345\206\273\344\275\223\";\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color:#aa92ff\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#FF90ff\n"
"}\n"
""));

        gridLayout->addWidget(pushButton, 11, 0, 1, 3);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 12, 0, 1, 3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(action);
        menu_2->addAction(action_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QAQ", nullptr));
        action->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        action_2->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216\346\210\221\344\273\254", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "\350\257\267\351\200\211\346\213\251", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "\351\253\230\345\205\264\n"
"", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "\346\204\244\346\200\222\n"
"", nullptr));
        comboBox->setItemText(3, QApplication::translate("MainWindow", "\346\201\220\346\203\247\n"
"", nullptr));
        comboBox->setItemText(4, QApplication::translate("MainWindow", "\346\202\262\345\223\200\n"
"", nullptr));
        comboBox->setItemText(5, QApplication::translate("MainWindow", "\347\235\200\346\200\245\n"
"", nullptr));
        comboBox->setItemText(6, QApplication::translate("MainWindow", "\345\226\234\347\210\261\n"
"", nullptr));
        comboBox->setItemText(7, QApplication::translate("MainWindow", "\346\200\250\346\201\250\n"
"", nullptr));
        comboBox->setItemText(8, QApplication::translate("MainWindow", "\347\203\246\351\227\267\n"
"", nullptr));
        comboBox->setItemText(9, QApplication::translate("MainWindow", "\345\277\247\346\204\201\n"
"", nullptr));
        comboBox->setItemText(10, QApplication::translate("MainWindow", "\346\212\221\351\203\201\n"
"", nullptr));
        comboBox->setItemText(11, QApplication::translate("MainWindow", "\350\207\252\350\261\252\n"
"", nullptr));
        comboBox->setItemText(12, QApplication::translate("MainWindow", "\345\247\224\345\261\210\n"
"", nullptr));
        comboBox->setItemText(13, QApplication::translate("MainWindow", "\347\276\236\346\204\247\n"
"", nullptr));
        comboBox->setItemText(14, QApplication::translate("MainWindow", "\346\207\212\346\202\224\n"
"", nullptr));
        comboBox->setItemText(15, QApplication::translate("MainWindow", "\346\203\212\345\245\207\n"
"", nullptr));
        comboBox->setItemText(16, QApplication::translate("MainWindow", "\350\255\246\350\247\211\n"
"", nullptr));
        comboBox->setItemText(17, QApplication::translate("MainWindow", "\347\226\221\346\203\221\n"
"", nullptr));
        comboBox->setItemText(18, QApplication::translate("MainWindow", "\345\220\214\346\203\205\n"
"", nullptr));
        comboBox->setItemText(19, QApplication::translate("MainWindow", "\346\273\241\346\204\217\n"
"", nullptr));
        comboBox->setItemText(20, QApplication::translate("MainWindow", "\346\225\254\344\275\251\n"
"", nullptr));
        comboBox->setItemText(21, QApplication::translate("MainWindow", "\346\204\237\346\277\200\n"
"", nullptr));
        comboBox->setItemText(22, QApplication::translate("MainWindow", "\346\200\235\345\277\265\n"
"", nullptr));
        comboBox->setItemText(23, QApplication::translate("MainWindow", "\350\275\273\350\224\221\n"
"", nullptr));
        comboBox->setItemText(24, QApplication::translate("MainWindow", "\346\234\237\346\234\233\n"
"", nullptr));
        comboBox->setItemText(25, QApplication::translate("MainWindow", "\345\244\261\346\234\233\n"
"", nullptr));
        comboBox->setItemText(26, QApplication::translate("MainWindow", "\345\255\244\347\213\254\n"
"", nullptr));
        comboBox->setItemText(27, QApplication::translate("MainWindow", "\345\271\263\351\235\231\n"
"", nullptr));
        comboBox->setItemText(28, QApplication::translate("MainWindow", "\351\253\230\346\230\202\n"
"", nullptr));
        comboBox->setItemText(29, QApplication::translate("MainWindow", "\344\275\216\350\220\275\n"
"", nullptr));
        comboBox->setItemText(30, QApplication::translate("MainWindow", "\346\227\240\345\245\210\n"
"", nullptr));

        pushButton_3->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        label->setText(QApplication::translate("MainWindow", "1.\350\257\267\351\200\211\346\213\251\345\210\206\346\236\220\351\234\200\346\261\202", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "3.\350\257\267\350\276\223\345\205\245\351\234\200\350\246\201\345\210\206\346\236\220\347\232\204\346\226\207\347\253\240(\350\257\267\351\200\211\346\213\251.txt\346\240\274\345\274\217\347\232\204\346\226\207\344\273\266)", nullptr));
        radioButton->setText(QApplication::translate("MainWindow", "\345\244\256\345\252\222\346\226\260\351\227\273", nullptr));
        radioButton_3->setText(QApplication::translate("MainWindow", "\350\260\243\350\250\200\347\261\273", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "2.\350\257\267\351\200\211\346\213\251\345\210\206\346\236\220\345\205\263\351\224\256\350\257\215", nullptr));
        radioButton_2->setText(QApplication::translate("MainWindow", "\350\207\252\345\252\222\344\275\223\346\226\260\351\227\273", nullptr));
        radioButton_4->setText(QApplication::translate("MainWindow", "\350\257\204\350\256\272", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "\345\217\226\346\266\210", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

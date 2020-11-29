/********************************************************************************
** Form generated from reading UI file 'qtloinwin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTLOINWIN_H
#define UI_QTLOINWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtLoinWin
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QMainWindow *QtLoinWin)
    {
        if (QtLoinWin->objectName().isEmpty())
            QtLoinWin->setObjectName(QString::fromUtf8("QtLoinWin"));
        QtLoinWin->resize(492, 400);
        QtLoinWin->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	background-color: rgb(255, 254, 240);\n"
"	border-image: url(:/background/back.jpg)\n"
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
"	font: 15 26pt \"Arial\";\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color:#aa92ff\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#FF90ff\n"
"}\n"
""));
        centralWidget = new QWidget(QtLoinWin);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 501, 101));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\255\227\351\255\2027\345\217\267-\346\270\251\346\232\226\347\253\245\347\250\232\344\275\223"));
        font.setPointSize(24);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 24pt \"\345\255\227\351\255\2027\345\217\267-\346\270\251\346\232\226\347\253\245\347\250\232\344\275\223\";"));
        label->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(110, 150, 261, 51));
        lineEdit->setStyleSheet(QString::fromUtf8("font: 9pt \"\351\273\221\344\275\223\";"));
        lineEdit->setCursorMoveStyle(Qt::VisualMoveStyle);
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(110, 210, 261, 51));
        lineEdit_2->setStyleSheet(QString::fromUtf8("font: 9pt \"\351\273\221\344\275\223\";"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 300, 160, 60));
        pushButton->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\255\227\351\255\2027\345\217\267-\346\270\251\346\232\226\347\253\245\347\250\232\344\275\223\";"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 300, 160, 60));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\255\227\351\255\2027\345\217\267-\346\270\251\346\232\226\347\253\245\347\250\232\344\275\223\";"));
        QtLoinWin->setCentralWidget(centralWidget);

        retranslateUi(QtLoinWin);

        QMetaObject::connectSlotsByName(QtLoinWin);
    } // setupUi

    void retranslateUi(QMainWindow *QtLoinWin)
    {
        QtLoinWin->setWindowTitle(QApplication::translate("QtLoinWin", "QtLoinWin", nullptr));
        label->setText(QApplication::translate("QtLoinWin", "\346\254\242\350\277\216\344\275\277\347\224\250QAQ\346\203\205\346\204\237\345\210\206\346\236\220\347\263\273\347\273\237", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("QtLoinWin", "\347\224\250\346\210\267\357\274\232", nullptr));
        lineEdit_2->setPlaceholderText(QApplication::translate("QtLoinWin", "\345\257\206\347\240\201\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("QtLoinWin", "\346\263\250\345\206\214", nullptr));
        pushButton_2->setText(QApplication::translate("QtLoinWin", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtLoinWin: public Ui_QtLoinWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTLOINWIN_H

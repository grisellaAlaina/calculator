/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *pushButton_rev;
    QPushButton *pushButton_per;
    QPushButton *pushButton_div;
    QPushButton *pushButton_7;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_sub;
    QPushButton *pushButton_3;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_add;
    QPushButton *pushButton_0;
    QPushButton *pushButton_eq;
    QPushButton *pushButton_dot;
    QLineEdit *result_show;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_atan;
    QPushButton *pushButton_asin;
    QPushButton *pushButton_acos;
    QPushButton *pushButton_graf;
    QPushButton *pushButton_lb;
    QPushButton *pushButton_rb;
    QPushButton *pushButton_ln;
    QCustomPlot *widget;
    QLineEdit *spin_xy_1;
    QLineEdit *spin_xy_2;
    QLineEdit *spin_result_2;
    QLineEdit *spin_result_1;
    QLineEdit *lineEdit;
    QPushButton *pushButton_x;
    QPushButton *pushButton;
    QPushButton *pushButton_10;
    QLabel *pic1;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1044, 320);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 731, 321));
        pushButton_rev = new QPushButton(groupBox);
        pushButton_rev->setObjectName(QString::fromUtf8("pushButton_rev"));
        pushButton_rev->setGeometry(QRect(60, 26, 60, 55));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(60);
        sizePolicy.setVerticalStretch(60);
        sizePolicy.setHeightForWidth(pushButton_rev->sizePolicy().hasHeightForWidth());
        pushButton_rev->setSizePolicy(sizePolicy);
        pushButton_per = new QPushButton(groupBox);
        pushButton_per->setObjectName(QString::fromUtf8("pushButton_per"));
        pushButton_per->setGeometry(QRect(180, 20, 60, 61));
        sizePolicy.setHeightForWidth(pushButton_per->sizePolicy().hasHeightForWidth());
        pushButton_per->setSizePolicy(sizePolicy);
        pushButton_div = new QPushButton(groupBox);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        pushButton_div->setGeometry(QRect(240, 30, 60, 55));
        sizePolicy.setHeightForWidth(pushButton_div->sizePolicy().hasHeightForWidth());
        pushButton_div->setSizePolicy(sizePolicy);
        pushButton_div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(245, 100, 90);\n"
" color: white;\n"
" border: 1px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x4: 0, y3: 0, x4: 0, y2: 1, stop: 0 #FF7832: 1#FF9739);\n"
"}"));
        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(60, 70, 60, 61));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_mul = new QPushButton(groupBox);
        pushButton_mul->setObjectName(QString::fromUtf8("pushButton_mul"));
        pushButton_mul->setGeometry(QRect(240, 80, 60, 61));
        sizePolicy.setHeightForWidth(pushButton_mul->sizePolicy().hasHeightForWidth());
        pushButton_mul->setSizePolicy(sizePolicy);
        pushButton_mul->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(245, 100, 90);\n"
" color: white;\n"
" border: 1px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x4: 0, y3: 0, x4: 0, y2: 1, stop: 0 #FF7832: 1#FF9739);\n"
"}"));
        pushButton_9 = new QPushButton(groupBox);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(180, 70, 60, 61));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_8 = new QPushButton(groupBox);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(120, 70, 60, 61));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(180, 120, 60, 61));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(60, 120, 60, 61));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(120, 120, 60, 61));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_sub = new QPushButton(groupBox);
        pushButton_sub->setObjectName(QString::fromUtf8("pushButton_sub"));
        pushButton_sub->setGeometry(QRect(240, 130, 60, 61));
        sizePolicy.setHeightForWidth(pushButton_sub->sizePolicy().hasHeightForWidth());
        pushButton_sub->setSizePolicy(sizePolicy);
        pushButton_sub->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(245, 100, 90);\n"
" color: white;\n"
" border: 1px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x4: 0, y3: 0, x4: 0, y2: 1, stop: 0 #FF7832: 1#FF9739);\n"
"}"));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(180, 170, 60, 61));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_1 = new QPushButton(groupBox);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(60, 170, 60, 61));
        sizePolicy.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy);
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 170, 60, 61));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_add = new QPushButton(groupBox);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        pushButton_add->setGeometry(QRect(240, 180, 60, 55));
        sizePolicy.setHeightForWidth(pushButton_add->sizePolicy().hasHeightForWidth());
        pushButton_add->setSizePolicy(sizePolicy);
        pushButton_add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(245, 100, 90);\n"
" color: white;\n"
" border: 1px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x4: 0, y3: 0, x4: 0, y2: 1, stop: 0 #FF7832: 1#FF9739);\n"
"}"));
        pushButton_0 = new QPushButton(groupBox);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(59, 220, 121, 61));
        sizePolicy.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy);
        pushButton_eq = new QPushButton(groupBox);
        pushButton_eq->setObjectName(QString::fromUtf8("pushButton_eq"));
        pushButton_eq->setGeometry(QRect(240, 230, 180, 46));
        sizePolicy.setHeightForWidth(pushButton_eq->sizePolicy().hasHeightForWidth());
        pushButton_eq->setSizePolicy(sizePolicy);
        pushButton_eq->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(245, 100, 90);\n"
" color: white;\n"
" border: 1px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x4: 0, y3: 0, x4: 0, y2: 1, stop: 0 #FF7832: 1#FF9739);\n"
"}"));
        pushButton_dot = new QPushButton(groupBox);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        pushButton_dot->setGeometry(QRect(180, 220, 60, 61));
        sizePolicy.setHeightForWidth(pushButton_dot->sizePolicy().hasHeightForWidth());
        pushButton_dot->setSizePolicy(sizePolicy);
        result_show = new QLineEdit(groupBox);
        result_show->setObjectName(QString::fromUtf8("result_show"));
        result_show->setGeometry(QRect(0, 0, 421, 31));
        result_show->setStyleSheet(QString::fromUtf8(""));
        pushButton_sin = new QPushButton(groupBox);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        pushButton_sin->setGeometry(QRect(300, 80, 60, 51));
        sizePolicy.setHeightForWidth(pushButton_sin->sizePolicy().hasHeightForWidth());
        pushButton_sin->setSizePolicy(sizePolicy);
        pushButton_sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(245, 100, 90);\n"
" color: white;\n"
" border: 1px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x4: 0, y3: 0, x4: 0, y2: 1, stop: 0 #FF7832: 1#FF9739);\n"
"}"));
        pushButton_tan = new QPushButton(groupBox);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
        pushButton_tan->setGeometry(QRect(300, 130, 60, 51));
        sizePolicy.setHeightForWidth(pushButton_tan->sizePolicy().hasHeightForWidth());
        pushButton_tan->setSizePolicy(sizePolicy);
        pushButton_tan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(245, 100, 90);\n"
" color: white;\n"
" border: 1px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x4: 0, y3: 0, x4: 0, y2: 1, stop: 0 #FF7832: 1#FF9739);\n"
"}"));
        pushButton_mod = new QPushButton(groupBox);
        pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
        pushButton_mod->setGeometry(QRect(300, 180, 60, 51));
        sizePolicy.setHeightForWidth(pushButton_mod->sizePolicy().hasHeightForWidth());
        pushButton_mod->setSizePolicy(sizePolicy);
        pushButton_mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(245, 100, 90);\n"
" color: white;\n"
" border: 1px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x4: 0, y3: 0, x4: 0, y2: 1, stop: 0 #FF7832: 1#FF9739);\n"
"}"));
        pushButton_cos = new QPushButton(groupBox);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        pushButton_cos->setGeometry(QRect(300, 30, 60, 51));
        sizePolicy.setHeightForWidth(pushButton_cos->sizePolicy().hasHeightForWidth());
        pushButton_cos->setSizePolicy(sizePolicy);
        pushButton_cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(245, 100, 90);\n"
" color: white;\n"
" border: 1px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x4: 0, y3: 0, x4: 0, y2: 1, stop: 0 #FF7832: 1#FF9739);\n"
"}"));
        pushButton_sqrt = new QPushButton(groupBox);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
        pushButton_sqrt->setGeometry(QRect(360, 180, 60, 51));
        sizePolicy.setHeightForWidth(pushButton_sqrt->sizePolicy().hasHeightForWidth());
        pushButton_sqrt->setSizePolicy(sizePolicy);
        pushButton_sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(245, 100, 90);\n"
" color: white;\n"
" border: 1px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x4: 0, y3: 0, x4: 0, y2: 1, stop: 0 #FF7832: 1#FF9739);\n"
"}"));
        pushButton_atan = new QPushButton(groupBox);
        pushButton_atan->setObjectName(QString::fromUtf8("pushButton_atan"));
        pushButton_atan->setGeometry(QRect(360, 130, 60, 51));
        sizePolicy.setHeightForWidth(pushButton_atan->sizePolicy().hasHeightForWidth());
        pushButton_atan->setSizePolicy(sizePolicy);
        pushButton_atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(245, 100, 90);\n"
" color: white;\n"
" border: 1px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x4: 0, y3: 0, x4: 0, y2: 1, stop: 0 #FF7832: 1#FF9739);\n"
"}"));
        pushButton_asin = new QPushButton(groupBox);
        pushButton_asin->setObjectName(QString::fromUtf8("pushButton_asin"));
        pushButton_asin->setGeometry(QRect(360, 80, 60, 51));
        sizePolicy.setHeightForWidth(pushButton_asin->sizePolicy().hasHeightForWidth());
        pushButton_asin->setSizePolicy(sizePolicy);
        pushButton_asin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(245, 100, 90);\n"
" color: white;\n"
" border: 1px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x4: 0, y3: 0, x4: 0, y2: 1, stop: 0 #FF7832: 1#FF9739);\n"
"}"));
        pushButton_acos = new QPushButton(groupBox);
        pushButton_acos->setObjectName(QString::fromUtf8("pushButton_acos"));
        pushButton_acos->setGeometry(QRect(360, 30, 60, 51));
        sizePolicy.setHeightForWidth(pushButton_acos->sizePolicy().hasHeightForWidth());
        pushButton_acos->setSizePolicy(sizePolicy);
        pushButton_acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(245, 100, 90);\n"
" color: white;\n"
" border: 1px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x4: 0, y3: 0, x4: 0, y2: 1, stop: 0 #FF7832: 1#FF9739);\n"
"}"));
        pushButton_graf = new QPushButton(groupBox);
        pushButton_graf->setObjectName(QString::fromUtf8("pushButton_graf"));
        pushButton_graf->setGeometry(QRect(0, 220, 60, 61));
        sizePolicy.setHeightForWidth(pushButton_graf->sizePolicy().hasHeightForWidth());
        pushButton_graf->setSizePolicy(sizePolicy);
        pushButton_lb = new QPushButton(groupBox);
        pushButton_lb->setObjectName(QString::fromUtf8("pushButton_lb"));
        pushButton_lb->setGeometry(QRect(0, 70, 60, 61));
        sizePolicy.setHeightForWidth(pushButton_lb->sizePolicy().hasHeightForWidth());
        pushButton_lb->setSizePolicy(sizePolicy);
        pushButton_rb = new QPushButton(groupBox);
        pushButton_rb->setObjectName(QString::fromUtf8("pushButton_rb"));
        pushButton_rb->setGeometry(QRect(0, 120, 60, 61));
        sizePolicy.setHeightForWidth(pushButton_rb->sizePolicy().hasHeightForWidth());
        pushButton_rb->setSizePolicy(sizePolicy);
        pushButton_ln = new QPushButton(groupBox);
        pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
        pushButton_ln->setGeometry(QRect(0, 170, 60, 61));
        sizePolicy.setHeightForWidth(pushButton_ln->sizePolicy().hasHeightForWidth());
        pushButton_ln->setSizePolicy(sizePolicy);
        widget = new QCustomPlot(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(420, 0, 301, 271));
        spin_xy_1 = new QLineEdit(groupBox);
        spin_xy_1->setObjectName(QString::fromUtf8("spin_xy_1"));
        spin_xy_1->setGeometry(QRect(430, 280, 41, 21));
        spin_xy_2 = new QLineEdit(groupBox);
        spin_xy_2->setObjectName(QString::fromUtf8("spin_xy_2"));
        spin_xy_2->setGeometry(QRect(480, 280, 41, 21));
        spin_result_2 = new QLineEdit(groupBox);
        spin_result_2->setObjectName(QString::fromUtf8("spin_result_2"));
        spin_result_2->setGeometry(QRect(670, 280, 41, 21));
        spin_result_1 = new QLineEdit(groupBox);
        spin_result_1->setObjectName(QString::fromUtf8("spin_result_1"));
        spin_result_1->setGeometry(QRect(630, 280, 41, 21));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(2, 40, 51, 31));
        pushButton_x = new QPushButton(groupBox);
        pushButton_x->setObjectName(QString::fromUtf8("pushButton_x"));
        pushButton_x->setGeometry(QRect(120, 25, 60, 55));
        sizePolicy.setHeightForWidth(pushButton_x->sizePolicy().hasHeightForWidth());
        pushButton_x->setSizePolicy(sizePolicy);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 290, 100, 32));
        pushButton_10 = new QPushButton(groupBox);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(140, 290, 100, 32));
        pic1 = new QLabel(centralwidget);
        pic1->setObjectName(QString::fromUtf8("pic1"));
        pic1->setGeometry(QRect(730, 0, 311, 321));
        pic1->setPixmap(QPixmap(QString::fromUtf8("pic/2.png")));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        pushButton_rev->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_per->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_eq->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        result_show->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        pushButton_mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        pushButton_atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        pushButton_asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        pushButton_acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        pushButton_graf->setText(QCoreApplication::translate("MainWindow", "GRAF", nullptr));
        pushButton_lb->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton_rb->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        spin_xy_1->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        spin_xy_2->setText(QCoreApplication::translate("MainWindow", "-10", nullptr));
        spin_result_2->setText(QCoreApplication::translate("MainWindow", "-10", nullptr));
        spin_result_1->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        pushButton_x->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "credit", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "deposit", nullptr));
        pic1->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

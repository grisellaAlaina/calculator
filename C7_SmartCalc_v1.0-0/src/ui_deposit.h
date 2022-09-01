/********************************************************************************
** Form generated from reading UI file 'deposit.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOSIT_H
#define UI_DEPOSIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_deposit
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *dep;
    QLineEdit *procent;
    QLineEdit *time;
    QLabel *label_4;
    QLineEdit *res_sum;
    QPushButton *pushButton;
    QLabel *label_5;
    QLineEdit *res_procent;
    QLabel *pic;

    void setupUi(QDialog *deposit)
    {
        if (deposit->objectName().isEmpty())
            deposit->setObjectName(QString::fromUtf8("deposit"));
        deposit->resize(644, 540);
        label = new QLabel(deposit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 50, 111, 16));
        label_2 = new QLabel(deposit);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 80, 111, 16));
        label_3 = new QLabel(deposit);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 110, 111, 16));
        dep = new QLineEdit(deposit);
        dep->setObjectName(QString::fromUtf8("dep"));
        dep->setGeometry(QRect(190, 50, 113, 21));
        procent = new QLineEdit(deposit);
        procent->setObjectName(QString::fromUtf8("procent"));
        procent->setGeometry(QRect(190, 80, 113, 21));
        time = new QLineEdit(deposit);
        time->setObjectName(QString::fromUtf8("time"));
        time->setGeometry(QRect(190, 110, 113, 21));
        label_4 = new QLabel(deposit);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(340, 50, 111, 16));
        res_sum = new QLineEdit(deposit);
        res_sum->setObjectName(QString::fromUtf8("res_sum"));
        res_sum->setGeometry(QRect(520, 50, 113, 21));
        pushButton = new QPushButton(deposit);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(220, 150, 181, 32));
        label_5 = new QLabel(deposit);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(340, 80, 111, 16));
        res_procent = new QLineEdit(deposit);
        res_procent->setObjectName(QString::fromUtf8("res_procent"));
        res_procent->setGeometry(QRect(520, 80, 113, 21));
        pic = new QLabel(deposit);
        pic->setObjectName(QString::fromUtf8("pic"));
        pic->setGeometry(QRect(30, 180, 591, 371));
        pic->setPixmap(QPixmap(QString::fromUtf8("pic/3.png")));

        retranslateUi(deposit);

        QMetaObject::connectSlotsByName(deposit);
    } // setupUi

    void retranslateUi(QDialog *deposit)
    {
        deposit->setWindowTitle(QCoreApplication::translate("deposit", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("deposit", "\320\241\321\203\320\274\320\274\320\260 \320\264\320\265\320\277\320\276\320\267\320\270\321\202\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("deposit", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\321\213", nullptr));
        label_3->setText(QCoreApplication::translate("deposit", "\320\241\321\200\320\276\320\272", nullptr));
        label_4->setText(QCoreApplication::translate("deposit", "\320\270\321\202\320\276\320\263\320\276\320\262\320\260\321\217 \321\201\321\203\320\274\320\274\320\260", nullptr));
        pushButton->setText(QCoreApplication::translate("deposit", "\320\277\320\276\320\264\320\272\320\270\320\275\321\214 \320\261\320\260\320\261\320\273\320\260 \320\262 \320\261\320\260\321\201\321\201\320\265\320\271\320\275", nullptr));
        label_5->setText(QCoreApplication::translate("deposit", "\321\207\320\270\321\201\321\202\320\276 \320\272\320\260\320\277\320\270\321\210", nullptr));
        pic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class deposit: public Ui_deposit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPOSIT_H

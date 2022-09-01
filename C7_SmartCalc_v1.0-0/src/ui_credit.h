/********************************************************************************
** Form generated from reading UI file 'credit.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDIT_H
#define UI_CREDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_credit
{
public:
    QPushButton *pushButton;
    QLineEdit *sum;
    QLineEdit *procent;
    QLineEdit *data;
    QLineEdit *result;
    QLineEdit *procent_res;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *pic;

    void setupUi(QDialog *credit)
    {
        if (credit->objectName().isEmpty())
            credit->setObjectName(QString::fromUtf8("credit"));
        credit->resize(566, 562);
        pushButton = new QPushButton(credit);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 130, 181, 71));
        sum = new QLineEdit(credit);
        sum->setObjectName(QString::fromUtf8("sum"));
        sum->setGeometry(QRect(190, 50, 311, 21));
        procent = new QLineEdit(credit);
        procent->setObjectName(QString::fromUtf8("procent"));
        procent->setGeometry(QRect(190, 80, 311, 21));
        data = new QLineEdit(credit);
        data->setObjectName(QString::fromUtf8("data"));
        data->setGeometry(QRect(190, 110, 311, 21));
        result = new QLineEdit(credit);
        result->setObjectName(QString::fromUtf8("result"));
        result->setGeometry(QRect(190, 200, 311, 21));
        procent_res = new QLineEdit(credit);
        procent_res->setObjectName(QString::fromUtf8("procent_res"));
        procent_res->setGeometry(QRect(190, 220, 311, 21));
        label = new QLabel(credit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 220, 121, 16));
        label_2 = new QLabel(credit);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 200, 58, 16));
        label_3 = new QLabel(credit);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 60, 58, 16));
        label_4 = new QLabel(credit);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 80, 58, 16));
        label_5 = new QLabel(credit);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(70, 100, 58, 16));
        pic = new QLabel(credit);
        pic->setObjectName(QString::fromUtf8("pic"));
        pic->setGeometry(QRect(50, 240, 551, 321));
        pic->setPixmap(QPixmap(QString::fromUtf8("pic/1.png")));

        retranslateUi(credit);

        QMetaObject::connectSlotsByName(credit);
    } // setupUi

    void retranslateUi(QDialog *credit)
    {
        credit->setWindowTitle(QCoreApplication::translate("credit", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("credit", "\321\200\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \320\272\320\260\320\261\320\260\320\273\321\203", nullptr));
        label->setText(QCoreApplication::translate("credit", "\320\241\321\203\320\274\320\274\320\260 \320\277\320\265\321\200\320\265\320\277\320\273\320\260\321\202\321\213", nullptr));
        label_2->setText(QCoreApplication::translate("credit", "\320\237\320\273\320\260\321\202\320\265\320\266", nullptr));
        label_3->setText(QCoreApplication::translate("credit", "\320\241\321\203\320\274\320\274\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("credit", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202", nullptr));
        label_5->setText(QCoreApplication::translate("credit", "\320\241\321\200\320\276\320\272", nullptr));
        pic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class credit: public Ui_credit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDIT_H

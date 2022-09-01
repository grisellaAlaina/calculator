#include "credit.h"
#include "ui_credit.h"
#include <QPixmap>

credit::credit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::credit)
{
    ui->setupUi(this);
    QPixmap pix(":/pic/pic/1.png");
    int w = ui->pic->width();
    int h = ui->pic->height();

    ui->pic->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

credit::~credit()
{
    delete ui;
}

void credit::on_pushButton_clicked()
{
    int sum_credit = 0;
        int procent_credit = 0;
        int time_credit = 0;
        int result_credit = 0;
        int result_procent = 0;

        sum_credit = ui->sum->text().toInt();
        procent_credit = ui->procent->text().toInt();
        time_credit = ui->data->text().toInt();

        QString q_result_credit = "";
        QString q_result_procent = "";
        if (ui->sum->text() != "" && ui->procent->text() != "" && ui->data->text() != "") {
            result_procent = (((sum_credit/100)*procent_credit)/12)*time_credit;
            result_credit = (sum_credit/time_credit)+(result_procent/time_credit);
            q_result_credit = QString::number(result_credit);
            q_result_procent = QString::number(result_procent);
            ui->procent_res->setText(q_result_procent);
            ui->result->setText(q_result_credit);
        }
}


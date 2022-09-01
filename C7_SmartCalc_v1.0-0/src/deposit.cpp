#include "deposit.h"
#include "ui_deposit.h"
#include <QPixmap>

deposit::deposit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deposit)
{
    ui->setupUi(this);

    QPixmap pix(":/pic/pic/3.png");
    int w = ui->pic->width();
    int h = ui->pic->height();

    ui->pic->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

deposit::~deposit()
{
    delete ui;
}

void deposit::on_pushButton_clicked()
{
    int sum_dep = 0;  // сумма депозита
        int procent_dep= 0;  // проценты по вкладу
        int time_dep = 0;  // срок вклада
        int result_dep = 0;
        int result_procent_dep = 0;

        sum_dep = ui->dep->text().toInt();
        procent_dep = ui->procent->text().toInt();
        time_dep = ui->time->text().toInt();

        QString q_result_dep = "";
        QString q_result_procent_dep = "";

        result_procent_dep = (((sum_dep/100)*procent_dep)/12)*time_dep;
        result_dep = result_procent_dep + sum_dep;

        q_result_procent_dep = QString::number(result_procent_dep);
        q_result_dep = QString::number(result_dep);

        ui->res_procent->setText(q_result_procent_dep);
        ui->res_sum->setText(q_result_dep);
}


#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "credit.h"
#include "deposit.h"
#include <QPixmap>


int dotflag = 0;
int digflag = 0;
int numflag = 0;
int trinflag = 0;
int lbflag = 0;
int rbflag = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/pic/pic/2.png");
    int w = ui->pic1->width();
        int h = ui->pic1->height();
        ui->pic1->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));



    connect(ui->pushButton_0,SIGNAL(clicked()),this,SLOT(digit_numbers()));
    connect(ui->pushButton_1,SIGNAL(clicked()),this,SLOT(digit_numbers()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(digit_numbers()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(digit_numbers()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(digit_numbers()));
    connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(digit_numbers()));
    connect(ui->pushButton_6,SIGNAL(clicked()),this,SLOT(digit_numbers()));
    connect(ui->pushButton_7,SIGNAL(clicked()),this,SLOT(digit_numbers()));
    connect(ui->pushButton_8,SIGNAL(clicked()),this,SLOT(digit_numbers()));
    connect(ui->pushButton_9,SIGNAL(clicked()),this,SLOT(digit_numbers()));
    connect(ui->pushButton_add,SIGNAL(clicked()),this,SLOT(digit()));
    connect(ui->pushButton_sub,SIGNAL(clicked()),this,SLOT(digit()));
    connect(ui->pushButton_div,SIGNAL(clicked()),this,SLOT(digit()));
    connect(ui->pushButton_per,SIGNAL(clicked()),this,SLOT(digit()));
    connect(ui->pushButton_mul,SIGNAL(clicked()),this,SLOT(digit()));
    connect(ui->pushButton_cos,SIGNAL(clicked()),this,SLOT(trin()));
    connect(ui->pushButton_sin,SIGNAL(clicked()),this,SLOT(trin()));
    connect(ui->pushButton_tan,SIGNAL(clicked()),this,SLOT(trin()));
    connect(ui->pushButton_ln,SIGNAL(clicked()),this,SLOT(trin()));
    connect(ui->pushButton_acos,SIGNAL(clicked()),this,SLOT(trin()));
    connect(ui->pushButton_asin,SIGNAL(clicked()),this,SLOT(trin()));
    connect(ui->pushButton_atan,SIGNAL(clicked()),this,SLOT(trin()));
    connect(ui->pushButton_mod,SIGNAL(clicked()),this,SLOT(digit()));
    connect(ui->pushButton_sqrt,SIGNAL(clicked()),this,SLOT(trin()));
    ui->result_show->setReadOnly(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digit()
{
    if(ui->result_show->text() == '0') ui->result_show->setText("");
  if(digflag == 0) {
    QPushButton *button = (QPushButton *)sender();

    QString numbers;

    numbers = (ui->result_show->text() + button->text());

    ui->result_show->setText(numbers);
    dotflag = 0;
    digflag = 1;
    numflag = 1;
    trinflag = 0;
}
}

void MainWindow::trin()
{
    if(ui->result_show->text() == '0') ui->result_show->setText("");
    if(dotflag == 0 && trinflag == 0 && rbflag == 0) {
    QPushButton *button = (QPushButton *)sender();

    QString numbers;

    numbers = (ui->result_show->text() + button->text() + "(");

    ui->result_show->setText(numbers);

    dotflag = 0;
    digflag = 0;
    numflag = 1;
    lbflag += 1;
} else if (dotflag == 0 && (trinflag == 1 || rbflag == 1)) {
    QPushButton *button = (QPushButton *)sender();

    QString numbers;

    numbers = (ui->result_show->text() + "*" + button->text() + "(");

    ui->result_show->setText(numbers);

    dotflag = 0;
    digflag = 0;
    numflag = 1;
    lbflag += 1;
}
}


void MainWindow::digit_numbers()
{
if(ui->result_show->text() == '0') ui->result_show->setText("");
    QPushButton *button = (QPushButton *)sender();

    QString numbers;

    numbers = (ui->result_show->text() + button->text());

    ui->result_show->setText(numbers);

    digflag = 0;
    numflag = 0;
    trinflag = 1;

}


void MainWindow::on_pushButton_dot_clicked()
{
    if(dotflag == 0 && numflag == 0) {
            ui->result_show->setText(ui->result_show->text() + ".");
            dotflag = 1;
            numflag = 1;
    }
}


void MainWindow::on_pushButton_rb_clicked()
{
    if(lbflag > 0) {
        ui->result_show->setText(ui->result_show->text() + ")");
        lbflag -= 1;
        rbflag = 1;
    }
}


void MainWindow::on_pushButton_lb_clicked()
{
    if(ui->result_show->text() == '0') ui->result_show->setText("");
     ui->result_show->setText(ui->result_show->text() + "(");
     lbflag += 1;
}


void MainWindow::on_pushButton_rev_clicked()
{
     ui->result_show->setText("0");
}

void MainWindow::on_pushButton_eq_clicked() {
    double x = 0;
    QPushButton *button = (QPushButton *)sender();
    button->setChecked(true);
    QString send = ui->result_show->text();
    QByteArray ba = send.toLocal8Bit();
    char* buf = ba.data();

    if (ui->lineEdit->text() != "") {
        x = (ui->lineEdit->text().toDouble());
    }

    QString toStr = QString::number(input_parsing(buf, x), 'g', 15);
    ui->result_show->setText(toStr);
}




void MainWindow::on_pushButton_graf_clicked()
{
    QString send = ui->result_show->text();
    QByteArray ba = send.toLocal8Bit();
    char* buf = ba.data();
    ui->widget->clearGraphs();
    x.clear();
    y.clear();
    result_1 = 0;
    result_2 = 0;
    xBegin = 0;
    xEnd = 0;
    h = 0.1;

    X = ui->lineEdit->text().toDouble();

    xy_1 = ui->spin_xy_1->text().toDouble();
    xy_2 = ui->spin_xy_2->text().toDouble();
    result_1 = ui->spin_result_1->text().toInt();
    result_2 = ui->spin_result_2->text().toInt();

    xBegin = result_2;
    xEnd = result_1 + h;

    ui->widget->xAxis->setRange(xy_2, xy_1);
    ui->widget->yAxis->setRange(xy_2, xy_1);
    N = (xEnd - xBegin)/h + 2;

    for (X = xBegin; X <= xEnd; X+=h) {
        x.push_back(X);
        y.push_back(input_parsing(buf, X));
    }

    ui->widget->addGraph();
    ui->widget->graph(0)->addData(x, y);
    ui->widget->replot();
}


void MainWindow::on_pushButton_x_clicked()
{

    ui->result_show->setText(ui->result_show->text() + "x");
}


void MainWindow::on_pushButton_clicked()
{
    credit window;
        window.setModal(true);
        window.exec();
}


void MainWindow::on_pushButton_10_clicked()
{
    deposit window;
        window.setModal(true);
        window.exec();
}


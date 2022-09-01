#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QTimer>
#include <QtMath>

#ifdef __cplusplus
extern "C"{
#endif
    #include "s21_smart_calc.h"
#ifdef __cplusplus
}
#endif

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    double xBegin, xEnd, h, X, xy_1, xy_2, result_1, result_2;;
    int N;

    QVector<double> x, y;

private slots:
    void digit_numbers();
    void digit();
    void trin();
    void on_pushButton_dot_clicked();
    void on_pushButton_rb_clicked();
    void on_pushButton_lb_clicked();
    void on_pushButton_rev_clicked();
    void on_pushButton_eq_clicked();

    void on_pushButton_graf_clicked();
    void on_pushButton_x_clicked();
    void on_pushButton_clicked();
    void on_pushButton_10_clicked();
};
#endif // MAINWINDOW_H

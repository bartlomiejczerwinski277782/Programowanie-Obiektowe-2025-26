#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_addButton_clicker(){
    double a= ui->lineEditA->text().toDouble();
    double b= ui->lineEditB->text().toDouble();
    double resulte = calc.add(a,b);
    ui->resulteLabel->setText(QString::number(resulte));
}
void MainWindow::on_subButton_clicker(){
    double a= ui->lineEditA->text().toDouble();
    double b= ui->lineEditB->text().toDouble();
    double resulte = calc.sub(a,b);
    ui->resulteLabel->setText(QString::number(resulte));
}
void MainWindow::on_mulButton_clicker(){
    double a= ui->lineEditA->text().toDouble();
    double b= ui->lineEditB->text().toDouble();
    double resulte = calc.mul(a,b);
    ui->resulteLabel->setText(QString::number(resulte));
}
void MainWindow::on_divButton_clicker(){
    double a= ui->lineEditA->text().toDouble();
    double b= ui->lineEditB->text().toDouble();
    double resulte = calc.div(a,b);
    ui->resulteLabel->setText(QString::number(resulte));
}
void MainWindow::on_modButton_clicker(){
    double a= ui->lineEditA->text().toDouble();
    double b= ui->lineEditB->text().toDouble();
    double resulte = calc.mod(a,b);
    ui->resulteLabel->setText(QString::number(resulte));
}
void MainWindow::on_clearButton_clicked() {
    calc.erase();
    ui->lineEditA->clear();
    ui->lineEditB->clear();
    ui->resultLabel->clear();
}





}

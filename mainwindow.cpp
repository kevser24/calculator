#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>
#include <math.h>

float ilksayi = 0;
QString islem = "";

float topla(float a, float b) {
    return a + b;
}
float cikar(float a, float b) {
    return a - b;
}
float bol(float a, float b) {
    if(b == 0) {
        printf("payda sifir olamaz gecersiz sayi!");
        return 0;
    }
    return a / b;
}
float carp(float a, float b) {
    return a * b;
}
int faktoriyel(int n) {
    int sonuc = 1;
    for(int i = 1 ; i <= n ; i++) {
        sonuc *= i;
    }
    return sonuc;
}
float us( float a, float b) {

    return pow(a, b);
}


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     ui->display->setAlignment(Qt::AlignRight);
}

MainWindow::~MainWindow()
{
    delete ui;
}
//islem butonları

void MainWindow::on_btn_plus_clicked()
{
ilksayi = ui->display->text().toFloat();

islem = "+";

ui->display->setText(ui->display->text() + " + ");
}

void MainWindow::on_btn_sub_clicked()
{
    ilksayi = ui->display->text().toFloat();
    islem = "-";
    ui->display->setText(ui->display->text() + " - ");
}

void MainWindow::on_btn_mul_clicked()
{
    ilksayi = ui->display->text().toFloat();
    islem = "*";
    ui->display->setText(ui->display->text() + " x ");
}
void MainWindow::on_btn_div_clicked()
{
    ilksayi = ui->display->text().toFloat();
    islem = "/";
    ui->display->setText(ui->display->text() + " / ");

}
void MainWindow::on_btn_us_clicked()
{
    ilksayi = ui->display->text().toFloat();
    islem = "^";
    ui->display->setText(ui->display->text() + " ^ ");
}

void MainWindow::on_btn_fac_clicked()
{
   ilksayi =  ui->display->text().toFloat();
    islem = "!";
    ui->display->setText(ui->display->text() + "!");
}



void MainWindow::on_btn_equal_clicked()
{
    float ikincisayi = 0;

    if (islem != "!") {
        QString text = ui->display->text();
        QStringList parcalar = text.split(" ");
        if (parcalar.size() >=3) {
            ikincisayi = parcalar.last().toFloat();
        }
    }
    float sonuc = 0;

    if(islem == "+") {
        sonuc = topla(ilksayi, ikincisayi);
    }
    else if (islem == "-") {
        sonuc = cikar(ilksayi, ikincisayi);
    }
    else if (islem == "*") {
        sonuc = carp(ilksayi, ikincisayi);
    }
    else if (islem == "/") {
        sonuc = bol(ilksayi, ikincisayi);
    }
    else if (islem == "^") {
        sonuc = us(ilksayi, ikincisayi);
    }
    else if (islem == "!") {
        sonuc = faktoriyel((int)ilksayi);
    }
    ui->display->setText(QString::number(sonuc));
}


void MainWindow::on_btn_clear_clicked()
{
    ui->display->clear();
    ilksayi = 0;
    islem = "";
}










void MainWindow::on_btn_0_clicked()
{
    ui->display->setText(ui->display->text() + "0");
}


void MainWindow::on_btn_1_clicked()
{
    ui->display->setText(ui->display->text() + "1");
}




void MainWindow::on_btn_2_clicked()
{
    ui->display->setText(ui->display->text() + "2");
}


void MainWindow::on_btn_3_clicked()
{
    ui->display->setText(ui->display->text() + "3");
}


void MainWindow::on_btn_4_clicked()
{
    ui->display->setText(ui->display->text() + "4");
}


void MainWindow::on_btn_5_clicked()
{
    ui->display->setText(ui->display->text() + "5");
}


void MainWindow::on_btn_6_clicked()
{
    ui->display->setText(ui->display->text() + "6");
}


void MainWindow::on_btn_7_clicked()
{
    ui->display->setText(ui->display->text() + "7");
}


void MainWindow::on_btn_8_clicked()
{
    ui->display->setText(ui->display->text() + "8");
}


void MainWindow::on_btn_9_clicked()
{
    ui->display->setText(ui->display->text() + "9");
}



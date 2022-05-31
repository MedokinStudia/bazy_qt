#include "tabele.h"
#include "ui_tabele.h"
#include "mainwindow.h"
#include "interfejs_kierownika.h"

tabele::tabele(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tabele)
{
    ui->setupUi(this);
}

tabele::~tabele()
{
    delete ui;
}

void tabele::on_pushButton_wyloguj_clicked()
{
    close();
    QWidget *mainwindow=new MainWindow;
    mainwindow->show();
}


void tabele::on_pushButton_wroc_clicked()
{
    close();
    QWidget *interfejs_kierownika=new Interfejs_kierownika;
    interfejs_kierownika->show();
}


void tabele::on_pushButton_wyjdz_clicked()
{
    close();
}


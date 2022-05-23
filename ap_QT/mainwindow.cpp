#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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


void MainWindow::changeWindow()
{
    if(!interfejs_kierownik->isVisible())
    {
        interfejs_kierownik->hide();
        this->show();
    }
    else
    {
        this->hide();
        interfejs_kierownik->show();
    }
}

void MainWindow::on_pushButton_clicked()
{
    QString login = ui->lineEdit_login->text();
    QString haslo = ui-> lineEdit_haslo->text();
    if(login == "kierownik" && haslo == "123")
    {
        interfejs_kierownik=new Interfejs_kierownika(this);
        hide();
        interfejs_kierownik->show();
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    close();
}



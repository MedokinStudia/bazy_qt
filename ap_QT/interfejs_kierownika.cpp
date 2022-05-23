#include "interfejs_kierownika.h"
#include "ui_interfejs_kierownika.h"

Interfejs_kierownika::Interfejs_kierownika(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Interfejs_kierownika)
{
    ui->setupUi(this);
}

Interfejs_kierownika::~Interfejs_kierownika()
{
    delete ui;
}

void Interfejs_kierownika::on_pushButton_2_clicked()
{
    close();
}


void Interfejs_kierownika::on_pushButton_clicked()
{
    //wyloguj i pokaz logowanie
}


void Interfejs_kierownika::on_pushButton_3_pressed()
{

}


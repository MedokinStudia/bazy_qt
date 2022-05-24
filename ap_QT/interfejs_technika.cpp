#include "interfejs_technika.h"
#include "ui_interfejs_technika.h"
#include <QMessageBox>

Interfejs_Technika::Interfejs_Technika(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Interfejs_Technika)
{
    ui->setupUi(this);
}

Interfejs_Technika::~Interfejs_Technika()
{
    delete ui;
}

void Interfejs_Technika::on_pushButton_2_clicked()
{
    close();
}


void Interfejs_Technika::on_pushButton_5_clicked()
{
    QString ID = ui->lineEdit_ID->text();
    QString Status = ui->lineEdit_Status->text();
    QString Stan = ui->lineEdit_Stan->text();
    QString Opis = ui->lineEdit_Opis->text();
    QString Cena = ui->lineEdit_Cena->text();

    if(ID == "1" && Status == "1" && Stan == "1" && Cena == "100")
        QMessageBox::information(this,"Informacja","Poprawnie zmodyfikowano wskazany egzemplarz");
    else
        QMessageBox::information(this,"Informacja","Błąd modyfikacji wskazanego egzemplarza");
}


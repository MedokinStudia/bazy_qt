#include "interfejs_magazyniera.h"
#include "ui_interfejs_magazyniera.h"
#include <QMessageBox>

Interfejs_magazyniera::Interfejs_magazyniera(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Interfejs_magazyniera)
{
    ui->setupUi(this);
}

Interfejs_magazyniera::~Interfejs_magazyniera()
{
    delete ui;
}

void Interfejs_magazyniera::on_pushButton_2_clicked()
{
    close();
}


void Interfejs_magazyniera::on_pushButton_8_clicked()
{
    QString ID_Egz = ui->lineEdit_ID_Egzempalrza->text();
    QString ID_Gry = ui->lineEdit_ID_Gry->text();
    QString Cena = ui->lineEdit_Cena->text();
    QString Platforma = ui->lineEdit_Platforma->text();
    QString Status = ui->lineEdit_Status->text();
    QString Stan = ui->lineEdit_Stan->text();
    QString Ilosc_sztuk = ui->lineEdit_Ilosc_sztuk->text();


    if(ID_Egz == "1" && ID_Gry == "1" && Cena == "100" && Platforma == "1" && Status == "1" && Stan == "1" && Ilosc_sztuk == "1")
        QMessageBox::information(this,"Informacja","Poprawnie dodano");
    else
        QMessageBox::information(this,"Informacja","Błąd przy dodawaniu");
}


void Interfejs_magazyniera::on_pushButton_6_clicked()
{
    QString ID_Egz = ui->lineEdit_ID_Egzempalrza->text();

    if(ID_Egz == "1")
        QMessageBox::information(this,"Informacja","Poprawnie usunięto");
    else
        QMessageBox::information(this,"Informacja","Błąd przy usuwaniu");
}


void Interfejs_magazyniera::on_pushButton_7_clicked()
{
    QString ID_Gry = ui->lineEdit_ID_Gry_2->text();
    QString Tytul = ui->lineEdit_Tytul->text();
    QString Wydawca = ui->lineEdit_Wydawca->text();
    QString Gatunek = ui->lineEdit_Gatunek->text();
    QString Pegi = ui->lineEdit_PEGI->text();
    QString Rok_wydania = ui->lineEdit_Rok_Wydania->text();


    if(ID_Gry == "1" && Tytul == "1" && Wydawca== "1" && Gatunek == "1" && Pegi == "1" && Rok_wydania == "1")
        QMessageBox::information(this,"Informacja","Poprawnie dodano");
    else
        QMessageBox::information(this,"Informacja","Błąd przy dodawaniu");
}


void Interfejs_magazyniera::on_pushButton_5_clicked()
{
    QString ID_Gry = ui->lineEdit_ID_Gry_2->text();
    if(ID_Gry == "1")
        QMessageBox::information(this,"Informacja","Poprawnie usunieto");
    else
        QMessageBox::information(this,"Informacja","Błąd przy usuwaniu");
}


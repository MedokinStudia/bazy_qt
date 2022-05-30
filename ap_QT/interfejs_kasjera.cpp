#include "interfejs_kasjera.h"
#include "ui_interfejs_kasjera.h"
#include "mainwindow.h"
#include <QMessageBox>

Interfejs_kasjera::Interfejs_kasjera(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Interfejs_kasjera)
{
    ui->setupUi(this);
}

Interfejs_kasjera::~Interfejs_kasjera()
{
    delete ui;
}

void Interfejs_kasjera::on_pushButton_15_clicked()
{
    close();
}

void Interfejs_kasjera::on_pushButton_14_clicked()
{
    close();
    QWidget *mainwindow=new MainWindow;
    mainwindow->show();
}

void Interfejs_kasjera::on_pushButton_11_clicked()
{
    QString ID_Transakcji = ui->lineEdit_IDTransakcji->text();
    QString Tytul = ui->lineEdit_Tytul->text();
    QString ID_Egzemplarza = ui->lineEdit_IDEgzemplarza->text();
    QString Gatunek = ui->lineEdit_Gatunek->text();
    QString Pegi = ui->lineEdit_Pegi->text();
    QString Rok_wydania = ui->lineEdit_RokWydania->text();
    QString Kwota = ui->lineEdit_Kwota->text();


    if(ID_Transakcji.size()>0 && Tytul.size()>0 && ID_Egzemplarza.size()>0 && Gatunek.size()>0 && Pegi.size()>0 && Rok_wydania.size()>0&&Kwota.size()>0)

    {
    switch( QMessageBox::question(
                this,
                tr("Potwierdzenie"),
                tr("Czy na pewno chcesz potwierdzić sprzedaż"),

                QMessageBox::Yes |

                QMessageBox::Cancel ) )
    {
      case QMessageBox::Yes:
         QMessageBox::information(this,"Informacja","Poprawnie sprzedano");
        break;
      case QMessageBox::Cancel:
        qDebug( "cancel" );
        break;
      default:
        qDebug( "close" );
        break;
    }
    }
    else
        QMessageBox::information(this,"Informacja","Błąd przy sprzedaży");
}
void Interfejs_kasjera::on_pushButton_12_clicked()
{
    QString ID_Transakcji = ui->lineEdit_IDTransakcji->text();
    QString Tytul = ui->lineEdit_Tytul->text();
    QString ID_Egzemplarza = ui->lineEdit_IDEgzemplarza->text();
    QString Gatunek = ui->lineEdit_Gatunek->text();
    QString Pegi = ui->lineEdit_Pegi->text();
    QString Rok_wydania = ui->lineEdit_RokWydania->text();
    QString Kwota = ui->lineEdit_Kwota->text();


    if(ID_Transakcji.size()>0 && Tytul.size()>0 && ID_Egzemplarza.size()>0 && Gatunek.size()>0 && Pegi.size()>0 && Rok_wydania.size()>0&&Kwota.size()>0)

    {
    switch( QMessageBox::question(
                this,
                tr("Potwierdzenie"),
                tr("Czy na pewno chcesz potwierdzić zakup"),

                QMessageBox::Yes |

                QMessageBox::Cancel ) )
    {
      case QMessageBox::Yes:
         QMessageBox::information(this,"Informacja","Poprawnie zakupiono");
        break;
      case QMessageBox::Cancel:
        qDebug( "cancel" );
        break;
      default:
        qDebug( "close" );
        break;
    }
    }
    else
        QMessageBox::information(this,"Informacja","Błąd przy zakupie");
}
void Interfejs_kasjera::on_pushButton_13_clicked()
{
    QString ID_Transakcji = ui->lineEdit_IDTransakcji->text();



    if(ID_Transakcji.size()>0)

    {
    switch( QMessageBox::question(
                this,
                tr("Potwierdzenie"),
                tr("Czy na pewno chcesz usunąć transakcje"),

                QMessageBox::Yes |

                QMessageBox::Cancel ) )
    {
      case QMessageBox::Yes:
         QMessageBox::information(this,"Informacja","Poprawnie usunięto");
        break;
      case QMessageBox::Cancel:
        qDebug( "cancel" );
        break;
      default:
        qDebug( "close" );
        break;
    }
    }
    else
        QMessageBox::information(this,"Informacja","Błąd przy usuwaniu");
}

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
    QString ID_Pracownika= ui->lineEdit_IDPracownika->text();
    QString ID_Egzemplarza = ui->lineEdit_IDEgzemplarza->text();
    QString Opis = ui->lineEdit_Opis->text();
    int IDTrans=ID_Transakcji.toInt();
    int IDPrac=ID_Pracownika.toInt();
    int IDEgzemp=ID_Egzemplarza.toInt();


    if(ID_Transakcji.size()>0 && ID_Pracownika.size()>0 && ID_Egzemplarza.size()>0 && Opis.size()>0)

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
         //INSERT INTO `transakcja` (`IDTransakcji`, `IDPracownika`, `IDEgzemplarza`, `Typtransakcji`, `Opis`) VALUES (IDTrans, IDPrac, IDEgzemp, 1, Opis)
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
    QString ID_Pracownika= ui->lineEdit_IDPracownika->text();
    QString ID_Egzemplarza = ui->lineEdit_IDEgzemplarza->text();
    QString Opis = ui->lineEdit_Opis->text();
    QString IDGry = ui->lineEdit_IDGry->text();
    QString Platforma = ui->lineEdit_Platforma->text();
    QString Stan = ui->lineEdit_Stan->text();
    QString Status = ui->lineEdit_4->text();
    QString Cena = ui->lineEdit_cena->text();
    int IDTrans=ID_Transakcji.toInt();
    int IDPrac=ID_Pracownika.toInt();
    int IDEgzemp=ID_Egzemplarza.toInt();
    int IDgierki=IDGry.toInt();
    int IDPlatformy=Platforma.toInt();
    int IDStanu=Stan.toInt();
    int IDStatusu=Status.toInt();
    int cena=Cena.toInt();
   if(ID_Transakcji.size()>0 && ID_Pracownika.size()>0 && ID_Egzemplarza.size()>0 && Opis.size()>0)

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
         //INSERT INTO `transakcja` (`IDTransakcji`, `IDPracownika`, `IDEgzemplarza`, `Typtransakcji`, `Opis`) VALUES (IDTrans, IDPrac, IDEgzemp, 2, Opis)
         //INSERT INTO `egzemplarz` (`IDEgzemplarza`, `IDGry`, `Cena`, `Platforma`, `Stan`, `Status`, `Ilosc`, `Opis`) VALUES (IDEgzemp, IDgierki,Cena, IDPlatformy, IDStanu, IDStatusu, 1, '')
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
    int IDTrans=ID_Transakcji.toInt();


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
         //DELETE FROM transakcja WHERE `transakcja`.`IDTransakcji` = IDTrans
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

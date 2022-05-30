#include "interfejs_technika.h"
#include "ui_interfejs_technika.h"
#include "mainwindow.h"
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

void Interfejs_Technika::on_pushButton_1_clicked()
{
    close();
    QWidget *mainwindow=new MainWindow;
    mainwindow->show();

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

    if(ID.size()>0 && Status.size() >0 && Stan.size()>0 && Cena.size()>0)

    switch( QMessageBox::question(
                this,
                tr("Potwierdzenie"),
                tr("Czy na pewno chcesz dodać ten egzemplarz?"),

                QMessageBox::Yes |

                QMessageBox::Cancel ) )
    {
      case QMessageBox::Yes:
         QMessageBox::information(this,"Informacja","Poprawnie zmodyfikowano wskazany egzemplarz");
        break;
      case QMessageBox::Cancel:
        qDebug( "cancel" );
        break;
      default:
        qDebug( "close" );
        break;
    }
    else
        QMessageBox::information(this,"Informacja","Błąd modyfikacji wskazanego egzemplarza");
}


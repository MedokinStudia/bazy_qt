#include "interfejs_technika.h"
#include "ui_interfejs_technika.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <string>

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
    QString ID = ui->comboBox_3->itemText(ui->comboBox_3->currentIndex());
    QString Status = ui->comboBox_2->itemText(ui->comboBox_2->currentIndex());
    QString Stan = ui->comboBox->itemText(ui->comboBox->currentIndex());
    QString Opis = ui->lineEdit_Opis->text();
    QString Cena = ui->lineEdit_Cena->text();
    int numID=ID.mid(0,1).toInt();
    int StatusID=Status.mid(0,1).toInt();
    int StanID=Stan.mid(0,1).toInt();
    if(ID.size()>0 && Status.size() >0 && Stan.size()>0 && Cena.size()>0)

    switch( QMessageBox::question(
                this,
                tr("Potwierdzenie"),
                tr("Czy na pewno chcesz zmodyfikować ten egzemplarz?"),

                QMessageBox::Yes |

                QMessageBox::Cancel ) )
    {
      case QMessageBox::Yes:
         QMessageBox::information(this,"Informacja","Poprawnie zmodyfikowano wskazany egzemplarz");
         //UPDATE `egzemplarz` SET `Cena` = Cena, `Stan` = StanID, `Status` = StatusID, `Opis` = Opis WHERE `egzemplarz`.`IDEgzemplarza` = numID
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


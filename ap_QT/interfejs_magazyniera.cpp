#include "interfejs_magazyniera.h"
#include "ui_interfejs_magazyniera.h"
#include "mainwindow.h"
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

void Interfejs_magazyniera::on_pushButton_1_clicked()
{
    close();
    QWidget *mainwindow=new MainWindow;
    mainwindow->show();
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


    if(ID_Egz.size()>0 && ID_Gry.size()>0 && Cena.size()>0 && Platforma.size()>0 && Status.size()>0 && Stan.size()>0 && Ilosc_sztuk.size()>0)
    {
    switch( QMessageBox::question(
                this,
                tr("Potwierdzenie"),
                tr("Czy na pewno chcesz dodać ten egzemplarz?"),

                QMessageBox::Yes |

                QMessageBox::Cancel ) )
    {
      case QMessageBox::Yes:
         QMessageBox::information(this,"Informacja","Poprawnie dodano");
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
        QMessageBox::information(this,"Informacja","Błąd przy dodawaniu");
}


void Interfejs_magazyniera::on_pushButton_6_clicked()
{
    QString ID_Egz = ui->lineEdit_ID_Egzempalrza->text();

    if(ID_Egz.size()>0)
    {
    switch( QMessageBox::question(
                this,
                tr("Potwierdzenie"),
                tr("Czy na pewno chcesz usunąć ten egzemplarz?"),

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


void Interfejs_magazyniera::on_pushButton_7_clicked()
{
    QString ID_Gry = ui->lineEdit_ID_Gry_2->text();
    QString Tytul = ui->lineEdit_Tytul->text();
    QString Wydawca = ui->lineEdit_Wydawca->text();
    QString Gatunek = ui->lineEdit_Gatunek->text();
    QString Pegi = ui->lineEdit_PEGI->text();
    QString Rok_wydania = ui->lineEdit_Rok_Wydania->text();


    if(ID_Gry.size()>0 && Tytul.size()>0 && Wydawca.size()>0 && Gatunek.size()>0 && Pegi.size()>0 && Rok_wydania.size()>0)

    {
    switch( QMessageBox::question(
                this,
                tr("Potwierdzenie"),
                tr("Czy na pewno chcesz dodać tą grę?"),

                QMessageBox::Yes |

                QMessageBox::Cancel ) )
    {
      case QMessageBox::Yes:
         QMessageBox::information(this,"Informacja","Poprawnie dodano");
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
        QMessageBox::information(this,"Informacja","Błąd przy dodawaniu");
}


void Interfejs_magazyniera::on_pushButton_5_clicked()
{
    QString ID_Gry = ui->lineEdit_ID_Gry_2->text();
    if(ID_Gry.size()>0)
    {
    switch( QMessageBox::question(
                this,
                tr("Potwierdzenie"),
                tr("Czy na pewno chcesz usunąć tą grę?"),

                QMessageBox::Yes |

                QMessageBox::Cancel ) )
    {
      case QMessageBox::Yes:
         QMessageBox::information(this,"Informacja","Poprawnie usunieto");
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


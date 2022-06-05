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
    int IDgierki=ID_Gry.toInt();
    int IDegzemp=ID_Egz.toInt();
    int IDPlat=Platforma.toInt();
    int Ilosc=Ilosc_sztuk.toInt();
    int IDstanu=Stan.toInt();
    int IDstatusu=Status.toInt();
    int cena=Cena.toInt();
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
          //INSERT INTO `egzemplarz` (`IDEgzemplarza`, `IDGry`, `Cena`, `Platforma`, `Stan`, `Status`, `Ilosc`, `Opis`) VALUES (IDegzemp, IDgierki, cena, IDPlat, IDstatusu, IDstanu, Ilosc, '')
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
    int IDegzempl=ID_Egz.toInt();
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
         //DELETE FROM egzemplarz WHERE `egzemplarz`.`IDEgzemplarza` = IDegzempl"
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
    int IDgierki=ID_Gry.toInt();
    int IDgatunku=Gatunek.toInt();
    int IDPegi=Pegi.toInt();
    int Rok=Rok_wydania.toInt();

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
         //INSERT INTO `gra` (`IDGry`, `Tytuł`, `Wydawca`, `Gatunek`, `PEGI`, `Rok_wydania`) VALUES (IDgierki, Tytul, Wydawca, IDgatunku, IDPegi, Rok)
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
    int IDgierki=ID_Gry.toInt();
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
         //DELETE FROM gra WHERE `gra`.`IDGry` = IDgierki
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


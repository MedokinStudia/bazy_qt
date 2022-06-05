#include "interfejs_kierownika.h"
#include "ui_interfejs_kierownika.h"
#include "mainwindow.h"
#include <QMessageBox>

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
    close();
    QWidget *mainwindow=new MainWindow;
    mainwindow->show();
}


void Interfejs_kierownika::on_pushButton_3_clicked()
{
    QString ID_pracownika = ui->lineEdit_ID->text();
    QString Imie = ui->lineEdit_Imie->text();
    QString Nazwisko = ui->lineEdit_Nazwisko->text();
    QString NrTelefonu = ui->lineEdit_NrTelefonu->text();
    QString Login = ui->lineEdit_Login->text();
    QString Haslo = ui->lineEdit_Haslo->text();
    QString Stanowisko = ui->lineEdit_Stanowisko->text();
    int IDPrac=ID_pracownika.toInt();
    int Nrtel=NrTelefonu.toInt();
    int IDStanowisko=Stanowisko.toInt();

    if(ID_pracownika.size()>0 && Imie.size()>0 && Nazwisko.size()>0 && NrTelefonu.size()>0 && Login.size()>0 && Haslo.size()>0)
    {
    if(Stanowisko=="kierownik"||Stanowisko=="kasjer"||Stanowisko=="magazynier"||Stanowisko=="technik"){
    {
    switch( QMessageBox::question(
                this,
                tr("Potwierdzenie"),
                tr("Czy na pewno chcesz dodać tego użytkownika"),

                QMessageBox::Yes |

                QMessageBox::Cancel ) )
    {
      case QMessageBox::Yes:
         QMessageBox::information(this,"Informacja","Poprawnie dodano");
         //INSERT INTO `pracownik` (`IDPracownika`, `Imie`, `Nazwisko`, `NrTel`, `Login`, `Haslo`, `Stanowisko`) VALUES (IDPrac,Imie, Nazwisko, Nrtel, Login, Haslo, IDStanowisko)
        break;
      case QMessageBox::Cancel:
        qDebug( "cancel" );
        break;
      default:
        qDebug( "close" );
        break;
    }
        }
    }
    }
    else
        QMessageBox::information(this,"Informacja","Błąd przy dodawaniu");
}
void Interfejs_kierownika::on_pushButton_5_clicked()
{
    QString ID_pracownika = ui->lineEdit_ID->text();
    QString Imie = ui->lineEdit_Imie->text();
    QString Nazwisko = ui->lineEdit_Nazwisko->text();
    QString NrTelefonu = ui->lineEdit_NrTelefonu->text();
    QString Login = ui->lineEdit_Login->text();
    QString Haslo = ui->lineEdit_Haslo->text();
    QString Stanowisko = ui->lineEdit_Stanowisko->text();
    int IDPrac=ID_pracownika.toInt();
    int Nrtel=NrTelefonu.toInt();
    int IDStanowisko=Stanowisko.toInt();

    if(ID_pracownika.size()>0 && Imie.size()>0 && Nazwisko.size()>0 && NrTelefonu.size()>0 && Login.size()>0 && Haslo.size()>0)
    {
    if(Stanowisko=="kierownik"||Stanowisko=="kasjer"||Stanowisko=="magazynier"||Stanowisko=="technik"){
    {
    switch( QMessageBox::question(
                this,
                tr("Potwierdzenie"),
                tr("Czy na pewno chcesz zmodyfikować tego użytkownika"),

                QMessageBox::Yes |

                QMessageBox::Cancel ) )
    {
      case QMessageBox::Yes:
         QMessageBox::information(this,"Informacja","Poprawnie zmodyfikowano");
         //UPDATE `pracownik` SET `IDPracownika` = IDPrac, `Imie` = Imie, `Nazwisko` = Nazwisko, `NrTel` = Nrtel, `Login` = Login, `Haslo` = Haslo, `Stanowisko` = IDStanowisko WHERE `pracownik`.`IDPracownika` = IDPrac
        break;
      case QMessageBox::Cancel:
        qDebug( "cancel" );
        break;
      default:
        qDebug( "close" );
        break;
    }
        }
    }
    }
    else
        QMessageBox::information(this,"Informacja","Błąd przy modyfikowaniu");
}

void Interfejs_kierownika::on_pushButton_4_clicked()
{
    QString ID_pracownika = ui->lineEdit_ID->text();
    int IDPrac=ID_pracownika.toInt();


    if(ID_pracownika.size()>0 )
    {

    switch( QMessageBox::question(
                this,
                tr("Potwierdzenie"),
                tr("Czy na pewno chcesz usunąć tego użytkownika"),

                QMessageBox::Yes |

                QMessageBox::Cancel ) )
    {
      case QMessageBox::Yes:
         QMessageBox::information(this,"Informacja","Poprawnie usunięto");
         //DELETE FROM pracownik WHERE `pracownik`.`IDPracownika` = IDPrac
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


void Interfejs_kierownika::on_pushButton_6_clicked()
{
    close();
    QWidget *edit_tabele=new tabele;
    edit_tabele->show();
}


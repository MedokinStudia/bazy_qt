#include "tabele.h"
#include "ui_tabele.h"
#include "mainwindow.h"
#include "interfejs_kierownika.h"
#include <QMessageBox>

tabele::tabele(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tabele)
{
    ui->setupUi(this);
}

tabele::~tabele()
{
    delete ui;
}

void tabele::on_pushButton_wyloguj_clicked()
{
    close();
    QWidget *mainwindow=new MainWindow;
    mainwindow->show();
}


void tabele::on_pushButton_wroc_clicked()
{
    close();
    QWidget *interfejs_kierownika=new Interfejs_kierownika;
    interfejs_kierownika->show();
}


void tabele::on_pushButton_wyjdz_clicked()
{
    close();
}

void tabele::on_pushButton_dod_plat_clicked()
{
    QString ID = ui->lineEdit_ID_Plat->text();
    QString Platforma = ui->lineEdit_2_Plat->text();


    if(ID.size()>0 && Platforma.size()>0)

    {
    switch( QMessageBox::question(
                this,
                tr("Potwierdzenie"),
                tr("Czy na pewno chcesz potwierdzić dodanie platformy?"),

                QMessageBox::Yes |

                QMessageBox::Cancel ) )
    {
      case QMessageBox::Yes:
         QMessageBox::information(this,"Informacja","Poprawnie dodano platformę");
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

void tabele::on_pushButton_usu_plat_clicked()
{
    QString ID = ui->lineEdit_ID_Plat->text();
    QString Platforma = ui->lineEdit_2_Plat->text();


    if(ID.size()>0 && Platforma.size()>0)

    {
    switch( QMessageBox::question(
                this,
                tr("Potwierdzenie"),
                tr("Czy na pewno chcesz potwierdzić usunięcie platformy?"),

                QMessageBox::Yes |

                QMessageBox::Cancel ) )
    {
      case QMessageBox::Yes:
         QMessageBox::information(this,"Informacja","Poprawnie usunięto platformę");
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

void tabele::on_pushButton_dod_pegi_clicked()
{
    QString ID = ui->lineEdit_ID_Pegi->text();
    QString Pegi = ui->lineEdit_Pegi->text();


    if(ID.size()>0 && Pegi.size()>0)

    {
    switch( QMessageBox::question(
                this,
                tr("Potwierdzenie"),
                tr("Czy na pewno chcesz potwierdzić dodanie PEGI?"),

                QMessageBox::Yes |

                QMessageBox::Cancel ) )
    {
      case QMessageBox::Yes:
         QMessageBox::information(this,"Informacja","Poprawnie dodano PEGI");
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

void tabele::on_pushButton_usu_pegi_clicked()
{
    QString ID = ui->lineEdit_ID_Pegi->text();
    QString Pegi = ui->lineEdit_Pegi->text();


    if(ID.size()>0 && Pegi.size()>0)

    {
    switch( QMessageBox::question(
                this,
                tr("Potwierdzenie"),
                tr("Czy na pewno chcesz potwierdzić usunięcie PEGI?"),

                QMessageBox::Yes |

                QMessageBox::Cancel ) )
    {
      case QMessageBox::Yes:
         QMessageBox::information(this,"Informacja","Poprawnie usunięto PEGI");
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

void tabele::on_pushButton_usu_gat_clicked()
{
    QString ID = ui->lineEdit_ID_Gat->text();
    QString Gat = ui->lineEdit_Gat->text();


    if(ID.size()>0 && Gat.size()>0)

    {
    switch( QMessageBox::question(
                this,
                tr("Potwierdzenie"),
                tr("Czy na pewno chcesz potwierdzić usunięcie gatunku?"),

                QMessageBox::Yes |

                QMessageBox::Cancel ) )
    {
      case QMessageBox::Yes:
         QMessageBox::information(this,"Informacja","Poprawnie usunięto gatunku");
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

void tabele::on_pushButton_dod_gat_clicked()
{
    QString ID = ui->lineEdit_ID_Gat->text();
    QString Gat = ui->lineEdit_Gat->text();


    if(ID.size()>0 && Gat.size()>0)

    {
    switch( QMessageBox::question(
                this,
                tr("Potwierdzenie"),
                tr("Czy na pewno chcesz potwierdzić dodanie gatunku?"),

                QMessageBox::Yes |

                QMessageBox::Cancel ) )
    {
      case QMessageBox::Yes:
         QMessageBox::information(this,"Informacja","Poprawnie dodano gatunku");
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

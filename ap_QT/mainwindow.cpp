#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "interfejs_technika.h"
#include <QMessageBox>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <string>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeWindow()
{
    if(!interfejs_kierownik->isVisible())
    {
        interfejs_kierownik->hide();
        this->show();
    }
    else
    {
        this->hide();
        interfejs_kierownik->show();
    }
}

void MainWindow::on_pushButton_clicked()
{
    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    QString login = ui->lineEdit_login->text();
    QString haslo = ui-> lineEdit_haslo->text();
    database.setHostName("127.0.0.1");
    database.setPort(8080);
    database.setUserName("Magazynier");
    database.setPassword("123");
    database.setDatabaseName("projekt");
    QSqlQuery query(database);

    if (database.open())
    {
        if(database.isValid())
        {
          QMessageBox::information(this,"Connection","database.userName()");
          query.exec("SELECT * FROM `egzemplarz`");
          qDebug() << query.lastError();
        }
    }
    else {
        QMessageBox::information(this,"Fuck","Fuck");
    }
    if(login == "kierownik" && haslo == "123")
    {
        interfejs_kierownik=new Interfejs_kierownika(this);
        hide();
        interfejs_kierownik->show();
    }
    else
        if(login == "technik" && haslo == "123")
        {
            interfejs_technika=new Interfejs_Technika(this);
            hide();
            interfejs_technika->show();
        }
        else
            if(login == "kasjer" && haslo == "123")
            {
                interfejs_kasjera=new Interfejs_kasjera(this);
                hide();
                interfejs_kasjera->show();
            }
            else
                if(login == "Magazynier" && haslo == "123")
                {
                    interfejs_magazyniera=new Interfejs_magazyniera(this);
                    hide();
                    interfejs_magazyniera->show();
                }
                else
                QMessageBox::information(this,"Zaloguj","Błedne logowanie");

}


void MainWindow::on_pushButton_2_clicked()
{
    close();
}



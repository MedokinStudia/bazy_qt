#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "interfejs_technika.h"
#include <QMessageBox>
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
    QSqlDatabase database = QSqlDatabase::addDatabase("QMYSQL");
    QString login = ui->lineEdit_login->text();
    QString haslo = ui-> lineEdit_haslo->text();
    database.setHostName("localhost");
    database.setUserName(login);
    database.setPassword(haslo);
    database.setDatabaseName("projekt");
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
                if(login == "magazynier" && haslo == "123")
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



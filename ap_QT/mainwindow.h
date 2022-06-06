#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "interfejs_kierownika.h"
#include "interfejs_technika.h"
#include "interfejs_kasjera.h"
#include "interfejs_magazyniera.h"
#include "tabele.h"
#include <QtSql>
#include <QSqlDatabase>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
extern QSqlDatabase database;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void changeWindow();

private:
    Ui::MainWindow *ui;
    Interfejs_kierownika *interfejs_kierownik;
    Interfejs_Technika *interfejs_technika;
    Interfejs_kasjera *interfejs_kasjera;
    Interfejs_magazyniera *interfejs_magazyniera;
    tabele *tabela;
};
#endif // MAINWINDOW_H

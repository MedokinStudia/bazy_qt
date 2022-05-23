#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "interfejs_kierownika.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

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
};
#endif // MAINWINDOW_H

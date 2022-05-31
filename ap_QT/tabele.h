#ifndef TABELE_H
#define TABELE_H

#include <QDialog>

namespace Ui {
class tabele;
}

class tabele : public QDialog
{
    Q_OBJECT

public:
    explicit tabele(QWidget *parent = nullptr);
    ~tabele();

private slots:
    void on_pushButton_wyloguj_clicked();

    void on_pushButton_wroc_clicked();

    void on_pushButton_wyjdz_clicked();

private:
    Ui::tabele *ui;
};

#endif // TABELE_H

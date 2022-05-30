#ifndef INTERFEJS_KASJERA_H
#define INTERFEJS_KASJERA_H

#include <QDialog>

namespace Ui {
class Interfejs_kasjera;
}

class Interfejs_kasjera : public QDialog
{
    Q_OBJECT

public:
    explicit Interfejs_kasjera(QWidget *parent = nullptr);
    ~Interfejs_kasjera();

private slots:
    void on_pushButton_15_clicked();
    void on_pushButton_14_clicked();
    void on_pushButton_11_clicked();
    void on_pushButton_12_clicked();
    void on_pushButton_13_clicked();

private:
    Ui::Interfejs_kasjera *ui;
};

#endif // INTERFEJS_KASJERA_H

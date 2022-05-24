#include "interfejs_kasjera.h"
#include "ui_interfejs_kasjera.h"

Interfejs_kasjera::Interfejs_kasjera(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Interfejs_kasjera)
{
    ui->setupUi(this);
}

Interfejs_kasjera::~Interfejs_kasjera()
{
    delete ui;
}

void Interfejs_kasjera::on_pushButton_15_clicked()
{
    close();
}


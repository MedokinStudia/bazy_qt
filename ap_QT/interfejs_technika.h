#ifndef INTERFEJS_TECHNIKA_H
#define INTERFEJS_TECHNIKA_H

#include <QDialog>

namespace Ui {
class Interfejs_Technika;
}

class Interfejs_Technika : public QDialog
{
    Q_OBJECT

public:
    explicit Interfejs_Technika(QWidget *parent = nullptr);
    ~Interfejs_Technika();

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_1_clicked();
    void on_pushButton_5_clicked();

private:
    Ui::Interfejs_Technika *ui;

};

#endif // INTERFEJS_TECHNIKA_H

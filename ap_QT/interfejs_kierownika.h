#ifndef INTERFEJS_KIEROWNIKA_H
#define INTERFEJS_KIEROWNIKA_H

#include <QDialog>

namespace Ui {
class Interfejs_kierownika;
}

class Interfejs_kierownika : public QDialog
{
    Q_OBJECT

public:
    explicit Interfejs_kierownika(QWidget *parent = nullptr);
    ~Interfejs_kierownika();

private slots:

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_pressed();

private:
    Ui::Interfejs_kierownika *ui;
};

#endif // INTERFEJS_KIEROWNIKA_H

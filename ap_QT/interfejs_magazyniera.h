#ifndef INTERFEJS_MAGAZYNIERA_H
#define INTERFEJS_MAGAZYNIERA_H

#include <QDialog>

namespace Ui {
class Interfejs_magazyniera;
}

class Interfejs_magazyniera : public QDialog
{
    Q_OBJECT

public:
    explicit Interfejs_magazyniera(QWidget *parent = nullptr);
    ~Interfejs_magazyniera();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_1_clicked();
private:
    Ui::Interfejs_magazyniera *ui;
};

#endif // INTERFEJS_MAGAZYNIERA_H

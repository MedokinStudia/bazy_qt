/********************************************************************************
** Form generated from reading UI file 'interfejs_magazyniera.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFEJS_MAGAZYNIERA_H
#define UI_INTERFEJS_MAGAZYNIERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Interfejs_magazyniera
{
public:
    QHBoxLayout *horizontalLayout;
    QScrollArea *Zarzadzaj_Pracownikami_2;
    QWidget *scrollAreaWidgetContents_7;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QPlainTextEdit *plainTextEdit_2;
    QLabel *label_17;
    QLineEdit *lineEdit_ID_Egzempalrza;
    QLabel *label_13;
    QLineEdit *lineEdit_ID_Gry;
    QLabel *label_14;
    QLineEdit *lineEdit_Cena;
    QLabel *label_9;
    QLineEdit *lineEdit_Platforma;
    QLabel *label_10;
    QLineEdit *lineEdit_Stan;
    QLabel *label_15;
    QLineEdit *lineEdit_Status;
    QLabel *label_16;
    QLineEdit *lineEdit_Ilosc_sztuk;
    QSplitter *splitter_2;
    QPushButton *pushButton_8;
    QPushButton *pushButton_6;
    QSplitter *splitter_4;
    QScrollArea *Zarzadzaj_Pracownikami;
    QWidget *scrollAreaWidgetContents_6;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_12;
    QLineEdit *lineEdit_ID_Gry_2;
    QLabel *label_11;
    QLineEdit *lineEdit_Tytul;
    QLabel *label_5;
    QLineEdit *lineEdit_Wydawca;
    QLabel *label_6;
    QLineEdit *lineEdit_Gatunek;
    QLabel *label_7;
    QLineEdit *lineEdit_PEGI;
    QLabel *label_8;
    QLineEdit *lineEdit_Rok_Wydania;
    QSplitter *splitter;
    QPushButton *pushButton_7;
    QPushButton *pushButton_5;
    QSplitter *splitter_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Interfejs_magazyniera)
    {
        if (Interfejs_magazyniera->objectName().isEmpty())
            Interfejs_magazyniera->setObjectName(QString::fromUtf8("Interfejs_magazyniera"));
        Interfejs_magazyniera->resize(844, 594);
        horizontalLayout = new QHBoxLayout(Interfejs_magazyniera);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Zarzadzaj_Pracownikami_2 = new QScrollArea(Interfejs_magazyniera);
        Zarzadzaj_Pracownikami_2->setObjectName(QString::fromUtf8("Zarzadzaj_Pracownikami_2"));
        Zarzadzaj_Pracownikami_2->setWidgetResizable(true);
        scrollAreaWidgetContents_7 = new QWidget();
        scrollAreaWidgetContents_7->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_7"));
        scrollAreaWidgetContents_7->setGeometry(QRect(0, 0, 542, 574));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents_7);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(scrollAreaWidgetContents_7);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        plainTextEdit_2 = new QPlainTextEdit(scrollAreaWidgetContents_7);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));

        verticalLayout_2->addWidget(plainTextEdit_2);

        label_17 = new QLabel(scrollAreaWidgetContents_7);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        verticalLayout_2->addWidget(label_17);

        lineEdit_ID_Egzempalrza = new QLineEdit(scrollAreaWidgetContents_7);
        lineEdit_ID_Egzempalrza->setObjectName(QString::fromUtf8("lineEdit_ID_Egzempalrza"));

        verticalLayout_2->addWidget(lineEdit_ID_Egzempalrza);

        label_13 = new QLabel(scrollAreaWidgetContents_7);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_2->addWidget(label_13);

        lineEdit_ID_Gry = new QLineEdit(scrollAreaWidgetContents_7);
        lineEdit_ID_Gry->setObjectName(QString::fromUtf8("lineEdit_ID_Gry"));

        verticalLayout_2->addWidget(lineEdit_ID_Gry);

        label_14 = new QLabel(scrollAreaWidgetContents_7);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout_2->addWidget(label_14);

        lineEdit_Cena = new QLineEdit(scrollAreaWidgetContents_7);
        lineEdit_Cena->setObjectName(QString::fromUtf8("lineEdit_Cena"));

        verticalLayout_2->addWidget(lineEdit_Cena);

        label_9 = new QLabel(scrollAreaWidgetContents_7);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_2->addWidget(label_9);

        lineEdit_Platforma = new QLineEdit(scrollAreaWidgetContents_7);
        lineEdit_Platforma->setObjectName(QString::fromUtf8("lineEdit_Platforma"));

        verticalLayout_2->addWidget(lineEdit_Platforma);

        label_10 = new QLabel(scrollAreaWidgetContents_7);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_2->addWidget(label_10);

        lineEdit_Stan = new QLineEdit(scrollAreaWidgetContents_7);
        lineEdit_Stan->setObjectName(QString::fromUtf8("lineEdit_Stan"));

        verticalLayout_2->addWidget(lineEdit_Stan);

        label_15 = new QLabel(scrollAreaWidgetContents_7);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        verticalLayout_2->addWidget(label_15);

        lineEdit_Status = new QLineEdit(scrollAreaWidgetContents_7);
        lineEdit_Status->setObjectName(QString::fromUtf8("lineEdit_Status"));

        verticalLayout_2->addWidget(lineEdit_Status);

        label_16 = new QLabel(scrollAreaWidgetContents_7);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_2->addWidget(label_16);

        lineEdit_Ilosc_sztuk = new QLineEdit(scrollAreaWidgetContents_7);
        lineEdit_Ilosc_sztuk->setObjectName(QString::fromUtf8("lineEdit_Ilosc_sztuk"));

        verticalLayout_2->addWidget(lineEdit_Ilosc_sztuk);

        splitter_2 = new QSplitter(scrollAreaWidgetContents_7);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        pushButton_8 = new QPushButton(splitter_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);\n"
"border-color: rgb(0, 85, 0);"));
        splitter_2->addWidget(pushButton_8);
        pushButton_6 = new QPushButton(splitter_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 38, 42);\n"
"border-color: rgb(170, 0, 0);"));
        splitter_2->addWidget(pushButton_6);

        verticalLayout_2->addWidget(splitter_2);

        Zarzadzaj_Pracownikami_2->setWidget(scrollAreaWidgetContents_7);

        horizontalLayout->addWidget(Zarzadzaj_Pracownikami_2);

        splitter_4 = new QSplitter(Interfejs_magazyniera);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setOrientation(Qt::Vertical);
        Zarzadzaj_Pracownikami = new QScrollArea(splitter_4);
        Zarzadzaj_Pracownikami->setObjectName(QString::fromUtf8("Zarzadzaj_Pracownikami"));
        Zarzadzaj_Pracownikami->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 274, 545));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(scrollAreaWidgetContents_6);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        plainTextEdit = new QPlainTextEdit(scrollAreaWidgetContents_6);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);

        label_12 = new QLabel(scrollAreaWidgetContents_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout->addWidget(label_12);

        lineEdit_ID_Gry_2 = new QLineEdit(scrollAreaWidgetContents_6);
        lineEdit_ID_Gry_2->setObjectName(QString::fromUtf8("lineEdit_ID_Gry_2"));

        verticalLayout->addWidget(lineEdit_ID_Gry_2);

        label_11 = new QLabel(scrollAreaWidgetContents_6);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout->addWidget(label_11);

        lineEdit_Tytul = new QLineEdit(scrollAreaWidgetContents_6);
        lineEdit_Tytul->setObjectName(QString::fromUtf8("lineEdit_Tytul"));

        verticalLayout->addWidget(lineEdit_Tytul);

        label_5 = new QLabel(scrollAreaWidgetContents_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        lineEdit_Wydawca = new QLineEdit(scrollAreaWidgetContents_6);
        lineEdit_Wydawca->setObjectName(QString::fromUtf8("lineEdit_Wydawca"));

        verticalLayout->addWidget(lineEdit_Wydawca);

        label_6 = new QLabel(scrollAreaWidgetContents_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        lineEdit_Gatunek = new QLineEdit(scrollAreaWidgetContents_6);
        lineEdit_Gatunek->setObjectName(QString::fromUtf8("lineEdit_Gatunek"));

        verticalLayout->addWidget(lineEdit_Gatunek);

        label_7 = new QLabel(scrollAreaWidgetContents_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        lineEdit_PEGI = new QLineEdit(scrollAreaWidgetContents_6);
        lineEdit_PEGI->setObjectName(QString::fromUtf8("lineEdit_PEGI"));

        verticalLayout->addWidget(lineEdit_PEGI);

        label_8 = new QLabel(scrollAreaWidgetContents_6);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout->addWidget(label_8);

        lineEdit_Rok_Wydania = new QLineEdit(scrollAreaWidgetContents_6);
        lineEdit_Rok_Wydania->setObjectName(QString::fromUtf8("lineEdit_Rok_Wydania"));

        verticalLayout->addWidget(lineEdit_Rok_Wydania);

        splitter = new QSplitter(scrollAreaWidgetContents_6);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        pushButton_7 = new QPushButton(splitter);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);\n"
"border-color: rgb(0, 85, 0);"));
        splitter->addWidget(pushButton_7);
        pushButton_5 = new QPushButton(splitter);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 38, 42);\n"
"border-color: rgb(170, 0, 0);"));
        splitter->addWidget(pushButton_5);

        verticalLayout->addWidget(splitter);

        Zarzadzaj_Pracownikami->setWidget(scrollAreaWidgetContents_6);
        splitter_4->addWidget(Zarzadzaj_Pracownikami);
        splitter_3 = new QSplitter(splitter_4);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        pushButton = new QPushButton(splitter_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"border-color: rgb(255, 85, 0);"));
        splitter_3->addWidget(pushButton);
        pushButton_2 = new QPushButton(splitter_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 20, 20);\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 0, 0);"));
        splitter_3->addWidget(pushButton_2);
        splitter_4->addWidget(splitter_3);

        horizontalLayout->addWidget(splitter_4);


        retranslateUi(Interfejs_magazyniera);

        QMetaObject::connectSlotsByName(Interfejs_magazyniera);
    } // setupUi

    void retranslateUi(QDialog *Interfejs_magazyniera)
    {
        Interfejs_magazyniera->setWindowTitle(QCoreApplication::translate("Interfejs_magazyniera", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("Interfejs_magazyniera", "Zarzadzaj_egzemplarzami", nullptr));
        plainTextEdit_2->setPlainText(QString());
        label_17->setText(QCoreApplication::translate("Interfejs_magazyniera", "ID Egzempalrza", nullptr));
        lineEdit_ID_Egzempalrza->setText(QString());
        label_13->setText(QCoreApplication::translate("Interfejs_magazyniera", "ID Gry", nullptr));
        lineEdit_ID_Gry->setText(QString());
        label_14->setText(QCoreApplication::translate("Interfejs_magazyniera", "Cena", nullptr));
        lineEdit_Cena->setText(QString());
        label_9->setText(QCoreApplication::translate("Interfejs_magazyniera", "Platforma", nullptr));
        lineEdit_Platforma->setText(QString());
        label_10->setText(QCoreApplication::translate("Interfejs_magazyniera", "Stan", nullptr));
        lineEdit_Stan->setText(QString());
        label_15->setText(QCoreApplication::translate("Interfejs_magazyniera", "Status", nullptr));
        lineEdit_Status->setText(QString());
        label_16->setText(QCoreApplication::translate("Interfejs_magazyniera", "Ilo\305\233\304\207 sztuk", nullptr));
        lineEdit_Ilosc_sztuk->setText(QString());
        pushButton_8->setText(QCoreApplication::translate("Interfejs_magazyniera", "Dodaj Egzemplarz", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Interfejs_magazyniera", "Usu\305\204 Egzemplarz", nullptr));
        label->setText(QCoreApplication::translate("Interfejs_magazyniera", "Zarzadzaj_grami", nullptr));
        plainTextEdit->setPlainText(QString());
        label_12->setText(QCoreApplication::translate("Interfejs_magazyniera", "ID Gry", nullptr));
        lineEdit_ID_Gry_2->setText(QString());
        label_11->setText(QCoreApplication::translate("Interfejs_magazyniera", "Tytu\305\202", nullptr));
        lineEdit_Tytul->setText(QString());
        label_5->setText(QCoreApplication::translate("Interfejs_magazyniera", "Wydawca", nullptr));
        lineEdit_Wydawca->setText(QString());
        label_6->setText(QCoreApplication::translate("Interfejs_magazyniera", "Gatunek", nullptr));
        lineEdit_Gatunek->setText(QString());
        label_7->setText(QCoreApplication::translate("Interfejs_magazyniera", "PEGI", nullptr));
        lineEdit_PEGI->setText(QString());
        label_8->setText(QCoreApplication::translate("Interfejs_magazyniera", "Rok wydania", nullptr));
        lineEdit_Rok_Wydania->setText(QString());
        pushButton_7->setText(QCoreApplication::translate("Interfejs_magazyniera", "Dodaj Gr\304\231", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Interfejs_magazyniera", "Usu\305\204 Gr\304\231", nullptr));
        pushButton->setText(QCoreApplication::translate("Interfejs_magazyniera", "Wyloguj", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Interfejs_magazyniera", "Wyjd\305\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Interfejs_magazyniera: public Ui_Interfejs_magazyniera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFEJS_MAGAZYNIERA_H

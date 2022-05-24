/********************************************************************************
** Form generated from reading UI file 'interfejs_kierownika.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFEJS_KIEROWNIKA_H
#define UI_INTERFEJS_KIEROWNIKA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Interfejs_kierownika
{
public:
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter_3;
    QScrollArea *Zarzadzaj_Pracownikami;
    QWidget *scrollAreaWidgetContents_6;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_11;
    QLineEdit *lineEdit_7;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QLabel *label_7;
    QLineEdit *lineEdit_3;
    QLabel *label_8;
    QLineEdit *lineEdit_4;
    QLabel *label_9;
    QLineEdit *lineEdit_5;
    QLabel *label_10;
    QLineEdit *lineEdit_6;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QSplitter *splitter_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSplitter *splitter;
    QScrollArea *Wyswietl_Transakcje;
    QWidget *scrollAreaWidgetContents_3;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *plainTextEdit_2;
    QScrollBar *verticalScrollBar;
    QLabel *label_2;
    QScrollBar *horizontalScrollBar_3;
    QScrollArea *Wyswietl_Gry;
    QWidget *scrollAreaWidgetContents_4;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QScrollBar *horizontalScrollBar_2;
    QPlainTextEdit *plainTextEdit_3;
    QScrollBar *verticalScrollBar_2;
    QScrollArea *Wyswietl_Egzemplarze;
    QWidget *scrollAreaWidgetContents_5;
    QGridLayout *gridLayout_4;
    QPlainTextEdit *plainTextEdit_4;
    QLabel *label_4;
    QScrollBar *horizontalScrollBar;
    QScrollBar *verticalScrollBar_3;

    void setupUi(QDialog *Interfejs_kierownika)
    {
        if (Interfejs_kierownika->objectName().isEmpty())
            Interfejs_kierownika->setObjectName(QString::fromUtf8("Interfejs_kierownika"));
        Interfejs_kierownika->resize(809, 619);
        horizontalLayout = new QHBoxLayout(Interfejs_kierownika);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        splitter_3 = new QSplitter(Interfejs_kierownika);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Vertical);
        Zarzadzaj_Pracownikami = new QScrollArea(splitter_3);
        Zarzadzaj_Pracownikami->setObjectName(QString::fromUtf8("Zarzadzaj_Pracownikami"));
        Zarzadzaj_Pracownikami->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 391, 570));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(scrollAreaWidgetContents_6);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        plainTextEdit = new QPlainTextEdit(scrollAreaWidgetContents_6);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);

        label_11 = new QLabel(scrollAreaWidgetContents_6);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout->addWidget(label_11);

        lineEdit_7 = new QLineEdit(scrollAreaWidgetContents_6);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        verticalLayout->addWidget(lineEdit_7);

        label_5 = new QLabel(scrollAreaWidgetContents_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        lineEdit = new QLineEdit(scrollAreaWidgetContents_6);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        label_6 = new QLabel(scrollAreaWidgetContents_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        lineEdit_2 = new QLineEdit(scrollAreaWidgetContents_6);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        label_7 = new QLabel(scrollAreaWidgetContents_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        lineEdit_3 = new QLineEdit(scrollAreaWidgetContents_6);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout->addWidget(lineEdit_3);

        label_8 = new QLabel(scrollAreaWidgetContents_6);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout->addWidget(label_8);

        lineEdit_4 = new QLineEdit(scrollAreaWidgetContents_6);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        verticalLayout->addWidget(lineEdit_4);

        label_9 = new QLabel(scrollAreaWidgetContents_6);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout->addWidget(label_9);

        lineEdit_5 = new QLineEdit(scrollAreaWidgetContents_6);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        verticalLayout->addWidget(lineEdit_5);

        label_10 = new QLabel(scrollAreaWidgetContents_6);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout->addWidget(label_10);

        lineEdit_6 = new QLineEdit(scrollAreaWidgetContents_6);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        verticalLayout->addWidget(lineEdit_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_3 = new QPushButton(scrollAreaWidgetContents_6);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);\n"
"border-color: rgb(0, 85, 0);"));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_5 = new QPushButton(scrollAreaWidgetContents_6);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 255, 255);\n"
"border-color: rgb(0, 0, 255);"));

        horizontalLayout_2->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(scrollAreaWidgetContents_6);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 38, 42);\n"
"border-color: rgb(170, 0, 0);"));

        horizontalLayout_2->addWidget(pushButton_4);


        verticalLayout->addLayout(horizontalLayout_2);

        Zarzadzaj_Pracownikami->setWidget(scrollAreaWidgetContents_6);
        splitter_3->addWidget(Zarzadzaj_Pracownikami);
        splitter_2 = new QSplitter(splitter_3);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        pushButton = new QPushButton(splitter_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"border-color: rgb(255, 85, 0);"));
        splitter_2->addWidget(pushButton);
        pushButton_2 = new QPushButton(splitter_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 20, 20);\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 0, 0);"));
        splitter_2->addWidget(pushButton_2);
        splitter_3->addWidget(splitter_2);

        horizontalLayout->addWidget(splitter_3);

        splitter = new QSplitter(Interfejs_kierownika);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        Wyswietl_Transakcje = new QScrollArea(splitter);
        Wyswietl_Transakcje->setObjectName(QString::fromUtf8("Wyswietl_Transakcje"));
        Wyswietl_Transakcje->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 390, 195));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        plainTextEdit_2 = new QPlainTextEdit(scrollAreaWidgetContents_3);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));

        gridLayout_2->addWidget(plainTextEdit_2, 1, 0, 1, 1);

        verticalScrollBar = new QScrollBar(scrollAreaWidgetContents_3);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(verticalScrollBar, 1, 1, 1, 1);

        label_2 = new QLabel(scrollAreaWidgetContents_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        horizontalScrollBar_3 = new QScrollBar(scrollAreaWidgetContents_3);
        horizontalScrollBar_3->setObjectName(QString::fromUtf8("horizontalScrollBar_3"));
        horizontalScrollBar_3->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalScrollBar_3, 3, 0, 1, 1);

        Wyswietl_Transakcje->setWidget(scrollAreaWidgetContents_3);
        splitter->addWidget(Wyswietl_Transakcje);
        Wyswietl_Gry = new QScrollArea(splitter);
        Wyswietl_Gry->setObjectName(QString::fromUtf8("Wyswietl_Gry"));
        Wyswietl_Gry->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 390, 195));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents_4);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_3 = new QLabel(scrollAreaWidgetContents_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        horizontalScrollBar_2 = new QScrollBar(scrollAreaWidgetContents_4);
        horizontalScrollBar_2->setObjectName(QString::fromUtf8("horizontalScrollBar_2"));
        horizontalScrollBar_2->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalScrollBar_2, 2, 0, 1, 1);

        plainTextEdit_3 = new QPlainTextEdit(scrollAreaWidgetContents_4);
        plainTextEdit_3->setObjectName(QString::fromUtf8("plainTextEdit_3"));

        gridLayout_3->addWidget(plainTextEdit_3, 1, 0, 1, 1);

        verticalScrollBar_2 = new QScrollBar(scrollAreaWidgetContents_4);
        verticalScrollBar_2->setObjectName(QString::fromUtf8("verticalScrollBar_2"));
        verticalScrollBar_2->setOrientation(Qt::Vertical);

        gridLayout_3->addWidget(verticalScrollBar_2, 1, 1, 1, 1);

        Wyswietl_Gry->setWidget(scrollAreaWidgetContents_4);
        splitter->addWidget(Wyswietl_Gry);
        Wyswietl_Egzemplarze = new QScrollArea(splitter);
        Wyswietl_Egzemplarze->setObjectName(QString::fromUtf8("Wyswietl_Egzemplarze"));
        Wyswietl_Egzemplarze->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 390, 195));
        gridLayout_4 = new QGridLayout(scrollAreaWidgetContents_5);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        plainTextEdit_4 = new QPlainTextEdit(scrollAreaWidgetContents_5);
        plainTextEdit_4->setObjectName(QString::fromUtf8("plainTextEdit_4"));

        gridLayout_4->addWidget(plainTextEdit_4, 1, 0, 1, 1);

        label_4 = new QLabel(scrollAreaWidgetContents_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_4->addWidget(label_4, 0, 0, 1, 1);

        horizontalScrollBar = new QScrollBar(scrollAreaWidgetContents_5);
        horizontalScrollBar->setObjectName(QString::fromUtf8("horizontalScrollBar"));
        horizontalScrollBar->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(horizontalScrollBar, 2, 0, 1, 1);

        verticalScrollBar_3 = new QScrollBar(scrollAreaWidgetContents_5);
        verticalScrollBar_3->setObjectName(QString::fromUtf8("verticalScrollBar_3"));
        verticalScrollBar_3->setOrientation(Qt::Vertical);

        gridLayout_4->addWidget(verticalScrollBar_3, 1, 1, 1, 1);

        Wyswietl_Egzemplarze->setWidget(scrollAreaWidgetContents_5);
        splitter->addWidget(Wyswietl_Egzemplarze);

        horizontalLayout->addWidget(splitter);


        retranslateUi(Interfejs_kierownika);

        QMetaObject::connectSlotsByName(Interfejs_kierownika);
    } // setupUi

    void retranslateUi(QDialog *Interfejs_kierownika)
    {
        Interfejs_kierownika->setWindowTitle(QCoreApplication::translate("Interfejs_kierownika", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Interfejs_kierownika", "Zarzadzaj_Pracownikami", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("Interfejs_kierownika", "Wy\305\233wietl Pracownik\303\263w", nullptr));
        label_11->setText(QCoreApplication::translate("Interfejs_kierownika", "ID", nullptr));
        lineEdit_7->setText(QString());
        label_5->setText(QCoreApplication::translate("Interfejs_kierownika", "Imi\304\231", nullptr));
        lineEdit->setText(QString());
        label_6->setText(QCoreApplication::translate("Interfejs_kierownika", "Nazwisko", nullptr));
        lineEdit_2->setText(QString());
        label_7->setText(QCoreApplication::translate("Interfejs_kierownika", "Nr telefonu", nullptr));
        lineEdit_3->setText(QString());
        label_8->setText(QCoreApplication::translate("Interfejs_kierownika", "Login", nullptr));
        lineEdit_4->setText(QString());
        label_9->setText(QCoreApplication::translate("Interfejs_kierownika", "Has\305\202o", nullptr));
        lineEdit_5->setText(QString());
        label_10->setText(QCoreApplication::translate("Interfejs_kierownika", "Stanowisko", nullptr));
        lineEdit_6->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("Interfejs_kierownika", "Dodaj Pracownika", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Interfejs_kierownika", "Modyfikuj Pracownika", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Interfejs_kierownika", "Usu\305\204 Pracownika", nullptr));
        pushButton->setText(QCoreApplication::translate("Interfejs_kierownika", "Wyloguj", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Interfejs_kierownika", "Wyjd\305\272", nullptr));
        plainTextEdit_2->setPlainText(QCoreApplication::translate("Interfejs_kierownika", "Wy\305\233wietl Transakcje", nullptr));
        label_2->setText(QCoreApplication::translate("Interfejs_kierownika", "Wyswietl_Transakcje", nullptr));
        label_3->setText(QCoreApplication::translate("Interfejs_kierownika", "Wyswietl_Gry", nullptr));
        plainTextEdit_3->setPlainText(QCoreApplication::translate("Interfejs_kierownika", "Wy\305\233wietl Gry\n"
"", nullptr));
        plainTextEdit_4->setPlainText(QCoreApplication::translate("Interfejs_kierownika", "Wy\305\233wietl Egzemplarze\n"
"", nullptr));
        label_4->setText(QCoreApplication::translate("Interfejs_kierownika", "Wyswietl_Egzemplarze", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Interfejs_kierownika: public Ui_Interfejs_kierownika {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFEJS_KIEROWNIKA_H

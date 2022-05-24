/********************************************************************************
** Form generated from reading UI file 'interfejs_technika.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFEJS_TECHNIKA_H
#define UI_INTERFEJS_TECHNIKA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Interfejs_Technika
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter_2;
    QScrollArea *Zarzadzaj_Pracownikami;
    QWidget *scrollAreaWidgetContents_6;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_11;
    QLineEdit *lineEdit_ID;
    QLabel *label_5;
    QLineEdit *lineEdit_Stan;
    QLabel *label_6;
    QLineEdit *lineEdit_Status;
    QLabel *label_7;
    QLineEdit *lineEdit_Cena;
    QLabel *label_8;
    QLineEdit *lineEdit_Opis;
    QPushButton *pushButton_5;
    QSplitter *splitter;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;

    void setupUi(QDialog *Interfejs_Technika)
    {
        if (Interfejs_Technika->objectName().isEmpty())
            Interfejs_Technika->setObjectName(QString::fromUtf8("Interfejs_Technika"));
        Interfejs_Technika->resize(915, 567);
        gridLayout = new QGridLayout(Interfejs_Technika);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter_2 = new QSplitter(Interfejs_Technika);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        Zarzadzaj_Pracownikami = new QScrollArea(splitter_2);
        Zarzadzaj_Pracownikami->setObjectName(QString::fromUtf8("Zarzadzaj_Pracownikami"));
        Zarzadzaj_Pracownikami->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 274, 518));
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

        lineEdit_ID = new QLineEdit(scrollAreaWidgetContents_6);
        lineEdit_ID->setObjectName(QString::fromUtf8("lineEdit_ID"));

        verticalLayout->addWidget(lineEdit_ID);

        label_5 = new QLabel(scrollAreaWidgetContents_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        lineEdit_Stan = new QLineEdit(scrollAreaWidgetContents_6);
        lineEdit_Stan->setObjectName(QString::fromUtf8("lineEdit_Stan"));

        verticalLayout->addWidget(lineEdit_Stan);

        label_6 = new QLabel(scrollAreaWidgetContents_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        lineEdit_Status = new QLineEdit(scrollAreaWidgetContents_6);
        lineEdit_Status->setObjectName(QString::fromUtf8("lineEdit_Status"));

        verticalLayout->addWidget(lineEdit_Status);

        label_7 = new QLabel(scrollAreaWidgetContents_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        lineEdit_Cena = new QLineEdit(scrollAreaWidgetContents_6);
        lineEdit_Cena->setObjectName(QString::fromUtf8("lineEdit_Cena"));

        verticalLayout->addWidget(lineEdit_Cena);

        label_8 = new QLabel(scrollAreaWidgetContents_6);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout->addWidget(label_8);

        lineEdit_Opis = new QLineEdit(scrollAreaWidgetContents_6);
        lineEdit_Opis->setObjectName(QString::fromUtf8("lineEdit_Opis"));

        verticalLayout->addWidget(lineEdit_Opis);

        pushButton_5 = new QPushButton(scrollAreaWidgetContents_6);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);\n"
"border-color: rgb(0, 85, 0);"));

        verticalLayout->addWidget(pushButton_5);

        Zarzadzaj_Pracownikami->setWidget(scrollAreaWidgetContents_6);
        splitter_2->addWidget(Zarzadzaj_Pracownikami);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        pushButton = new QPushButton(splitter);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"border-color: rgb(255, 85, 0);"));
        splitter->addWidget(pushButton);
        pushButton_2 = new QPushButton(splitter);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 20, 20);\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 0, 0);"));
        splitter->addWidget(pushButton_2);
        splitter_2->addWidget(splitter);

        gridLayout->addWidget(splitter_2, 0, 0, 1, 1);

        groupBox = new QGroupBox(Interfejs_Technika);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        horizontalLayout->addWidget(textEdit);


        gridLayout->addWidget(groupBox, 0, 1, 1, 1);


        retranslateUi(Interfejs_Technika);

        QMetaObject::connectSlotsByName(Interfejs_Technika);
    } // setupUi

    void retranslateUi(QDialog *Interfejs_Technika)
    {
        Interfejs_Technika->setWindowTitle(QCoreApplication::translate("Interfejs_Technika", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Interfejs_Technika", "Modyfiluj_Egzemplarze", nullptr));
        plainTextEdit->setPlainText(QString());
        label_11->setText(QCoreApplication::translate("Interfejs_Technika", "ID", nullptr));
        lineEdit_ID->setText(QString());
        label_5->setText(QCoreApplication::translate("Interfejs_Technika", "Stan", nullptr));
        lineEdit_Stan->setText(QString());
        label_6->setText(QCoreApplication::translate("Interfejs_Technika", "Status", nullptr));
        lineEdit_Status->setText(QString());
        label_7->setText(QCoreApplication::translate("Interfejs_Technika", "Cena", nullptr));
        lineEdit_Cena->setText(QString());
        label_8->setText(QCoreApplication::translate("Interfejs_Technika", "Opis", nullptr));
        lineEdit_Opis->setText(QString());
        pushButton_5->setText(QCoreApplication::translate("Interfejs_Technika", "Zatwierd\305\272", nullptr));
        pushButton->setText(QCoreApplication::translate("Interfejs_Technika", "Wyloguj", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Interfejs_Technika", "Wyjd\305\272", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Interfejs_Technika", "Wyswietl_Egzemplarze", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Interfejs_Technika: public Ui_Interfejs_Technika {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFEJS_TECHNIKA_H

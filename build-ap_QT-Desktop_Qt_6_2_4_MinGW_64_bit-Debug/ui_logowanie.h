/********************************************************************************
** Form generated from reading UI file 'logowanie.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGOWANIE_H
#define UI_LOGOWANIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Logowanie
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_login_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_haslo_2;
    QSplitter *splitter_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *Logowanie)
    {
        if (Logowanie->objectName().isEmpty())
            Logowanie->setObjectName(QString::fromUtf8("Logowanie"));
        Logowanie->resize(649, 495);
        groupBox = new QGroupBox(Logowanie);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(190, 160, 271, 201));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_login_2 = new QLineEdit(groupBox);
        lineEdit_login_2->setObjectName(QString::fromUtf8("lineEdit_login_2"));

        horizontalLayout_3->addWidget(lineEdit_login_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_haslo_2 = new QLineEdit(groupBox);
        lineEdit_haslo_2->setObjectName(QString::fromUtf8("lineEdit_haslo_2"));
        lineEdit_haslo_2->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(lineEdit_haslo_2);


        verticalLayout_2->addLayout(horizontalLayout_4);

        splitter_2 = new QSplitter(groupBox);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        pushButton_3 = new QPushButton(splitter_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        splitter_2->addWidget(pushButton_3);
        pushButton_4 = new QPushButton(splitter_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        splitter_2->addWidget(pushButton_4);

        verticalLayout_2->addWidget(splitter_2);


        retranslateUi(Logowanie);

        QMetaObject::connectSlotsByName(Logowanie);
    } // setupUi

    void retranslateUi(QDialog *Logowanie)
    {
        Logowanie->setWindowTitle(QCoreApplication::translate("Logowanie", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Logowanie", "Logowanie", nullptr));
        label_3->setText(QCoreApplication::translate("Logowanie", "Login", nullptr));
        label_4->setText(QCoreApplication::translate("Logowanie", "Has\305\202o", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Logowanie", "Zaloguj", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Logowanie", "Wyjd\305\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Logowanie: public Ui_Logowanie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGOWANIE_H

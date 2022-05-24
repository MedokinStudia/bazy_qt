/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_login;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_haslo;
    QSplitter *splitter;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(295, 184);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_login = new QLineEdit(groupBox);
        lineEdit_login->setObjectName(QString::fromUtf8("lineEdit_login"));

        horizontalLayout->addWidget(lineEdit_login);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_haslo = new QLineEdit(groupBox);
        lineEdit_haslo->setObjectName(QString::fromUtf8("lineEdit_haslo"));
        lineEdit_haslo->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_haslo);


        verticalLayout->addLayout(horizontalLayout_2);

        splitter = new QSplitter(groupBox);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        pushButton = new QPushButton(splitter);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 85, 0);\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(0, 255, 0);"));
        splitter->addWidget(pushButton);
        pushButton_2 = new QPushButton(splitter);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 20, 20);\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 0, 0);"));
        splitter->addWidget(pushButton_2);

        verticalLayout->addWidget(splitter);


        horizontalLayout_3->addWidget(groupBox);

        MainWindow->setCentralWidget(centralwidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Logowanie", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Has\305\202o", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Zaloguj", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Wyjd\305\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

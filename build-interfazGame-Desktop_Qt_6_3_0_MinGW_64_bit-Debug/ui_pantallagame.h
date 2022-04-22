/********************************************************************************
** Form generated from reading UI file 'pantallagame.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANTALLAGAME_H
#define UI_PANTALLAGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PantallaGame
{
public:
    QPushButton *tarjeta01;
    QLabel *titulo;
    QPushButton *tarjeta02;
    QPushButton *tarjeta03;
    QPushButton *tarjeta04;
    QPushButton *tarjeta05;
    QPushButton *tarjeta06;
    QPushButton *tarjeta07;
    QPushButton *tarjeta08;
    QPushButton *tarjeta09;
    QPushButton *tarjeta10;
    QPushButton *tarjeta11;
    QPushButton *tarjeta12;
    QPushButton *tarjeta13;
    QPushButton *tarjeta14;
    QPushButton *tarjeta15;
    QPushButton *tarjeta16;
    QLabel *cronometro;
    QLabel *puntaje;
    QLabel *nombre;

    void setupUi(QWidget *PantallaGame)
    {
        if (PantallaGame->objectName().isEmpty())
            PantallaGame->setObjectName(QString::fromUtf8("PantallaGame"));
        PantallaGame->resize(1071, 711);
        PantallaGame->setStyleSheet(QString::fromUtf8(".QPushButton{\n"
"	border: 5px groove black;\n"
"	background: white;\n"
"	border-radius:15px;\n"
"}\n"
"#PantallaGame{\n"
"	background:black;\n"
"    border: 5px groove black;\n"
"	border-radius:30px;}\n"
"\n"
"\n"
"\n"
"#titulo{\n"
" color:white;\n"
"\n"
"}\n"
"#puntaje{\n"
" color:white\n"
"}\n"
"#nombre{\n"
"	color:white;\n"
"}\n"
"\n"
"\n"
"\n"
""));
        tarjeta01 = new QPushButton(PantallaGame);
        tarjeta01->setObjectName(QString::fromUtf8("tarjeta01"));
        tarjeta01->setGeometry(QRect(130, 80, 151, 131));
        titulo = new QLabel(PantallaGame);
        titulo->setObjectName(QString::fromUtf8("titulo"));
        titulo->setGeometry(QRect(350, 50, 381, 20));
        tarjeta02 = new QPushButton(PantallaGame);
        tarjeta02->setObjectName(QString::fromUtf8("tarjeta02"));
        tarjeta02->setGeometry(QRect(310, 80, 151, 131));
        tarjeta03 = new QPushButton(PantallaGame);
        tarjeta03->setObjectName(QString::fromUtf8("tarjeta03"));
        tarjeta03->setGeometry(QRect(490, 80, 151, 131));
        tarjeta04 = new QPushButton(PantallaGame);
        tarjeta04->setObjectName(QString::fromUtf8("tarjeta04"));
        tarjeta04->setGeometry(QRect(670, 80, 151, 131));
        tarjeta05 = new QPushButton(PantallaGame);
        tarjeta05->setObjectName(QString::fromUtf8("tarjeta05"));
        tarjeta05->setGeometry(QRect(130, 230, 151, 131));
        tarjeta06 = new QPushButton(PantallaGame);
        tarjeta06->setObjectName(QString::fromUtf8("tarjeta06"));
        tarjeta06->setGeometry(QRect(310, 230, 151, 131));
        tarjeta07 = new QPushButton(PantallaGame);
        tarjeta07->setObjectName(QString::fromUtf8("tarjeta07"));
        tarjeta07->setGeometry(QRect(490, 230, 151, 131));
        tarjeta08 = new QPushButton(PantallaGame);
        tarjeta08->setObjectName(QString::fromUtf8("tarjeta08"));
        tarjeta08->setGeometry(QRect(670, 230, 151, 131));
        tarjeta09 = new QPushButton(PantallaGame);
        tarjeta09->setObjectName(QString::fromUtf8("tarjeta09"));
        tarjeta09->setGeometry(QRect(120, 390, 151, 131));
        tarjeta10 = new QPushButton(PantallaGame);
        tarjeta10->setObjectName(QString::fromUtf8("tarjeta10"));
        tarjeta10->setGeometry(QRect(310, 390, 151, 131));
        tarjeta11 = new QPushButton(PantallaGame);
        tarjeta11->setObjectName(QString::fromUtf8("tarjeta11"));
        tarjeta11->setGeometry(QRect(490, 390, 151, 131));
        tarjeta12 = new QPushButton(PantallaGame);
        tarjeta12->setObjectName(QString::fromUtf8("tarjeta12"));
        tarjeta12->setGeometry(QRect(670, 390, 151, 131));
        tarjeta13 = new QPushButton(PantallaGame);
        tarjeta13->setObjectName(QString::fromUtf8("tarjeta13"));
        tarjeta13->setGeometry(QRect(120, 540, 151, 131));
        tarjeta14 = new QPushButton(PantallaGame);
        tarjeta14->setObjectName(QString::fromUtf8("tarjeta14"));
        tarjeta14->setGeometry(QRect(310, 540, 151, 131));
        tarjeta15 = new QPushButton(PantallaGame);
        tarjeta15->setObjectName(QString::fromUtf8("tarjeta15"));
        tarjeta15->setGeometry(QRect(490, 540, 151, 131));
        tarjeta16 = new QPushButton(PantallaGame);
        tarjeta16->setObjectName(QString::fromUtf8("tarjeta16"));
        tarjeta16->setGeometry(QRect(680, 540, 151, 131));
        cronometro = new QLabel(PantallaGame);
        cronometro->setObjectName(QString::fromUtf8("cronometro"));
        cronometro->setGeometry(QRect(850, 220, 181, 31));
        puntaje = new QLabel(PantallaGame);
        puntaje->setObjectName(QString::fromUtf8("puntaje"));
        puntaje->setGeometry(QRect(880, 200, 63, 20));
        nombre = new QLabel(PantallaGame);
        nombre->setObjectName(QString::fromUtf8("nombre"));
        nombre->setGeometry(QRect(890, 100, 63, 20));

        retranslateUi(PantallaGame);

        QMetaObject::connectSlotsByName(PantallaGame);
    } // setupUi

    void retranslateUi(QWidget *PantallaGame)
    {
        PantallaGame->setWindowTitle(QCoreApplication::translate("PantallaGame", "Form", nullptr));
        tarjeta01->setText(QCoreApplication::translate("PantallaGame", "1", nullptr));
        titulo->setText(QCoreApplication::translate("PantallaGame", "HOLA BIENVENIDOS ESPERO QUE TE DIVIERTAS", nullptr));
        tarjeta02->setText(QCoreApplication::translate("PantallaGame", "2", nullptr));
        tarjeta03->setText(QCoreApplication::translate("PantallaGame", "3", nullptr));
        tarjeta04->setText(QCoreApplication::translate("PantallaGame", "4", nullptr));
        tarjeta05->setText(QCoreApplication::translate("PantallaGame", "5", nullptr));
        tarjeta06->setText(QCoreApplication::translate("PantallaGame", "5", nullptr));
        tarjeta07->setText(QCoreApplication::translate("PantallaGame", "6", nullptr));
        tarjeta08->setText(QCoreApplication::translate("PantallaGame", "7", nullptr));
        tarjeta09->setText(QCoreApplication::translate("PantallaGame", "8", nullptr));
        tarjeta10->setText(QCoreApplication::translate("PantallaGame", "9", nullptr));
        tarjeta11->setText(QCoreApplication::translate("PantallaGame", "10", nullptr));
        tarjeta12->setText(QCoreApplication::translate("PantallaGame", "11", nullptr));
        tarjeta13->setText(QCoreApplication::translate("PantallaGame", "12", nullptr));
        tarjeta14->setText(QCoreApplication::translate("PantallaGame", "13", nullptr));
        tarjeta15->setText(QCoreApplication::translate("PantallaGame", "14", nullptr));
        tarjeta16->setText(QCoreApplication::translate("PantallaGame", "15", nullptr));
        cronometro->setText(QCoreApplication::translate("PantallaGame", "cronometro", nullptr));
        puntaje->setText(QCoreApplication::translate("PantallaGame", "TextLabel", nullptr));
        nombre->setText(QCoreApplication::translate("PantallaGame", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PantallaGame: public Ui_PantallaGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANTALLAGAME_H

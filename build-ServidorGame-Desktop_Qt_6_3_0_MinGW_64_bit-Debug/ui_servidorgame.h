/********************************************************************************
** Form generated from reading UI file 'servidorgame.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVIDORGAME_H
#define UI_SERVIDORGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServidorGame
{
public:
    QLabel *label;
    QPushButton *start;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLabel *puntaje2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *puntaje1;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *name1L;
    QLabel *name1;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *name2L;
    QLabel *name2;
    QPushButton *enviarImagenes;

    void setupUi(QWidget *ServidorGame)
    {
        if (ServidorGame->objectName().isEmpty())
            ServidorGame->setObjectName(QString::fromUtf8("ServidorGame"));
        ServidorGame->resize(481, 384);
        ServidorGame->setStyleSheet(QString::fromUtf8("#puntaje1{\n"
"	color : white;\n"
"    qproperty-alignment: AlignCenter;\n"
"    background: teal;\n"
"    border :3px solid silver;\n"
"   border-radius: 13px\n"
"}\n"
"#puntaje2\n"
"{\n"
"	color : white;\n"
"    qproperty-alignmen t: AlignCenter;\n"
"    background: teal;\n"
"    border :3px solid silver;\n"
"   border-radius: 13px\n"
"}\n"
"#name1 {\n"
"\n"
"	color : white;\n"
"    qproperty-alignmen t: AlignCenter;\n"
"    background: teal;\n"
"    border :3px solid silver;\n"
"   border-radius: 13px\n"
"}\n"
"\n"
"#name2{\n"
"	color : white;\n"
"    qproperty-alignmen t: AlignCenter;\n"
"    background: teal;\n"
"    border :3px solid silver;\n"
"   border-radius: 13px\n"
"}\n"
"#start{\n"
"     background:white;\n"
"	 border :3px solid silver;\n"
"   border-radius: 13px;\n"
"	\n"
"}"));
        label = new QLabel(ServidorGame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 10, 63, 20));
        start = new QPushButton(ServidorGame);
        start->setObjectName(QString::fromUtf8("start"));
        start->setGeometry(QRect(130, 320, 191, 29));
        layoutWidget = new QWidget(ServidorGame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(300, 110, 121, 31));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        puntaje2 = new QLabel(layoutWidget);
        puntaje2->setObjectName(QString::fromUtf8("puntaje2"));

        horizontalLayout_4->addWidget(puntaje2);

        layoutWidget1 = new QWidget(ServidorGame);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 110, 121, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        puntaje1 = new QLabel(layoutWidget1);
        puntaje1->setObjectName(QString::fromUtf8("puntaje1"));

        horizontalLayout->addWidget(puntaje1);

        layoutWidget2 = new QWidget(ServidorGame);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(270, 50, 214, 28));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        name1L = new QLabel(layoutWidget2);
        name1L->setObjectName(QString::fromUtf8("name1L"));

        horizontalLayout_2->addWidget(name1L);

        name1 = new QLabel(layoutWidget2);
        name1->setObjectName(QString::fromUtf8("name1"));

        horizontalLayout_2->addWidget(name1);

        layoutWidget3 = new QWidget(ServidorGame);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(0, 50, 226, 28));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        name2L = new QLabel(layoutWidget3);
        name2L->setObjectName(QString::fromUtf8("name2L"));

        horizontalLayout_3->addWidget(name2L);

        name2 = new QLabel(layoutWidget3);
        name2->setObjectName(QString::fromUtf8("name2"));

        horizontalLayout_3->addWidget(name2);

        enviarImagenes = new QPushButton(ServidorGame);
        enviarImagenes->setObjectName(QString::fromUtf8("enviarImagenes"));
        enviarImagenes->setGeometry(QRect(170, 260, 93, 29));

        retranslateUi(ServidorGame);

        QMetaObject::connectSlotsByName(ServidorGame);
    } // setupUi

    void retranslateUi(QWidget *ServidorGame)
    {
        ServidorGame->setWindowTitle(QCoreApplication::translate("ServidorGame", "ServidorGame", nullptr));
        label->setText(QCoreApplication::translate("ServidorGame", "Servidor", nullptr));
        start->setText(QCoreApplication::translate("ServidorGame", "Iniciar Servidor del Juego", nullptr));
        label_3->setText(QCoreApplication::translate("ServidorGame", "Puntaje", nullptr));
        puntaje2->setText(QCoreApplication::translate("ServidorGame", "0", nullptr));
        label_2->setText(QCoreApplication::translate("ServidorGame", "Puntaje", nullptr));
        puntaje1->setText(QCoreApplication::translate("ServidorGame", "0", nullptr));
        name1L->setText(QCoreApplication::translate("ServidorGame", "Nombre Jugador 1", nullptr));
        name1->setText(QCoreApplication::translate("ServidorGame", "\"              \"", nullptr));
        name2L->setText(QCoreApplication::translate("ServidorGame", "Nombre Jugador 2", nullptr));
        name2->setText(QCoreApplication::translate("ServidorGame", "\"                 \"", nullptr));
        enviarImagenes->setText(QCoreApplication::translate("ServidorGame", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServidorGame: public Ui_ServidorGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVIDORGAME_H

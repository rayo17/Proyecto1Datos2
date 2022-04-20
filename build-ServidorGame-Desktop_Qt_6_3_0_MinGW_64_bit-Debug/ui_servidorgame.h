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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServidorGame
{
public:
    QLabel *label;
    QPushButton *start;

    void setupUi(QWidget *ServidorGame)
    {
        if (ServidorGame->objectName().isEmpty())
            ServidorGame->setObjectName(QString::fromUtf8("ServidorGame"));
        ServidorGame->resize(391, 253);
        label = new QLabel(ServidorGame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 20, 63, 20));
        start = new QPushButton(ServidorGame);
        start->setObjectName(QString::fromUtf8("start"));
        start->setGeometry(QRect(80, 170, 191, 29));

        retranslateUi(ServidorGame);

        QMetaObject::connectSlotsByName(ServidorGame);
    } // setupUi

    void retranslateUi(QWidget *ServidorGame)
    {
        ServidorGame->setWindowTitle(QCoreApplication::translate("ServidorGame", "ServidorGame", nullptr));
        label->setText(QCoreApplication::translate("ServidorGame", "Servidor", nullptr));
        start->setText(QCoreApplication::translate("ServidorGame", "Iniciar Servidor del Juego", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServidorGame: public Ui_ServidorGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVIDORGAME_H

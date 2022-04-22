#ifndef TARJETA_H
#define TARJETA_H

#include <QObject>

#include<QTimer>
#include<QTime>
#include<QMessageBox>
#include <QVector>
#include <QHash>
#include <QPushButton>
#include <QMessageBox>
#include <random>
#include <QString>
#include"pantallagame.h"
#include "ui_pantallagame.h"
#include<iostream>
#include<string>
#include<QDebug>


class Tarjeta : public QObject
{
    Q_OBJECT
public:
    explicit Tarjeta(QObject *parent = nullptr);
    /*int cartas;

   /* int tiempo;
    //QTimer *timer;
    //QTime time;


   /* QHash<QString,QString>distribuirTarjeta;
    void definirCoincidencia();
    void showImag();
    int puntaje;
    QPushButton* actualTarjeta;
    QPushButton* anteriorTarjeta;
    int parejasRestantes=8;
    void delay();
   // QVector<QString>tarjetas{"tarjeta01", "tarjeta02", "tarjeta03", "tarjeta04",
                        //     "tarjeta05", "tarjeta06", "tarjeta07", "tarjeta08",
                           //  "tarjeta09", "tarjeta10", "tarjeta11", "tarjeta12","tarjeta13","tarjeta14","tarjeta15","tarjeta16"};
   //PantallaGame *pantalla;



signals:

public slots:
    void voltearTarjeta();
    void conectTarjetas();
    void mezclarTarjet();
    void distribuir();
    void reStartTarjetas();

*/
};

#endif // TARJETA_H

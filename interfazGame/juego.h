#ifndef JUEGO_H
#define JUEGO_H

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
#include "jugador.h"
class PantallaGame;
class Jugador;

class Juego : public QObject
{
    Q_OBJECT
public:
    explicit Juego(QObject *parent = nullptr);
    void count_cartas();
    void set_puntaje();
    void set_tiempo();
    void startGame();
    void startTime();
    void resetGAME();
    void resultadoFinal();
    bool iniciodejugada;
    QVector<QString>tarjetas{"tarjeta01", "tarjeta02", "tarjeta03", "tarjeta04",
                             "tarjeta05", "tarjeta06", "tarjeta07", "tarjeta08",
                             "tarjeta09", "tarjeta10", "tarjeta11", "tarjeta12","tarjeta13","tarjeta14","tarjeta15","tarjeta16"};
    QHash<QString,QString>distribuirTarjeta;
    void definirCoincidencia();
    void showImag();
    int puntaje;
    QPushButton* actualTarjeta;
    QPushButton* anteriorTarjeta;
    int parejasRestantes=8;

    void delay();
    void turno();
    Jugador *cambioDeJugador();




signals:

public slots:
    void stateUpdate();
    void timeUpdate();
    void result();
    void voltearTarjeta();
    void conectTarjetas();
    void mezclarTarjet();
    void distribuir();
    void reStartTarjetas();
private:
    int cartas;

    int tiempo;
    QTimer *timer;
    QTime time;
    PantallaGame *pantalla;
    QMessageBox mBox;
    Jugador *jugador1=new Jugador();
    Jugador *jugador2= new Jugador();
    Jugador *jugadorGeneral=new Jugador();


};

#endif // JUEGO_H

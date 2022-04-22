#ifndef JUGADOR_H
#define JUGADOR_H

#include <QObject>

class Jugador : public QObject
{
    Q_OBJECT
public:
    explicit Jugador(QObject *parent = nullptr);

    bool turno=false;
    int puntaje=0;
    QString nombre;


signals:
private:




};

#endif // JUGADOR_H

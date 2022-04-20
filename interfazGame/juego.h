#ifndef JUEGO_H
#define JUEGO_H

#include <QObject>

class Juego : public QObject
{
    Q_OBJECT
public:
    explicit Juego(QObject *parent = nullptr);

signals:

};

#endif // JUEGO_H

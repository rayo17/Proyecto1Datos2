#ifndef MENSAJEDATAS_H
#define MENSAJEDATAS_H

#include<QString>
class MensajeDatas
{
public:
    MensajeDatas();
    void setNombre1(QString);
    void setNombre2(QString);

    QString getNombre1();
    QString getNombre2();
    QString getPuntaje();
private:
    QString nombre1;
    QString nombre2;
    QString puntaje;


};

#endif // MENSAJEDATAS_H

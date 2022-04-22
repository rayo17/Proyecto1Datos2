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
private:
    QString nombre1;
    QString nombre2;

};

#endif // MENSAJEDATAS_H

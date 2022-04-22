#ifndef PAQUETEENVIADO_H
#define PAQUETEENVIADO_H

#include <QObject>

class PaqueteEnviado:public QString
{
   //  Q_OBJECT
public:
    PaqueteEnviado();
    void setNombre1(QString);
    void setNombre2(QString);
    QString getNombre1();
    QString getNombre2();
private:
    QString nombre1;
    QString nombre2;

};

#endif // PAQUETEENVIADO_H

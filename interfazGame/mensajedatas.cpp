#include "mensajedatas.h"

MensajeDatas::MensajeDatas()
{

}
void MensajeDatas::setNombre1(QString Nombre1){//set nombre1

    nombre1=Nombre1;

}
void MensajeDatas::setNombre2(QString Nombre2){//set nombre2
    nombre2=Nombre2;
}
QString MensajeDatas::getNombre1(){//obtiene el nombre del jugador 1

    return nombre1;
}
QString MensajeDatas::getNombre2(){ // obtiene el nombre del jugador2
    return nombre2;
}

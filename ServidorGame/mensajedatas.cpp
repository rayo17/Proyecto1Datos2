#include "mensajedatas.h"

MensajeDatas::MensajeDatas()
{

}
void MensajeDatas::setNombre1(QString Nombre1){

    nombre1=Nombre1;

}
void MensajeDatas::setNombre2(QString Nombre2){
    nombre2=Nombre2;
}
QString MensajeDatas::getNombre1(){

    return nombre1;
}
QString MensajeDatas::getNombre2(){
    return nombre2;
}

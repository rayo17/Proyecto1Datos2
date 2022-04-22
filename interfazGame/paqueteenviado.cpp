#include "paqueteenviado.h"

PaqueteEnviado::PaqueteEnviado()
{


}
void PaqueteEnviado::setNombre1(QString Nombre1){

    nombre1=Nombre1;

}
void PaqueteEnviado::setNombre2(QString Nombre2){
    nombre2=Nombre2;
}
QString PaqueteEnviado::getNombre1(){

    return nombre1;
}
QString PaqueteEnviado::getNombre2(){
    return nombre2;
}

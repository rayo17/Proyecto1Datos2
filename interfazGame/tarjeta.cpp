#include "tarjeta.h"

Tarjeta::Tarjeta(QObject *parent)
    : QObject{parent}
{

}

/*
void Tarjeta::definirCoincidencia(){
    if (distribuirTarjeta[ actualTarjeta->objectName()]==distribuirTarjeta[anteriorTarjeta->objectName()]){
          puntaje+=15;
          pantalla->ui->puntaje->setText(QString::number(puntaje));
          parejasRestantes--;
          delay();
          actualTarjeta->setStyleSheet("#" + actualTarjeta->objectName() + "{ background-image: url(://tarjeta.png) }");
          anteriorTarjeta->setStyleSheet("#" +  anteriorTarjeta->objectName() + "{ background-image: url(://tarjeta.png) }");
      }
      else{
          puntaje-=5;
          //pantalla->ui->puntaje->setText(QString::number(puntaje));
          QTimer::singleShot(1000, this, SLOT(reStartTarjetas()));
      }
}

void Tarjeta::reStartTarjetas(){

    anteriorTarjeta->setStyleSheet("#" + anteriorTarjeta->objectName() + "{ }");
    actualTarjeta->setStyleSheet("#" + actualTarjeta->objectName() + "{ }");
    actualTarjeta->setEnabled(true);
    anteriorTarjeta->setEnabled(true);
}
void Tarjeta::delay() {
    QTime dieTime= QTime::currentTime().addSecs(1);
    while( QTime::currentTime() < dieTime ){
     QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
    }

}
*/

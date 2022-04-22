#include "juego.h"
#include "pantallagame.h"
#include "ui_pantallagame.h"
#include<iostream>
#include<string>
#include<QDebug>
#include"jugador.h"
using namespace std;

Juego::Juego(QObject *parent)
    : QObject{parent}
{
    timer=new QTimer(this);// created timer
    connect(timer,SIGNAL(timeout()),SLOT(stateUpdate()));//se conecta el timer y se actualiza

    pantalla= new PantallaGame();//objeto PantallaGame creado
    conectTarjetas();
}
void Juego::startGame(){//start the Game
    puntaje=0; //point zero
    time.setHMS(0,1,0);//colococa el formatato hora,minutos y segundos
    //pantalla->ui->puntaje->setText(QString::number(puntaje));
    iniciodejugada=false;
   jugador1->puntaje=0;
   jugador2->puntaje=0;
   jugador1->turno=true;
   jugador1->nombre="juador1";
   jugador2->nombre="jugador2";
   jugadorGeneral=jugador1;
   pantalla->ui->nombre->setText( jugadorGeneral->nombre);



    mezclarTarjet();
    distribuir();
    //turno();
    pantalla->ui->cronometro->setText(time.toString("m:ss"));//puntero pantalla
    timer->start(1000);// el temporizador se inicializa en un minuto
    pantalla->show();// se muestra la pantalla

}

void Juego::startTime(){

}

void Juego::result(){

}


void Juego::timeUpdate(){// metedo actualizador del tiempo
    time=time.addSecs(-1);// resta 1 segundo al tiempo actual para que parezca que se esta agotando
    pantalla->ui->cronometro->setText(time.toString("m:ss"));//se colocha en pantalla la actualizacion

}

void Juego::stateUpdate(){// metodo que se ejecuta con el SLOT
    timeUpdate();
    //result();

}

void Juego::resultadoFinal(){
    mBox.setWindowTitle("el juego a Finalizado");
    timer->stop();

}
void Juego::conectTarjetas(){
    //se conectan los botones y cuando son presionados se realiza el slot voltear
    connect(pantalla->ui->tarjeta01,SIGNAL(clicked()),this,SLOT(voltearTarjeta()));//1
    connect(pantalla->ui->tarjeta02,SIGNAL(clicked()),this,SLOT(voltearTarjeta()));
    connect(pantalla->ui->tarjeta03,SIGNAL(clicked()),this,SLOT(voltearTarjeta()));
    connect(pantalla->ui->tarjeta04,SIGNAL(clicked()),this,SLOT(voltearTarjeta()));
    connect(pantalla->ui->tarjeta05,SIGNAL(clicked()),this,SLOT(voltearTarjeta()));
    connect(pantalla->ui->tarjeta06,SIGNAL(clicked()),this,SLOT(voltearTarjeta()));
    connect(pantalla->ui->tarjeta07,SIGNAL(clicked()),this,SLOT(voltearTarjeta()));
    connect(pantalla->ui->tarjeta08,SIGNAL(clicked()),this,SLOT(voltearTarjeta()));
    connect(pantalla->ui->tarjeta09,SIGNAL(clicked()),this,SLOT(voltearTarjeta()));
    connect(pantalla->ui->tarjeta10,SIGNAL(clicked()),this,SLOT(voltearTarjeta()));
    connect(pantalla->ui->tarjeta11,SIGNAL(clicked()),this,SLOT(voltearTarjeta()));
    connect(pantalla->ui->tarjeta12,SIGNAL(clicked()),this,SLOT(voltearTarjeta()));
    connect(pantalla->ui->tarjeta13,SIGNAL(clicked()),this,SLOT(voltearTarjeta()));
    connect(pantalla->ui->tarjeta14,SIGNAL(clicked()),this,SLOT(voltearTarjeta()));
    connect(pantalla->ui->tarjeta15,SIGNAL(clicked()),this,SLOT(voltearTarjeta()));
    connect(pantalla->ui->tarjeta16,SIGNAL(clicked()),this,SLOT(voltearTarjeta()));

}
void Juego::mezclarTarjet(){
    unsigned raiz = std::chrono::system_clock::now().time_since_epoch().count();
      shuffle (tarjetas.begin(), tarjetas.end(), std::default_random_engine(raiz));//mezcla los elemntos del vector tarjetas
}
void Juego::distribuir(){//distribuye las tarjetas
    auto varIterador=tarjetas.begin();// se recorre el vector con iteradores
    for(int i=1;i<=8;i++){//son 8 tarjetas

        QString nombreArchivo="0"+QString::number(i)+".png";// se cargan las imagenes
        distribuirTarjeta[(*varIterador)]=nombreArchivo;
        varIterador++;
        distribuirTarjeta[(*varIterador)]=nombreArchivo;
        varIterador++;

    }
}

void Juego::showImag(){
    QString name_of_tarj=actualTarjeta->objectName( );
    QString img=distribuirTarjeta[name_of_tarj];
    actualTarjeta->setStyleSheet("#" + name_of_tarj + "{ background-image: url(://" + img + ") }");
}

void Juego::voltearTarjeta(){
    cout<<"voltearTarjeta"<<endl;
      actualTarjeta=qobject_cast<QPushButton*>(sender());//obtiene el boton clickeado
      showImag(); 
      actualTarjeta->setEnabled(false);//desabilita la tarjeta actual
      cout<<"desabilitar tarjeta"<<endl;
      if (!iniciodejugada){
          anteriorTarjeta=actualTarjeta;
          iniciodejugada=true;
      }
      else{
          definirCoincidencia();
          iniciodejugada=false;

      }
}

void Juego::definirCoincidencia(){// define si las imagenes presionadas son las mismas
    if (distribuirTarjeta[ actualTarjeta->objectName()]==distribuirTarjeta[anteriorTarjeta->objectName()]){
         jugadorGeneral->puntaje+=2;// si las son se suman dos puntos al jugador
          pantalla->ui->nombre->setText(jugadorGeneral->nombre);//se muestra en pantalla

          pantalla->ui->puntaje->setText(QString::number(jugadorGeneral->puntaje));
          parejasRestantes--;
          jugadorGeneral=cambioDeJugador();
          pantalla->ui->nombre->setText( jugadorGeneral->nombre);
          pantalla->ui->puntaje->setText(QString::number(jugadorGeneral->puntaje));
          delay();
          actualTarjeta->setStyleSheet("#" + actualTarjeta->objectName() + "{ background-image: url(://tarjeta.png) }");
          anteriorTarjeta->setStyleSheet("#" +  anteriorTarjeta->objectName() + "{ background-image: url(://tarjeta.png) }");
          //definirResultadoFinal();aq2

      }
      else{//sino entonces ee restan dos puntos
          jugadorGeneral->puntaje-=2;
          pantalla->ui->nombre->setText( jugadorGeneral->nombre);
          pantalla->ui->puntaje->setText(QString::number(jugadorGeneral->puntaje));

          QTimer::singleShot(1000, this, SLOT(reStartTarjetas()));

      }
     jugadorGeneral=cambioDeJugador();
     pantalla->ui->nombre->setText( jugadorGeneral->nombre);
     pantalla->ui->puntaje->setText(QString::number(jugadorGeneral->puntaje));



}

void Juego::reStartTarjetas(){//restaura todas las tarjetas

    anteriorTarjeta->setStyleSheet("#" + anteriorTarjeta->objectName() + "{ }");
    actualTarjeta->setStyleSheet("#" + actualTarjeta->objectName() + "{ }");

       //re-enable both tiles so they can be used on another turn
    actualTarjeta->setEnabled(true);//habilita el boton la tarjeta
    anteriorTarjeta->setEnabled(true);//habilita el boton de la tarjeta
}
void Juego::delay() {//Retarda el tiempo
    QTime dieTime= QTime::currentTime().addSecs(1);
    while( QTime::currentTime() < dieTime ){
     QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
    }

}
void Juego::turno(){


}

Jugador *Juego::cambioDeJugador(){//hace un cambio de turno de jugador


    if(jugador1->turno==true){
       jugador1->turno=false;
       jugador2->turno=true;
        cout<<"juador2"<<endl;
       return jugador2;

   }
   else{
       jugador1->turno=true;
       jugador2->turno=false;
       cout<<"juador1"<<endl;
       return jugador1;

    }

}

#include "widget.h"
#include "ui_widget.h"
#include <QTcpSocket>
#include "juego.h"
#include<QMessageBox>
#include<QTextStream>
#include<iostream>
#include"json.h"
#include"mensajedatas.h"
#include<QJsonArray>
#include<QJsonObject>
#include<QByteArray>
#include<QJsonDocument>
#include<QBuffer>

using namespace std;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_start_clicked()//eventos empezar juego
{
    Csocket=new QTcpSocket(this);//se crea el socket para la comunicacion entre el cliente servidor
    Csocket->connectToHost("localHost",8887);// se conecta al localhost puerto 8887
    messageBx.setWindowTitle("game memory");//mensaje cuando termina el juego
    if(Csocket->waitForConnected(3000)){
      //  QTextStream stream (Csocket);
         QMessageBox::information(this,"cliente","cliente conectaco");
         envia();

        // QJsonArray arrayJson{};

        // enviarNombreJugador1(stream,ui->name1->text());



         game=new Juego;// objeto juego
         game->startGame();// se inicia el juego

    }
    else
         {
         QMessageBox::critical(this,"cliente","no puede conectar al sevidor, no puede empezar la partida");
    }
    cout<<"salida"<<endl;
    // connect(Csocket,SIGNAL(readyRead()),this,SLOT(leerImagen()));


}


void Widget::on_quit_clicked()//eventos salida
{
    close();
}







void Widget::envia(){
    QTextStream stream(Csocket);// se hacel el flujo de datos del seocket
    Json jason;
    QJsonObject jasonO;
    MensajeDatas mensaje;
    mensaje.setNombre1(ui->name1->text());// se obtiene el nombre1 para ser enviado
    mensaje.setNombre2(ui->name2->text());//se obtiene el nombre 2 para ser enviado
    jasonO=jason.convertor(mensaje);// se agrega al jason
    QJsonArray arrayJson{jasonO};
    QJsonDocument docJson(arrayJson);
    QString stringjson=QString::fromLatin1(docJson.toJson());
    stream<<stringjson;//se envia el stream
    cout<<"envio de informacion"<<endl;
    Csocket->flush();//se libera socket

}

/*void Widget::leerImagen(){
    cout<<"recibe imagenes"<<endl;
QBuffer *imgb = new QBuffer();
imgb->open(QIODevice::ReadWrite);
Csocket->waitForReadyRead(1);
QByteArray temp;
temp = Csocket->readAll();
imgb->write(temp);
QImage pic;
pic.loadFromData(imgb->buffer());
if(!pic.isNull())
  {
      qDebug() << "Image file was received ";
      qDebug() << "size = " << temp.size();
   }else{
      qDebug() << "Pic is NULL";
      qDebug() << "size = " << temp.size();
   }
QPixmap p1(QPixmap::fromImage(pic));
QIcon p2(p1);

}*/



#include "servidorgame.h"
#include "ui_servidorgame.h"
#include<QTcpSocket>
#include<QTcpServer>
#include<QTextStream>
#include<QMessageBox>
#include<QString>
#include<iostream>
#include<QBuffer>
#include<QImage>
#include<QDebug>

using namespace std;
ServidorGame::ServidorGame(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ServidorGame)
{
    ui->setupUi(this);
    server=new QTcpServer(this);
    socket=nullptr;
}

ServidorGame::~ServidorGame()
{
    delete ui;
}

void ServidorGame::leerDatos()
{
    cout<<"lee datos"<<endl;
    QTextStream stream(socket);//se lee los datos del socket
   auto texto = stream.readAll();// se lee el stream
   mensajeRecibido = jsonServidor.getClass(texto);//clase mensaje clase que tiene setter y getter para agarrar los datos enviados
   ui->name1->setText(mensajeRecibido.getNombre1());
   ui->name2->setText(mensajeRecibido.getNombre2());



}


void ServidorGame::nuevaConeccion(){// slot de la señal newConnection
    socket=server->nextPendingConnection();
    connect(socket,SIGNAL(readyRead()),this,SLOT(leerDatos()));
    cout<<"leer"<<endl;
}

void ServidorGame::leer(){

    QTextStream a(socket);

    ui->name1->setText(a.readAll());
    ui->name1->selectedText();
    cout<<"\n datos leidos";
}

void ServidorGame::on_start_clicked()
{
    server->listen(QHostAddress::Any,8887);//servidor escuachando en el puerto 8887
    QMessageBox::information(this, "servidor", "servidor iniciado");//mensaje de servidor iniciado
    cout<<"iniciado"<<endl;
    connect(server,SIGNAL(newConnection()),this,SLOT(nuevaConeccion()));//se conecta el servidor con la aplicacion y espera a que haya un cliente conectado
}

/*void Servidor::enviarCarta(){

    QByteArray byteAarray;
   QBuffer buffer(&byteAarray);




}*/


void ServidorGame::on_enviarImagenes_clicked(){
    QImage image;
    image.load("01.png","PNG");
    qDebug()<<image.load("01.png","PNG");
    QByteArray ba;              // Construct a QByteArray object
    QBuffer buffer(&ba);        // Construct a QBuffer object using the QbyteArray
    image.save(&buffer, "PNG"); // Save the QImage data into the QBuffer
    socket->write(ba);
    qDebug()<<socket->write(ba);
    // Send the QBuffer (QbyteArray) over a socket
    cout<<"envio de imagenes"<<endl;
    socket->flush();


}


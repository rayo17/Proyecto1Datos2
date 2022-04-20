#include "servidorgame.h"
#include "ui_servidorgame.h"
#include<QTcpSocket>
#include<QTcpServer>
#include<QTextStream>
#include<QMessageBox>
#include<string>
#include<iostream>
#include<QBuffer>

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


void ServidorGame::nuevaConeccion(){// slot de la señal newConnection
    socket=server->nextPendingConnection();
    connect(socket,SIGNAL(readyRead()),this,SLOT(leer()));
    cout<<"leer"<<endl;
}

void ServidorGame::leer(){

    QTextStream a(socket);
    //QString b=a.readAll();
    //paqueteDatos=a.device();



   // ui->name1->setText(a.readAll());
    //ui->name1->selectedText();
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



void leerDatos(){


}


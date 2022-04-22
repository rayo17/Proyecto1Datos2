#ifndef SERVIDORGAME_H
#define SERVIDORGAME_H

#include <QWidget>
#include"json.h"
#include<mensajedatas.h>


QT_BEGIN_NAMESPACE
namespace Ui { class ServidorGame; }
QT_END_NAMESPACE
class QTcpSocket;
class QTcpServer;
//class Paquete;

class ServidorGame : public QWidget
{
    Q_OBJECT

public:
    ServidorGame(QWidget *parent = nullptr);
    ~ServidorGame();


private:
    Ui::ServidorGame *ui;
    QTextStream stream;//
    QTcpSocket *socket;//objeto socket para enviar y recibir datos
    QTcpServer *server; // objeto server para abrir puerto para conectarse
    MensajeDatas mensajeRecibido;
    Json jsonServidor;
    //Tarjeta *arrayTarjeta[5];
    //Paquete *paqueteDatos;

    //PaqueteEnviado datosRecibidos;
private slots:
    void on_start_clicked();// empieza el serviodr
    void nuevaConeccion();// realiza la nueva conneccion del socket
   void leer();// lee los datos del socket
    void leerDatos();
    //void enviarImagenes();


    void on_enviarImagenes_clicked();
};
#endif // SERVIDORGAME_H

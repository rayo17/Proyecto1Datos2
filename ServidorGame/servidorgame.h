#ifndef SERVIDORGAME_H
#define SERVIDORGAME_H

#include <QWidget>

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
    QTextStream stream;
    QTcpSocket *socket;//objeto socket para enviar y recibir datos
    QTcpServer *server; // objeto server para abrir puerto para conectarse
    //Tarjeta *arrayTarjeta[5];
    //Paquete *paqueteDatos;
private slots:
    void on_start_clicked();
    void nuevaConeccion();
    void leer();
};
#endif // SERVIDORGAME_H

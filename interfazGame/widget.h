#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include<QMessageBox>




class QTcpSocket;
class Juego;


QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void envia();

    void enviaImagenes();






private slots:


    void on_start_clicked();

    void on_quit_clicked();
    //void leerImagen();

private:
    Ui::Widget *ui;//objeto ui
    QTcpSocket *Csocket;//objeto socket
    Juego *game;
    QMessageBox messageBx;

    //PaqueteEnviado datosEnviados;
};
#endif // WIDGET_H

#include "servidorgame.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ServidorGame w;
    w.show();
    return a.exec();
}

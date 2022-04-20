#ifndef SERVIDORGAME_H
#define SERVIDORGAME_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class ServidorGame; }
QT_END_NAMESPACE

class ServidorGame : public QWidget
{
    Q_OBJECT

public:
    ServidorGame(QWidget *parent = nullptr);
    ~ServidorGame();

private:
    Ui::ServidorGame *ui;
};
#endif // SERVIDORGAME_H

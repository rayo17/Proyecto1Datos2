#include "servidorgame.h"
#include "ui_servidorgame.h"

ServidorGame::ServidorGame(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ServidorGame)
{
    ui->setupUi(this);
}

ServidorGame::~ServidorGame()
{
    delete ui;
}


#include "json.h"
#include<QJsonArray>
#include<QJsonObject>
#include<QTextStream>
#include<QJsonDocument>
#include<QString>
Json::Json()
{

}
QJsonObject Json::convertor(MensajeDatas Message){// pasa el mensaje a un objeto json
    QJsonObject Json = *new QJsonObject();
    Json.insert("nombre1", QJsonValue::fromVariant(Message.getNombre1()));// inserta el nombre del jugador1
    Json.insert("nombre2", QJsonValue::fromVariant(Message.getNombre2()));//inserta el nombre del jugador2

    return Json;//retorna el objeto joson

}
MensajeDatas Json::getClass(QString str){
    MensajeDatas mensage;
    QJsonObject json_object;
    QJsonDocument json_recive = QJsonDocument::fromJson(str.toLatin1());
    QJsonArray jsonArray = json_recive.array();
    if(!jsonArray.isEmpty()){
        QJsonObject json_object = jsonArray.first().toObject();
        QJsonValue name1 = json_object["nombre1"];
        QJsonValue name2 = json_object["nombre2"];

        mensage.setNombre1(name1.toString());
        mensage.setNombre2(name2.toString());
    }
    return mensage;
}

#include "json.h"
#include<QJsonArray>
#include<QJsonObject>
#include<QTextStream>
#include<QJsonDocument>
#include<QString>

Json::Json()
{

}
QJsonObject Json::convertor(MensajeDatas Message){
    QJsonObject Json = *new QJsonObject();
    Json.insert("nombre1", QJsonValue::fromVariant(Message.getNombre1()));
    Json.insert("nombre2", QJsonValue::fromVariant(Message.getNombre2()));

    return Json;

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

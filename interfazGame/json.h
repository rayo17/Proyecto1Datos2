#ifndef JSON_H
#define JSON_H
#include<QJsonObject>
#include<mensajedatas.h>


class Json
{
public:
    Json();
    QJsonObject convertor(MensajeDatas);
    MensajeDatas getClass(QString);


};

#endif // JSON_H

#ifndef PERSON_H
#define PERSON_H
#include <QString>

class Person
{
public:
    Person();
    void setName(QString name);
    void setPhoneNo(QString phone);
    void setPlace(QString place);

    QString getName();
    QString getPhoneNo();
    QString getPlace();

private :
    QString mName;
    QString mPhoneNo;
    QString mPlace;
};

#endif // PERSON_H

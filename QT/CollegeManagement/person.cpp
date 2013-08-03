#include "person.h"

Person::Person()
{
}

void Person::setName(QString name){
    mName = name;
}

void Person::setPhoneNo(QString phone){
    mPhoneNo = phone;
}

void Person::setPlace(QString place){
    mPlace = place;
}

QString Person::getName(){
    return mName;
}

QString Person::getPhoneNo(){
    return mPhoneNo;
}

QString Person::getPlace(){
    return mPlace;
}

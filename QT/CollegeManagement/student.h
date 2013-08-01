#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"

class Student : public Person
{
public:
    Student();

    void setMarks(int mark);
    int getMarks();
private :
    int mMarks;
};

#endif // STUDENT_H

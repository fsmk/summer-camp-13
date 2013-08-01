#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "person.h"

class Employee : public Person
{
public:
    Employee();

    void setSalary(int sal);
    int  getSalary();

private :
    int mSalary;
};

#endif // EMPLOYEE_H

#include "employee.h"

Employee::Employee()
{
}

void Employee::setSalary(int sal){
    mSalary = sal;
}

int Employee::getSalary(){
    return mSalary;
}

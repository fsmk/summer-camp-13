
#include <iostream>
using namespace std;

class Person {
    int phoneNo;
    char name[20];

    void jvit_1() {

        cout << "\n JVIT_1 Phone no " << phoneNo;
        cout << "Name " << name ;
    }

   public:

    void jvit_2(){
        jvit_1();
        cout << "\n JVIT_2 Phone no " << phoneNo;
        cout << "Name " << name ;
    }

    void jvit_3();
};

void Person::jvit_3(){
    cout << "\n JVIT_3 Phone no " << phoneNo;
    cout << "Name " << name ;
}

class Student {
    int phoneNo;
    char name[20];

    void jvit_4() {

        cout << "\n JVIT_1 Phone no " << phoneNo;
        cout << "Name " << name ;
    }
    void jvit_5(){
        cout << "\n JVIT_2 Phone no " << phoneNo;
        cout << "Name " << name ;
    }

    void jvit_6(){
        cout << "\n JVIT_3 Phone no " << phoneNo;
        cout << "Name " << name ;
    }
};
int phoneNo;
char name[20];

void jvit_3() {
    //int phoneNo;
    //char name[20];

    cout << "PHoen no " << phoneNo;
    cout << "Name " << name ;
}

void jvit_4() {
    //int phoneNo;
    //char name[20];

    cout << "PHoen no " << phoneNo;
    cout << "Name " << name ;
}

void jvit_5() {
    //int phoneNo;
    //char name[20];

    cout << "PHoen no " << phoneNo;
    cout << "Name " << name ;
}

void jvit_6() {
    //int phoneNo;
    //char name[20];

    cout << "PHoen no " << phoneNo;
    cout << "Name " << name ;
}

void jvit_1() {
    //int phoneNo;
    //char name[20];

    cout << "PHoen no " << phoneNo;
    cout << "Name " << name ;
}

void jvit_2() {
    //int phoneNo;
    //char name[20];

    cout << "PHoen no " << phoneNo;
    cout << "Name " << name ;
}

int main(int argc, char *argv[])
{
    std::cout << "Hello world" << std::endl;


    std::cout << "Enter the name" ;
    std::cin >> name;


    std::cout << "Enter the phone#" ;
    std::cin >> phoneNo;
    jvit_1();
    jvit_2();
    jvit_4();
    jvit_3();
    jvit_5();
    jvit_6();

    cout << "\n\n*****I am creating class from now on****";

    Person firstPerson;
    firstPerson.jvit_2();
    Student firstStudent;



}




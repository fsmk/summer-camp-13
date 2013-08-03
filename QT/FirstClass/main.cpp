#include <QtCore/QCoreApplication>
#include <iostream>
using namespace std;

class person {
    int mPhoneNo;
    char mName[30];

    static int count;

//    person() {

//    }

public :
//    void person() {
//        cout << "Default Constructor";
//        mPhoneNo = 10;
//        strcpy(mName, "JVIT");
//    }

    person(int a=0, char name[30]="JVIT") {
        cout << "\n Default Arg Constructor";
        mPhoneNo = a;
        strcpy(mName, name);
        count++;
        char* nam = new char[30];
    }

//    void Person(int a, char name[30]) {
//        mPhoneNo = a;
//        strcpy(mName, name);
//    }

    void getName() {
        cout << "Enter Person name =" ;
        cin >> mName;
    }

    void getPhone() {
        cout << " Enter Phone No = ";
        cin >> mPhoneNo;
    }

    void getdata() {
        cout << "Enter Person name =" ;
        cin >> mName;
        cout << " Enter Phone No = ";
        cin >> mPhoneNo;
    }

void printData() ;

};

void person::printData() {
    cout << "\n Name =" << mName;
    cout << "\n FoneNo =" << mPhoneNo;
    cout << "\n Number of Objects =" << count;
}

int person::count = 0;

class student {
    int mPhoneNo;
    char mName[30];


//    student () {

//    }

    void getName() {
        cout << "Enter Person name =" ;
        cin >> mName;
    }

    void getPhone() {
        cout << " Enter Phone No = ";
        cin >> mPhoneNo;
    }

    void getdata() {
        cout << "Enter Person name =" ;
        cin >> mName;
        cout << " Enter Phone No = ";
        cin >> mPhoneNo;
    }
};
int main(int argc, char *argv[])
{
    person person1;
    student student1;

    //person1.getName();
    person1.printData();
    person person2(2000,"Sharat");
    person2.printData();

//    person1.getPhone();
//    person1.getdata();

    return 0;
}



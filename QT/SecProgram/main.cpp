#include <QtCore/QCoreApplication>
#include <iostream>
using namespace std;

void printjvit();

int main(int argc, char *argv[])
{

    cout << "Hello world" << endl;
    int phoneNo;
    char name[20];

    cout << "Enter the name = " ;
    cin >> name;


    cout << "Enter the phone# " ;
    cin >> phoneNo;


    cout << " Name  = " << name;
    cout << " Phone = " << phoneNo;
    printjvit();

}

void printjvit() {
    int phoneNo;
    char name[20];

    cout << " JVIT Name  = " << name;
    cout << " JVIT Phone = " << phoneNo;
}

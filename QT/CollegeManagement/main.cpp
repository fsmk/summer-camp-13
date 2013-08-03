#include "mainwindow.h"
#include <QApplication>
#include "login.h"
#include "mainwidget.h"
#include "employeewindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFont font("Times", 30, QFont::Bold);
    a.setFont(font);

    Login w;
    w.show();

    QLabel lab;
    QLabel *lab1;
    lab1 = new QLabel;
    lab1->show();
    lab.show();


    return a.exec();
}


#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QWidget>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QRadioButton>
#include <QCheckBox>
#include <QDebug>

#include "employeewindow.h"
#include "studentwindow.h"
#include "employee.h"
#include "student.h"

class MainWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MainWidget(QWidget *parent = 0);
    
signals:
    
public slots:
    void processStudent();
    void processEmployee();
    void saveStudentData();
    void saveEmployeeData();

private :

    QRadioButton *mEmployee;
    QRadioButton *mStudent;

    QHBoxLayout  *mHL1;
    QVBoxLayout  *mVLayout;

    EmployeeWindow *eWin;
    StudentWindow  *sWin;


};

#endif // MAINWIDGET_H

#include "mainwidget.h"

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent)
{
    mEmployee = new QRadioButton("Employee");
    mEmployee->setChecked(true);
    mStudent = new QRadioButton("Student");
    mHL1 = new QHBoxLayout;
    mHL1->addWidget(mEmployee);
    mHL1->addWidget(mStudent);
    mVLayout = new QVBoxLayout;

    mVLayout->addLayout(mHL1);

    eWin = new EmployeeWindow;
    sWin = new StudentWindow;
    mVLayout->addWidget(eWin);

    setLayout(mVLayout);

    connect(mEmployee,SIGNAL(clicked()),this,SLOT(processEmployee()));
    connect(mStudent,SIGNAL(clicked()),this,SLOT(processStudent()));
    connect(eWin->mAdd,SIGNAL(clicked()),this,SLOT(saveEmployeeData()));
    connect(sWin->mAdd,SIGNAL(clicked()),this,SLOT(saveStudentData()));
}

void MainWidget::processEmployee(){
    qDebug() << "Employee selected " << endl;
    mVLayout->removeWidget(sWin);
    mVLayout->addWidget(eWin);

    sWin->hide();
    eWin->show();
}

void MainWidget::processStudent(){
    qDebug() << "Student selected " << endl;
    mVLayout->removeWidget(eWin);
    mVLayout->addWidget(sWin);
    eWin->hide();
    sWin->show();
}

void MainWidget::saveEmployeeData(){
    qDebug() << "Save Employee Data" << endl;
    qDebug() << " Name =" << eWin->mNameEdit->text();
    qDebug() << " Phone =" << eWin->mPhoneEdit->text();
    qDebug() << " Place =" << eWin->mPlaceEdit->text();
    qDebug() << " Salary =" << eWin->mSalaryEdit->text();

    Employee emp;
    emp.setName(eWin->mNameEdit->text());
    emp.setPhoneNo(eWin->mPhoneEdit->text());
    emp.setPlace(eWin->mPlaceEdit->text());
    emp.setSalary(eWin->mSalaryEdit->text().toInt());
}

void MainWidget::saveStudentData(){
    qDebug() << "Save Student Data" << endl;
    qDebug() << " Name =" << sWin->mNameEdit->text();
    qDebug() << " Phone =" << sWin->mPhoneEdit->text();
    qDebug() << " Place =" << sWin->mPlaceEdit->text();
    qDebug() << " Marks =" << sWin->mMarksEdit->text();

    Student student;
    student.setName(sWin->mNameEdit->text());
    student.setPhoneNo(sWin->mPhoneEdit->text());
    student.setPlace(sWin->mPlaceEdit->text());
    student.setMarks(sWin->mMarks->text().toInt());
}

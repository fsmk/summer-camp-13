#ifndef EMPLOYEEWINDOW_H
#define EMPLOYEEWINDOW_H

#include <QWidget>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QRadioButton>
#include <QCheckBox>


class EmployeeWindow : public QWidget
{
    Q_OBJECT
public:
    explicit EmployeeWindow(QWidget *parent = 0);
    
signals:
    
public slots:

public :
    QLabel *mName;
    QLabel *mPhoneNo;
    QLabel *mPlace;
    QLabel *mSalary;

    QLineEdit *mNameEdit;
    QLineEdit *mPhoneEdit;
    QLineEdit *mPlaceEdit;
    QLineEdit *mSalaryEdit;

    QPushButton *mAdd;
    QPushButton *mUpdate;
    QPushButton *mCancel;

    QHBoxLayout *mHL1, *mHL2, *mHL3, *mHL4, *mHL5;
    QVBoxLayout *mVLayout;
    
};

#endif // EMPLOYEEWINDOW_H

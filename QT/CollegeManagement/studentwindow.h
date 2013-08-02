#ifndef STUDENTWINDOW_H
#define STUDENTWINDOW_H

#include <QWidget>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QRadioButton>
#include <QCheckBox>

class StudentWindow : public QWidget
{
    Q_OBJECT
public:
    explicit StudentWindow(QWidget *parent = 0);
    
signals:
    
public slots:
    
public :
    QLabel *mName;
    QLabel *mPhoneNo;
    QLabel *mPlace;
    QLabel *mMarks;

    QLineEdit *mNameEdit;
    QLineEdit *mPhoneEdit;
    QLineEdit *mPlaceEdit;
    QLineEdit *mMarksEdit;

    QPushButton *mAdd;
    QPushButton *mUpdate;
    QPushButton *mCancel;

    QHBoxLayout *mHL1, *mHL2, *mHL3, *mHL4, *mHL5;
    QVBoxLayout *mVLayout;


};

#endif // STUDENTWINDOW_H

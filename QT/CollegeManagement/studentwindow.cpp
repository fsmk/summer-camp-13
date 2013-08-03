#include "studentwindow.h"

StudentWindow::StudentWindow(QWidget *parent) :
    QWidget(parent)
{
    mName = new QLabel("Name");
    mNameEdit = new QLineEdit();
    mHL1 = new QHBoxLayout;
    mHL1->addWidget(mName);
    mHL1->addWidget(mNameEdit);

    mPhoneNo = new QLabel("Phone");
    mPhoneEdit = new QLineEdit();
    mHL2 = new QHBoxLayout;
    mHL2->addWidget(mPhoneNo);
    mHL2->addWidget(mPhoneEdit);

    mPlace = new QLabel("Place");
    mPlaceEdit = new QLineEdit();
    mHL3 = new QHBoxLayout;
    mHL3->addWidget(mPlace);
    mHL3->addWidget(mPlaceEdit);


    mMarks = new QLabel("Marks");
    mMarksEdit = new QLineEdit();
    mHL4 = new QHBoxLayout;
    mHL4->addWidget(mMarks);
    mHL4->addWidget(mMarksEdit);

    mAdd = new QPushButton("Add");
    mUpdate = new QPushButton("Update");
    mCancel = new QPushButton("Cancel");
    mHL5 = new QHBoxLayout;
    mHL5->addWidget(mAdd);
    mHL5->addWidget(mUpdate);
    mHL5->addWidget(mCancel);

    mVLayout = new QVBoxLayout;
    mVLayout->addLayout(mHL1);
    mVLayout->addLayout(mHL2);
    mVLayout->addLayout(mHL3);
    mVLayout->addLayout(mHL4);
    mVLayout->addLayout(mHL5);

    setLayout(mVLayout);
}

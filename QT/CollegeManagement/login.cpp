#include "login.h"

Login::Login(QWidget *parent) :
    QWidget(parent)
{
    mLabel = new QLabel("Welcome To College Management Software \n Jnana Vikas Institute of Technology");

    mUserName = new QLabel("User Name");
    mUserNameLineEdit = new QLineEdit();
    mHL1 = new QHBoxLayout();
    mHL1->addWidget(mUserName);
    mHL1->addWidget(mUserNameLineEdit);

    mPassword = new QLabel("Pass word");
    mPasswordLineEdit = new QLineEdit();
    mHL2 = new QHBoxLayout();
    mHL2->addWidget(mPassword);
    mHL2->addWidget(mPasswordLineEdit);

    mLogin = new QPushButton("Login");
    mCancel = new QPushButton("Cancel");
    mHL3 = new QHBoxLayout;
    mHL3->addWidget(mLogin);
    mHL3->addWidget(mCancel);

    mVL1 = new QVBoxLayout;

    mVL1->addWidget(mLabel);
    mVL1->addSpacing(20);
    mVL1->addLayout(mHL1);
    mVL1->addLayout(mHL2);
    mVL1->addLayout(mHL3);

    setLayout(mVL1);
    connect(mLogin,SIGNAL(clicked()),this,SLOT(showMainWindow()));
}

void Login::showMainWindow(){
    MainWidget *mainWindget;
    mainWindget = new MainWidget;
    mainWindget->show();
    hide();
}

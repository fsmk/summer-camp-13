#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include "mainwidget.h"

class Login : public QWidget
{
    Q_OBJECT
public:
    explicit Login(QWidget *parent = 0);
    
signals:
    
public slots:
    void showMainWindow();

private :
    QLabel *mLabel;
    QLabel *mUserName;
    QLabel *mPassword;
    QLineEdit *mPasswordLineEdit;
    QLineEdit *mUserNameLineEdit;
    QPushButton *mLogin;
    QPushButton *mCancel;

    QHBoxLayout *mHL1, *mHL2, *mHL3;
    QVBoxLayout *mVL1;
    
};

#endif // LOGIN_H

#include <QtGui/QApplication>
#include "jvitwidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    JVITWIdget w;
    w.show();
    
    return a.exec();
}

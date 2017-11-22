#include "mainwindow.h"
#include <QApplication>


/*
    SLOTS
    Acciones de botones
*/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("fusion");
    MainWindow w;
    w.show();

    return a.exec();
}

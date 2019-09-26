#include "mainwindow.h"
#include"customercontroller.h"
#include <QApplication>


int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    CustomerController controller;
    MainWindow w(&controller);
    w.show();


    return a.exec();
}

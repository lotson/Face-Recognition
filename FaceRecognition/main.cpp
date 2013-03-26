#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    // to jest tekst, ktory trzeba sobie scommitotowac mma
    // nadzieje, ze sie uda!!
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    
    return a.exec();
}

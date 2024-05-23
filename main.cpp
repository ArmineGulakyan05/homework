#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    w.setStyleSheet("background-color:black;");
    w.setFixedSize(QSize(400,600));

    return a.exec();
}

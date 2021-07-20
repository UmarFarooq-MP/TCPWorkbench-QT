#include "mainwindow.h"

#include <QApplication>

#include "client/client.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    Client client;
    client.connect("127.0.0.1",9999);




    return a.exec();
}

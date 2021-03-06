#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "client/client.h"
#include "server/server.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    Client m_client;
    Server m_server;

public:
    MainWindow(QWidget *parent = nullptr);

    void connectOrDisconnectClient();
    void connectOrDisconnectServer();


    ~MainWindow();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

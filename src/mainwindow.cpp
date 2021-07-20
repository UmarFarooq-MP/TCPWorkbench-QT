#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButtonConnectClient,&QPushButton::clicked,this,&MainWindow::connectOrDisconnectClient);
}

void MainWindow::connectOrDisconnectClient() {

    if (ui->pushButtonConnectClient->text() == "Connect"){
        m_client.connect(ui->lineEditHostClient->text(),ui->lineEditPortClient->text().toInt());
        ui->pushButtonConnectClient->setText("Disconnect");
    }else {
        m_client.disconnect();
        ui->pushButtonConnectClient->setText("Connect");
    }
}


void MainWindow::connectOrDisconnectServer() {}




MainWindow::~MainWindow()
{
    delete ui;
}


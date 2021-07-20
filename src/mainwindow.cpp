#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButtonConnectClient,&QPushButton::clicked,this,&MainWindow::connectClient);
}

void MainWindow::connectClient() {

    qDebug() << ui->lineEditHostClient->text();
    m_client.connect(ui->lineEditHostClient->text(),ui->lineEditPortClient->text().toInt());

}
void MainWindow::connectServer() {}


MainWindow::~MainWindow()
{
    delete ui;
}


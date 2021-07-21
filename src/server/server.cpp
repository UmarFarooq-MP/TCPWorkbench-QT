#include "server.h"


Server::Server () {
    connect(&this->m_server,&QTcpServer::newConnection,this,&Server::hasNewConnection);
}



void Server::listen(const uint16_t port) {
    m_server.listen(QHostAddress::Any,port);
    if (!m_server.isListening()) {
        qDebug() << "Error";
    }

}

void Server::stopListening() {
    m_server.close();
}

void Server::hasNewConnection() {
    QTcpSocket *newConnection = m_server.nextPendingConnection();
    newConnection->write("Hello World");
    connect(newConnection,&QTcpSocket::readyRead,this,[&](){
        QByteArray data = newConnection->readAll();

    });

    qDebug () << "New Connection Arrived";
}

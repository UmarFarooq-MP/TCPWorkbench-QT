#include "server.h"

void Server::listen(const uint16_t port) {
    m_server.listen(QHostAddress::Any,port);
    if (!m_server.isListening()) {
        qDebug() << "Error";
    }
}

void Server::stopListening() {
    m_server.close();
}

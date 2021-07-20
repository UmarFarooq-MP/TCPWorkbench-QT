#include "client.h"

bool Client::connect(const QString &host, uint16_t port) {
    m_socket.connectToHost(host,port);

    if (!m_socket.waitForConnected(5000)) {
        qDebug() << "Error : " << m_socket.errorString() ;
        return false;
    }

    return true;
}

void Client::disconnect() {
    m_socket.close();
}



#ifndef CLIENT_H
#define CLIENT_H

#include <QTcpSocket>
#include <QString>


class Client
{

    QTcpSocket m_socket;

public:
    Client() = default;
    bool connect(const QString& host, uint16_t port);
    void disconnect();
};


#endif // CLIENT_H

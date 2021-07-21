#include <QTcpServer>
#include <QString>
#include <QTcpSocket>

class Server: public QTcpServer {

    QTcpServer m_server;
public:
    Server();
    void listen(const uint16_t port);
    void stopListening();
    void hasNewConnection();
};

#include <QTcpServer>
#include <QString>
#include <QTcpSocket>

class Server: public QTcpServer {

    QTcpSocket m_socket;

public:
    Server(const QString &IP, const int port);
    void connect();
    void disconnect();
    ~Server();

};

#include <QTcpSocket>
#include <QString>

class Server {

    QTcpSocket m_socket;

public:
    Server(const QString &IP, const int port);
    void connect();
    void disconnect();
    ~Server();

};

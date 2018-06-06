#ifndef SERVER_HPP
#define SERVER_HPP

#include "ClientSocket.hpp"
#include "ConnectSocket.hpp"
#include "ClientHandler.hpp"
#include "SecurityProvider.hpp"
#include "PostgresQ_DAO.hpp"
#include "SessionTable.hpp"
#include "ServerAPI.hpp"

#include <list>

class Server
{
public:
    Server(int conn_port, Q_DAO& database);

    void run();

private:

    ConnectSocket connect_sock_;
    SessionTable sessions_;
    Service service_;
    ServerAPI server_API_;

    SecurityProvider security_provider_;

    std::list<ClientHandler*> clients_;

};

#endif // SERVER_HPP

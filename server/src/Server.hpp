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

    Q_DAO& database_;

    SessionTable sessions_;

    ConnectSocket connect_sock_;

    SecurityProvider security_provider_;

    std::list<ClientHandler*> clients_;
    
    ServerAPI server_API_;
};

#endif // SERVER_HPP

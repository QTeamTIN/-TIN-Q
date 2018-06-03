#ifndef SERVER_HPP
#define SERVER_HPP

#include "ClientSocket.hpp"
#include "ConnectSocket.hpp"
#include "ClientHandler.hpp"
#include "SecurityProvider.hpp"
#include "PostgresQ_DAO.hpp"
#include "SessionTable.hpp"

#include <list>

class Server
{
public:
    Server(int conn_port);

    void run();

private:

    std::shared_ptr<Q_DAO> database_;

    SessionTable sessions_;

    ConnectSocket connect_sock_;

    SecurityProvider security_provider_;

    std::list<ClientHandler*> clients_;
};

#endif // SERVER_HPP

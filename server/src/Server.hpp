#ifndef SERVER_HPP
#define SERVER_HPP

#include "ClientSocket.hpp"
#include "ConnectSocket.hpp"
#include "ClientHandler.hpp"
#include "SecurityProvider.hpp"

#include <list>

class Server
{
public:
    Server(int conn_port);

    void run();

private:
    ConnectSocket connect_sock_;

    SecurityProvider security_provider_;

    std::list<ClientHandler*> clients_;
};

#endif // SERVER_HPP

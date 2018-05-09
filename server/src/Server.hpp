#ifndef SERVER_HPP
#define SERVER_HPP

#include "ClientSocket.hpp"
#include "ConnectSocket.hpp"
#include <csignal>

class Server
{
public:
    Server(int conn_port);

    void run();


private:
    ConnectSocket connect_sock_;
};

#endif // SERVER_HPP

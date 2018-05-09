#ifndef CLIENTHANDLER_HPP
#define CLIENTHANDLER_HPP

#include <memory>
#include <thread>
#include <csignal>

#include "ClientSocket.hpp"

class ClientHandler
{
public:
    ClientHandler(std::unique_ptr<ClientSocket> sock_ptr);

    void start();
    void recvLoop();
private:
    void terminate();
    std::unique_ptr<ClientSocket> sock_ptr_;
    std::thread thread_;
};

#endif // CLIENTHANDLER_HPP

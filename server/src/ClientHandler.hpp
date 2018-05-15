#ifndef CLIENTHANDLER_HPP
#define CLIENTHANDLER_HPP

#include <memory>
#include <thread>
#include <csignal>

#include "ClientSocket.hpp"
#include "ClientReceiver.hpp"

class ClientHandler
{
public:
    ClientHandler(ClientSocket *sock_ptr);

    void start();
    void stop();

private:
    void terminate();

    ClientSocket *sock_ptr_;
    ClientReceiver receiver_;


    std::thread recv_thread_;
};

#endif // CLIENTHANDLER_HPP

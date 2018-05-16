#ifndef CLIENTHANDLER_HPP
#define CLIENTHANDLER_HPP

#include <memory>
#include <thread>
#include <csignal>

#include "Stoppable.h"

#include "ClientSocket.hpp"
#include "ClientReceiver.hpp"
#include "ClientSender.hpp"

class ClientHandler: public Stoppable
{
public:
    ClientHandler(ClientSocket *sock_ptr);

    void run() override;

private:
    void init();
    void terminate();

    ClientSocket *sock_ptr_;
    ClientReceiver receiver_;
    ClientSender sender_;
    std::thread recv_thread_;
    std::thread send_thread_;
};

#endif // CLIENTHANDLER_HPP

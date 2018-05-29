#ifndef CLIENTHANDLER_HPP
#define CLIENTHANDLER_HPP

#include <memory>
#include <thread>
#include <csignal>

#include "Stoppable.hpp"

#include "ClientSocket.hpp"
#include "ClientReceiver.hpp"
#include "ClientSender.hpp"
#include "Dispatcher.hpp"

class ClientHandler: public Stoppable
{
public:
    ClientHandler(ClientSocket *sock_ptr);

    void run() override;

private:
    void init();
    void terminate();

    void handleErrors();

    ClientSocket *sock_ptr_;

    ClientReceiver receiver_;
    ClientSender sender_;
    Dispatcher dispatcher_;
};

#endif // CLIENTHANDLER_HPP

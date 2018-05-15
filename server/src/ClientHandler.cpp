#include "ClientHandler.hpp"

#include <iostream>
#include <future>

ClientHandler::ClientHandler(ClientSocket *sock_ptr)
    :sock_ptr_(sock_ptr)
    ,receiver_(sock_ptr_)
{}

void ClientHandler::start()
{
    std::promise<void> exit_signal;
    std::future<void> future = exit_signal.get_future();

    recv_thread_ = std::thread(&ClientReceiver::run, &receiver_);
}

void ClientHandler::stop()
{
    sock_ptr_->shutdown();
    receiver_.stop();
    sock_ptr_->close();
}

void ClientHandler::terminate()
{
    sock_ptr_->close();
    exit(1);
}

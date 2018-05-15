#include "ClientHandler.hpp"

#include <iostream>

ClientHandler::ClientHandler(ClientSocket *sock_ptr)
    :sock_ptr_(sock_ptr)
    ,receiver_(sock_ptr_)
{}

void ClientHandler::start()
{
    recv_thread_ = std::thread(&ClientReceiver::receiveLoop, &receiver_);
}

void ClientHandler::stop()
{
}

void ClientHandler::terminate()
{
    sock_ptr_->close();
    exit(1);
}

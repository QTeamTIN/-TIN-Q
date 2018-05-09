#include "ClientHandler.hpp"

#include <iostream>


ClientHandler::ClientHandler(std::unique_ptr<ClientSocket> sock_ptr)
    :sock_ptr_(std::move(sock_ptr))
{}

void ClientHandler::start()
{
    thread_ = std::thread(&ClientHandler::recvLoop, this);
    thread_.join();
    std::cout<<"client closed\n";
}

void ClientHandler::recvLoop()
{
    //std::signal(SIGABRT, ClientHandler::terminate);
    while(1) {
        sock_ptr_->receive();
        std::cout<<sock_ptr_->getReceivedMessage();
    }
}

void ClientHandler::terminate()
{
    sock_ptr_->close();
    exit(1);
}


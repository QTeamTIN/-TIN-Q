#include "ClientHandler.hpp"

#include <iostream>

ClientHandler::ClientHandler(std::unique_ptr<ClientSocket> sock_ptr)
    :sock_ptr_(std::move(sock_ptr))
{}

void ClientHandler::start()
{
    thread_ = std::thread(&ClientHandler::recvLoop, this);
}

void ClientHandler::recvLoop()
{
//    std::signal(SIGINT, signal_handler);
//    shutdown_handler = [this](int signal) {
//        std::cout << "Server shutdown...\n";
//        this->terminate();
//    };
    while(1) {
        sock_ptr_->receive();
        std::cout<<sock_ptr_->getReceivedMessage();
        sock_ptr_->send("dzieki", 0);
    }
}

void ClientHandler::terminate()
{
    sock_ptr_->close();
    exit(1);
}


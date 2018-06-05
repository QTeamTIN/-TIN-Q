#include "ClientHandler.hpp"

#include <iostream>

ClientHandler::ClientHandler(ClientSocket *sock_ptr, ServerAPI& server_api)
    :sock_ptr_(sock_ptr)
    ,receiver_(sock_ptr_)
    ,sender_(sock_ptr_)
    ,dispatcher_(receiver_.getInputQueue(), sender_.getOutputQueue(), server_api)
{}

void ClientHandler::init()
{
    receiver_();
    sender_();
    dispatcher_();
}

void ClientHandler::run()
{
    init();
    try{
        while (!stopRequested()) {
            handleErrors();
        }
    } catch(const std::exception& e) {
        std::cout<<e.what()<<std::endl;
    }
    terminate();
}

void ClientHandler::terminate()
{
    sock_ptr_->shutdown();
    receiver_.stop();
    sender_.stop();
    dispatcher_.stop();
    sock_ptr_->close();
    std::cout<<"Close client thread\n";
}

void ClientHandler::handleErrors()
{
    receiver_.handle();
    sender_.handle();
}

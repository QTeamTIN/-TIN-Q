#include "ClientHandler.hpp"

#include <iostream>
#include <future>

ClientHandler::ClientHandler(ClientSocket *sock_ptr)
    :sock_ptr_(sock_ptr)
    ,receiver_(sock_ptr_)
    ,sender_(sock_ptr_)
    ,dispatcher_(receiver_.getInputQueue(), sender_.getOutputQueue())
{}

void ClientHandler::init()
{
    recv_thread_ = std::thread(&ClientReceiver::run, &receiver_);
    send_thread_ = std::thread(&ClientSender::run, &sender_);
    dispatcher_thread_ = std::thread(&Dispatcher::run, &dispatcher_);
}

void ClientHandler::run()
{
    init();
    while(!stopRequested()) {}
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

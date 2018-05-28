#include "ClientHandler.hpp"

#include <iostream>

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

    sender_error_ = sender_.getErrorFuture();
    receiver_error_ = receiver_.getErrorFuture();
}

void ClientHandler::run()
{
    init();
    while (!stopRequested()) {
        handleSenderError();
        handleReceiverError();
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

void ClientHandler::handleSenderError()
{
    if (sender_error_.wait_for(std::chrono::milliseconds(0)) == std::future_status::timeout)
        return;
    switch (sender_error_.get()) {
        case ClientSender::SenderError::PACKET_PARSING_ERROR:
        std::cout<<"Parsing error in sender\n";
        stop();
        break;
    }
}

void ClientHandler::handleReceiverError()
{
    if (receiver_error_.wait_for(std::chrono::milliseconds(0)) == std::future_status::timeout)
        return;
    switch (receiver_error_.get()) {
        case ClientReceiver::ReceiverError::PACKET_SERIALIZATION_ERROR:
        std::cout<<"Serialization error in receiver\n";
        stop();
        break;
    }
}

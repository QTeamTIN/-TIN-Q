#include "ClientReceiver.hpp"

#include <iostream>

ClientReceiver::ClientReceiver(ClientSocket *sock)
    :socket_(sock)
{

}

void ClientReceiver::run()
{
    while (!stopRequested()) {
        socket_->receive();
        std::string msg = socket_->getReceivedMessage();
        input_queue_.push(serializer_.parse(msg));
        std::cout<<"Packet received\n";
    }
}

std::queue<Packet> &ClientReceiver::getInputQueue()
{
    return input_queue_;
}

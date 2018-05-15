#include "ClientReceiver.hpp"

#include <iostream>

ClientReceiver::ClientReceiver(ClientSocket *sock)
    :socket_(sock)
{

}

void ClientReceiver::receiveLoop()
{
    while(1) {
        socket_->receive();
        std::cout<<socket_->getReceivedMessage();
    }
}

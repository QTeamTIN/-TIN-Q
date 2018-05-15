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
        std::cout<<socket_->getReceivedMessage()<<std::endl;
    }
}

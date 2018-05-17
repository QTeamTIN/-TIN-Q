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
        std::cout<<"received string: "<<msg<<std::endl;
        input_queue_.push(serializer_.parse(msg));
        std::cout<<"pushed\n";
    }
}

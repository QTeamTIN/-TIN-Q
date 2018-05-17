#include "ClientSender.hpp"

#include <iostream>

ClientSender::ClientSender(ClientSocket *sock)
    :socket_(sock)
{

}

void ClientSender::run()
{
    while (!stopRequested()) {
        socket_->send("heh");
    }
}

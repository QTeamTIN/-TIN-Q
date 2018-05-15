#ifndef CLIENTRECEIVER_HPP
#define CLIENTRECEIVER_HPP

#include <memory>

#include "ClientSocket.hpp"

class ClientReceiver
{
public:
    ClientReceiver(ClientSocket *sock);

    void receiveLoop();

private:
    ClientSocket *socket_;

};

#endif // CLIENTRECEIVER_HPP

#ifndef CLIENTRECEIVER_HPP
#define CLIENTRECEIVER_HPP

#include <memory>

#include "ClientSocket.hpp"
#include "Stoppable.h"

class ClientReceiver: public Stoppable
{
public:
    ClientReceiver(ClientSocket *sock);

    void run() override;

private:
    ClientSocket *socket_;

};

#endif // CLIENTRECEIVER_HPP

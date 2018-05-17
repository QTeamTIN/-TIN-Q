#ifndef CLIENTSENDER_HPP
#define CLIENTSENDER_HPP

#include <memory>

#include "ClientSocket.hpp"
#include "Stoppable.hpp"

class ClientSender: public Stoppable
{
public:
    ClientSender(ClientSocket *sock);

    void run() override;

private:
    ClientSocket *socket_;

};

#endif // CLIENTSENDER_HPP

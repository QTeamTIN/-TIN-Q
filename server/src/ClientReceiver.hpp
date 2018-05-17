#ifndef CLIENTRECEIVER_HPP
#define CLIENTRECEIVER_HPP

#include <memory>
#include <queue>

#include "ClientSocket.hpp"
#include "PacketSerializer.hpp"
#include "Stoppable.hpp"

class ClientReceiver: public Stoppable
{
public:
    ClientReceiver(ClientSocket *sock);

    void run() override;

private:
    ClientSocket *socket_;
    PacketSerializer serializer_;
    std::queue<Packet> input_queue_;

};

#endif // CLIENTRECEIVER_HPP

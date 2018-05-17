#ifndef CLIENTSENDER_HPP
#define CLIENTSENDER_HPP

#include <memory>
#include <queue>

#include "ClientSocket.hpp"
#include "PacketSerializer.hpp"
#include "Stoppable.hpp"

class ClientSender: public Stoppable
{
public:
    ClientSender(ClientSocket *sock);

    void run() override;

    std::queue<Packet>& getOutputQueue();

private:
    ClientSocket *socket_;
    PacketSerializer serializer_;

    std::queue<Packet> output_queue_;

};

#endif // CLIENTSENDER_HPP

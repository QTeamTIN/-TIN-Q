#ifndef CLIENTSENDER_HPP
#define CLIENTSENDER_HPP

#include <memory>

#include "BlockingQueue.hpp"
#include "ClientSocket.hpp"
#include "PacketSerializer.hpp"
#include "Stoppable.hpp"
#include "Thrower.hpp"

class ClientSender: public Stoppable, public Thrower
{
public:
    enum class SenderError {
        PACKET_PARSING_ERROR
    };

    ClientSender(ClientSocket *sock);

    void run() override;

    BlockingQueue& getOutputQueue();

private:

    ClientSocket *socket_;
    PacketSerializer serializer_;

    BlockingQueue output_queue_;
};

#endif // CLIENTSENDER_HPP

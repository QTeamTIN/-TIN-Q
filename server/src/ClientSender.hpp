#ifndef CLIENTSENDER_HPP
#define CLIENTSENDER_HPP

#include <memory>

#include "BlockingQueue.hpp"
#include "ClientSocket.hpp"
#include "PacketSerializer.hpp"
#include "Stoppable.hpp"

class ClientSender: public Stoppable
{
public:
    enum class SenderError {
        PACKET_PARSING_ERROR
    };

    ClientSender(ClientSocket *sock);

    void run() override;

    BlockingQueue& getOutputQueue();

    std::future<SenderError> getErrorFuture();

private:

    std::promise<SenderError> error_;

    ClientSocket *socket_;
    PacketSerializer serializer_;

    BlockingQueue output_queue_;

    std::queue<Packet> output_queue_;

};

#endif // CLIENTSENDER_HPP

#ifndef CLIENTRECEIVER_HPP
#define CLIENTRECEIVER_HPP

#include <memory>

#include "BlockingQueue.hpp"
#include "ClientSocket.hpp"
#include "PacketSerializer.hpp"
#include "Stoppable.hpp"

class ClientReceiver: public Stoppable
{
public:
    enum class ReceiverError {
        PACKET_SERIALIZATION_ERROR
    };

    ClientReceiver(ClientSocket *sock);

    void run() override;

    BlockingQueue &getInputQueue();

    std::future<ReceiverError> getErrorFuture();

private:

    std::promise<ReceiverError> error_;

    ClientSocket *socket_;
    PacketSerializer serializer_;

    BlockingQueue input_queue_;

};

#endif // CLIENTRECEIVER_HPP

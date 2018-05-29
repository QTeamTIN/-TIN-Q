#ifndef CLIENTRECEIVER_HPP
#define CLIENTRECEIVER_HPP

#include <memory>

#include "BlockingQueue.hpp"
#include "ClientSocket.hpp"
#include "PacketSerializer.hpp"
#include "Stoppable.hpp"
#include "Thrower.hpp"

class ClientReceiver: public Stoppable, public Thrower
{
public:
    enum class ReceiverError {
        PACKET_SERIALIZATION_ERROR
    };

    ClientReceiver(ClientSocket *sock);

    void run() override;

    BlockingQueue &getInputQueue();
private:

    ClientSocket *socket_;
    PacketSerializer serializer_;

    BlockingQueue input_queue_;

};

#endif // CLIENTRECEIVER_HPP

#include "ClientSender.hpp"

#include <iostream>

ClientSender::ClientSender(ClientSocket *sock)
    :socket_(sock)
{

}

void ClientSender::run()
{
    try {
        while (!stopRequested()) {
            Packet pack = output_queue_.pop();
            std::string to_send;
            to_send  = serializer_.serialize(pack);
            socket_->send(to_send);
            std::cout<<"Package sent\n";
        }
    } catch (const PacketSerializer::SerializerException& e ) {
        setException(e);
    }
}

BlockingQueue &ClientSender::getOutputQueue()
{
    return output_queue_;
}

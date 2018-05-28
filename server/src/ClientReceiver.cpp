#include "ClientReceiver.hpp"

#include <iostream>

ClientReceiver::ClientReceiver(ClientSocket *sock)
    :socket_(sock)
{

}

void ClientReceiver::run()
{
    try {
        while (!stopRequested()) {
            socket_->receive();
            std::string msg = socket_->getReceivedMessage();
            input_queue_.push(serializer_.parse(msg));
            std::cout<<"Packet received\n";
        }
    } catch (const PacketSerializer::SerializerException& e) {
        error_.set_value(ReceiverError::PACKET_SERIALIZATION_ERROR);
    }
}

BlockingQueue &ClientReceiver::getInputQueue()
{
    return input_queue_;
}

std::future<ClientReceiver::ReceiverError> ClientReceiver::getErrorFuture()
{
    return std::move(error_.get_future());
}

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
        setException(e);
    } catch (const SocketException& e) {
        setException(e);
    } catch (const std::runtime_error& e) {
        setException(e);
    }
}

BlockingQueue &ClientReceiver::getInputQueue()
{
    return input_queue_;
}

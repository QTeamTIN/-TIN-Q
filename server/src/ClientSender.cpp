#include "ClientSender.hpp"

#include <iostream>

ClientSender::ClientSender(ClientSocket *sock)
    :socket_(sock)
{

}

void ClientSender::run()
{
    while (!stopRequested()) {
        Packet pack = output_queue_.pop();
        std::string to_send = serializer_.serialize(pack);
        socket_->send(to_send);
        std::cout<<"Package sent\n";
    }
}

BlockingQueue &ClientSender::getOutputQueue()
{
    return output_queue_;
}

std::future<ClientSender::SenderError> ClientSender::getErrorFuture()
{
    return error_.get_future();
}

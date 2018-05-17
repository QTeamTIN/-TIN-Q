#include "ClientSender.hpp"

#include <iostream>

ClientSender::ClientSender(ClientSocket *sock)
    :socket_(sock)
{

}

void ClientSender::run()
{
    while (!stopRequested()) {
        if (output_queue_.empty()) //Temporary busy waiting. Only for tests. Will be replaced with blocking queue.
            continue;
        Packet pack = output_queue_.front();
        output_queue_.pop();
        std::string to_send = serializer_.serialize(pack);
        socket_->send(to_send);
        std::cout<<"Package sent\n";
    }
}

std::queue<Packet> &ClientSender::getOutputQueue()
{
    return output_queue_;
}

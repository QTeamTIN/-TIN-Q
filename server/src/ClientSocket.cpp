#include "ClientSocket.hpp"

ClientSocket::ClientSocket(int socket_fd, sockaddr_in addr, int buff_size)
    :SocketWrapper(socket_fd)
    ,recv_buff_size_(buff_size)
    ,addr_(addr)
{
    recv_buff_ = new char[recv_buff_size_];
}

ClientSocket::~ClientSocket()
{
    delete[] recv_buff_;
}

void ClientSocket::receive()
{
    int recv_len = ::recv(getSocketFd(), recv_buff_, recv_buff_size_, MSG_TRUNC);
    if (recv_len) {
        throw std::runtime_error("Receive failed: " + errno);
    }
    recv_len_ = recv_len;
}

std::string ClientSocket::getReceivedMessage()
{
    return std::string(recv_buff_, recv_len_);
}



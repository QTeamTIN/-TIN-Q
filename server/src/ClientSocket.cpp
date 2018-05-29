#include "ClientSocket.hpp"

#include <string>
#include <iostream>
#include <errno.h>

ClientSocket::ClientSocket(int socket_fd, sockaddr_in addr, int buff_size)
    :SocketWrapper(socket_fd)
    ,recv_buff_size_(buff_size)
    ,client_addr_(addr)
{
    recv_buff_ = new char[recv_buff_size_];
    ssl_handle=nullptr;
}

ClientSocket::~ClientSocket()
{
    delete[] recv_buff_;
}

void ClientSocket::receive()
{
    int recv_len = recv(getSocketFd(), recv_buff_, recv_buff_size_, 0);
    //int recv_len = SSL_read(ssl_handle, recv_buff_, recv_buff_size_);
    if (recv_len < 0) {
        fprintf(stderr, "recv: %s (%d)\n", strerror(errno), errno);
        throw std::runtime_error(strerror(errno));
    }
    recv_len_ = recv_len;
}

std::string ClientSocket::getReceivedMessage()
{
    return std::string(recv_buff_, recv_len_);
}

ssize_t ClientSocket::send(const std::string& message)
{

    const char* to_send = message.c_str();
    int s_bytes = ::send(getSocketFd(), to_send, strlen(to_send), 0);
    //ssize_t s_bytes = SSL_write(ssl_handle, to_send, strlen(to_send));
    if (s_bytes < 0)
    {
        throw std::runtime_error("Send error" + errno);
    }
    return s_bytes;
}

void ClientSocket::setSSLHandle(SSL* ssl)
{
    ssl_handle=ssl;
}

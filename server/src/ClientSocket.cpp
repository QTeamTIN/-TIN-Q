#include "ClientSocket.hpp"

ClientSocket::ClientSocket(int socket_fd, sockaddr_in client_addr)
    :SocketWrapper(socket_fd)
    ,client_addr_(client_addr)
{}

ssize_t ClientSocket::send(const std::string& message, int flags)
{

    const char* to_send = message.c_str();
    ssize_t s_bytes = ::send(getSocketFd(), to_send, strlen(to_send), flags);
    if (s_bytes < 0)
    {
        throw std::runtime_error("Send error" + errno);
    }
    return s_bytes;
}


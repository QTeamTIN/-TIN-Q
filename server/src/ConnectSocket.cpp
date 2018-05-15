#include "ConnectSocket.hpp"

#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <stdexcept>
#include <unistd.h>
#include <errno.h>

#include <iostream>

ConnectSocket::ConnectSocket(unsigned port)
    :SocketWrapper(), port_(port)
{
    init(DEF_BACKLOG);
}

void ConnectSocket::init(int backlog)
{
    int yes = 1;
    if (setsockopt(getSocketFd(),
                   SOL_SOCKET,
                   SO_REUSEADDR,
                   &yes,
                   sizeof(int)) == -1) {
        throw std::runtime_error("setsockopt error: " + errno);
    }

    serv_addr_.sin_family = AF_INET;
    serv_addr_.sin_addr.s_addr = htonl(INADDR_ANY);
    serv_addr_.sin_port = htons(port_);

    if (::bind(getSocketFd(),
               (struct sockaddr*) &serv_addr_,
               sizeof(serv_addr_)) < 0) {
       throw std::runtime_error("Binding error: " + errno);
    }

    ::listen(getSocketFd(), backlog);
}

ClientSocket *ConnectSocket::accept()
{
    struct sockaddr_in clientAddr;
    socklen_t clientAddrSize = sizeof(struct sockaddr_in);
    int client_socket = ::accept(getSocketFd(), (struct sockaddr*) &clientAddr, &clientAddrSize);

    if (client_socket == -1)
        throw std::runtime_error("Accept error: " + errno);
    std::cout<<client_socket<<"<------------------\n";
    return new ClientSocket(client_socket, clientAddr);
}

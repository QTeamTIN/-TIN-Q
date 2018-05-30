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
        throw SocketException(SocketException::Type::SETSOCKOPT);
    }

    serv_addr_.sin_family = AF_INET;
    serv_addr_.sin_addr.s_addr = htonl(INADDR_ANY);
    serv_addr_.sin_port = htons(port_);

    if (::bind(getSocketFd(),
               (struct sockaddr*) &serv_addr_,
               sizeof(serv_addr_)) < 0) {
       throw SocketException(SocketException::Type::BIND);
    }
    if(::listen(getSocketFd(), backlog))
        throw SocketException(SocketException::Type::LISTEN);
}

ClientSocket *ConnectSocket::accept()
{
    struct sockaddr_in clientAddr;
    socklen_t clientAddrSize = sizeof(struct sockaddr_in);
    int client_socket = ::accept(getSocketFd(), (struct sockaddr*) &clientAddr, &clientAddrSize);

    if (client_socket == -1)
        throw SocketException(SocketException::Type::ACCEPT);

    return new ClientSocket(client_socket, clientAddr);
}

#ifndef CLIENTSOCKET_HPP
#define CLIENTSOCKET_HPP

#include "SocketWrapper.hpp"

class ClientSocket: public SocketWrapper
{
public:
    ClientSocket(int socket_fd, struct sockaddr addr);

private:
    struct sockaddr addr_;
};

#endif // CLIENTSOCKET_HPP

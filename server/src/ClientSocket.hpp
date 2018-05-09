#ifndef CLIENTSOCKET_HPP
#define CLIENTSOCKET_HPP

#include "SocketWrapper.hpp"
#include <string>
class ClientSocket: public SocketWrapper
{
public:
    ClientSocket(int socket_fd, struct sockaddr_in client_addr);
    ssize_t send(const std::string& message, int flags);

private:
    struct sockaddr_in client_addr_;
};

#endif // CLIENTSOCKET_HPP

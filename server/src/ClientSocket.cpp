#include "ClientSocket.hpp"

ClientSocket::ClientSocket(int socket_fd, sockaddr addr)
    :SocketWrapper(socket_fd)
    ,addr_(addr)
{}



#include "ClientSocket.hpp"

ClientSocket::ClientSocket(int socket_fd, sockaddr_in addr)
    :SocketWrapper(socket_fd)
    ,addr_(addr)
{}



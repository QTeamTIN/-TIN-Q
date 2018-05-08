#include "SocketWrapper.hpp"

#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <stdexcept>
#include <errno.h>


SocketWrapper::SocketWrapper(unsigned port)
    :port_(port)
{
    init();
}

void SocketWrapper::init()
{
    socket_fd_ = socket(AF_INET, SOCK_STREAM, 0);
    int yes = 1;
    if (setsockopt(socket_fd_,
                   SOL_SOCKET,
                   SO_REUSEADDR,
                   &yes,
                   sizeof(int)) == -1) {
        throw std::runtime_error("setsockopt error: " + errno);
    }

    serv_addr_.sin_family = AF_INET;
    serv_addr_.sin_addr.s_addr = htonl(INADDR_ANY);
    serv_addr_.sin_port = htons(port_);
}

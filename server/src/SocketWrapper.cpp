#include "SocketWrapper.hpp"

#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <stdexcept>
#include <unistd.h>
#include <errno.h>


SocketWrapper::SocketWrapper(unsigned port)
    :port_(port)
    ,socket_fd_(UNINIT_FD)
{
    init();
}

SocketWrapper::SocketWrapper(SocketWrapper &&move) noexcept
    :port_(0)
{
    move.swap(*this);
}

SocketWrapper &SocketWrapper::operator=(SocketWrapper &&move) noexcept
{
    move.swap(*this);
    return *this;
}

SocketWrapper::~SocketWrapper()
{
    close();
}

void SocketWrapper::close()
{
    if (socket_fd_ == UNINIT_FD)
        return;
    ::close(socket_fd_);
    //TODO close errors
}

unsigned SocketWrapper::getPort() const
{
    return port_;
}

int SocketWrapper::getSocketFd() const
{
    return socket_fd_;
}

void SocketWrapper::swap(SocketWrapper &other) noexcept
{
    std::swap(port_, other.port_);
}

void SocketWrapper::init()
{
    socket_fd_ = socket(AF_INET, SOCK_STREAM, 0);
    //TODO errors
}

//    if (setsockopt(socket_fd_,
//                   SOL_SOCKET,
//                   SO_REUSEADDR,
//                   &yes,
//                   sizeof(int)) == -1) {
//        throw std::runtime_error("setsockopt error: " + errno);
//    }

//    serv_addr_.sin_family = AF_INET;
//    serv_addr_.sin_addr.s_addr = htonl(INADDR_ANY);
//    serv_addr_.sin_port = htons(port_);



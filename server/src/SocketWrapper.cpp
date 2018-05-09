#include "SocketWrapper.hpp"


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
    if (socket_fd_ != UNINIT_FD)
        return;
    socket_fd_ = socket(AF_INET, SOCK_STREAM, 0);
    //TODO errors
}



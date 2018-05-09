#include "SocketWrapper.hpp"


SocketWrapper::SocketWrapper()
    :socket_fd_(UNINIT_FD)
{
    init();
}

SocketWrapper::SocketWrapper(int socket_fd)
    :socket_fd_(socket_fd)
{}

SocketWrapper::SocketWrapper(SocketWrapper &&move) noexcept
    :socket_fd_(UNINIT_FD)
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


int SocketWrapper::getSocketFd() const
{
    return socket_fd_;
}

void SocketWrapper::swap(SocketWrapper &other) noexcept
{
    std::swap(socket_fd_, other.socket_fd_);
}

void SocketWrapper::init()
{
    if (socket_fd_ != UNINIT_FD)
        return;
    socket_fd_ = socket(AF_INET, SOCK_STREAM, 0);
}



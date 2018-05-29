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
    socket_fd_ = move.socket_fd_;
    move.socket_fd_ = UNINIT_FD;
}

SocketWrapper &SocketWrapper::operator=(SocketWrapper &&move) noexcept
{
    socket_fd_ = move.socket_fd_;
    move.socket_fd_ = UNINIT_FD;
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
    if ( ::close(socket_fd_) == -1) {
        throw SocketException(SocketException::Type::CLOSE);
    }
}

void SocketWrapper::shutdown()
{
    if(::shutdown(socket_fd_, SHUT_WR))
        throw SocketException(SocketException::Type::SHUTDOWN);
}


int SocketWrapper::getSocketFd() const
{
    return socket_fd_;
}

void SocketWrapper::init()
{
    if (socket_fd_ != UNINIT_FD)
        return;
    socket_fd_ = socket(AF_INET, SOCK_STREAM, 0);
}


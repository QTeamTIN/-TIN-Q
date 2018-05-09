#ifndef SOCKETWRAPPER_HPP
#define SOCKETWRAPPER_HPP

#include <sys/socket.h>
#include <netdb.h>

class SocketWrapper {

    static constexpr int UNINIT_FD = -1;
public:
    SocketWrapper(unsigned port);

    SocketWrapper(SocketWrapper&& move) noexcept;
    SocketWrapper& operator=(SocketWrapper&& move) noexcept;
    void swap(SocketWrapper& other) noexcept;
    SocketWrapper(SocketWrapper const&) = delete;
    SocketWrapper& operator=(SocketWrapper const&) = delete;

    virtual ~SocketWrapper();

    void close();

private:
    void init();

    int socket_fd_;
    unsigned port_;
};


#endif

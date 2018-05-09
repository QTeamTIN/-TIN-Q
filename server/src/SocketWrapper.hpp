#ifndef SOCKETWRAPPER_HPP
#define SOCKETWRAPPER_HPP

#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <stdexcept>
#include <unistd.h>
#include <errno.h>

class SocketWrapper {

    static constexpr int UNINIT_FD = -1;
public:
    SocketWrapper();
    SocketWrapper(int socket_fd);

    SocketWrapper(SocketWrapper&& move) noexcept;
    SocketWrapper& operator=(SocketWrapper&& move) noexcept;
    void swap(SocketWrapper& other) noexcept;
    SocketWrapper(SocketWrapper const&) = delete;
    SocketWrapper& operator=(SocketWrapper const&) = delete;

    virtual ~SocketWrapper();

    void init();
    void close();

protected:
    int getSocketFd() const;

private:

    int socket_fd_;
    unsigned port_;
};


#endif

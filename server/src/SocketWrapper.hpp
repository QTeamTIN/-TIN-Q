#ifndef SOCKETWRAPPER_HPP
#define SOCKETWRAPPER_HPP
#include <sys/socket.h>

class SocketWrapper {
    public:
    SocketWrapper() = default;
    ~SocketWrapper() = default;

    private:
        int socket_;
}


#endif

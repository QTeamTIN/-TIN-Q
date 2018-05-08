#ifndef SOCKETWRAPPER_HPP
#define SOCKETWRAPPER_HPP

#include <sys/socket.h>
#include <netdb.h>
const char* PORT = "4950";

class SocketWrapper {

public:
    SocketWrapper(unsigned port);
    ~SocketWrapper() = default;


private:
    void init();

    int socket_fd_;
    unsigned port_;
    struct sockaddr_in serv_addr_;
    struct sockaddr_in client_addr_;
};


#endif

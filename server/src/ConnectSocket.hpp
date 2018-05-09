#ifndef CONNECTSOCKET_HPP
#define CONNECTSOCKET_HPP

#include "SocketWrapper.hpp"


class ConnectSocket: public SocketWrapper
{
public:
    ConnectSocket(unsigned port);


private:
    void init();
    struct sockaddr_in serv_addr_;
};

#endif // CONNECTSOCKET_HPP

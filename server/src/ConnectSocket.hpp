#ifndef CONNECTSOCKET_HPP
#define CONNECTSOCKET_HPP

#include "SocketWrapper.hpp"


class ConnectSocket: public SocketWrapper
{
    static constexpr int DEF_BACKLOG = 50;
public:
    ConnectSocket(unsigned port);


private:
    void init(int backlog = DEF_BACKLOG);

    void accept();
    struct sockaddr_in serv_addr_;
};

#endif // CONNECTSOCKET_HPP

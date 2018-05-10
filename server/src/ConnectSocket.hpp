#ifndef CONNECTSOCKET_HPP
#define CONNECTSOCKET_HPP
#include <memory>
#include "SocketWrapper.hpp"
#include "ClientSocket.hpp"


class ConnectSocket: public SocketWrapper
{
    static constexpr int DEF_BACKLOG = 50;
public:
    ConnectSocket(unsigned port);
    std::unique_ptr<ClientSocket> accept();

private:
    void init(int backlog = DEF_BACKLOG);

    struct sockaddr_in serv_addr_;
    unsigned port_;
};

#endif // CONNECTSOCKET_HPP

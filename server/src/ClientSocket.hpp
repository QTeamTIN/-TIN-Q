#ifndef CLIENTSOCKET_HPP
#define CLIENTSOCKET_HPP

#include <sys/socket.h>
#include <sys/types.h>
#include <string>
#include "SocketWrapper.hpp"
#include <string>
class ClientSocket: public SocketWrapper
{
    static constexpr int DEF_BUFF_SIZE = 1024;
public:
    ClientSocket(int socket_fd, struct sockaddr_in addr, int buff_size = DEF_BUFF_SIZE);
    ~ClientSocket();

    ssize_t send(const std::string& message, int flags);
    void receive();
    std::string getReceivedMessage();
private:
    struct sockaddr_in client_addr_;

    int recv_buff_size_;
    char* recv_buff_;
    int recv_len_;
};

#endif // CLIENTSOCKET_HPP

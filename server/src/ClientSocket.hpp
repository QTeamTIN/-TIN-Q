#ifndef CLIENTSOCKET_HPP
#define CLIENTSOCKET_HPP

#include <sys/socket.h>
#include <sys/types.h>
#include <string>
#include <openssl/ssl.h>
#include <openssl/err.h>
#include "SocketWrapper.hpp"

class ClientSocket: public SocketWrapper
{
    static constexpr int DEF_BUFF_SIZE = 1024;
    friend class SecurityProvider;
public:
    ClientSocket(int socket_fd, struct sockaddr_in addr, int buff_size = DEF_BUFF_SIZE);
    ~ClientSocket();

    ssize_t send(const std::string& message);
    void receive();
    std::string getReceivedMessage();

    bool isSecure() const { return ssl_handle != nullptr; }
    void setSSLHandle(SSL* ssl_handle);

private:
    struct sockaddr_in client_addr_;

    int recv_buff_size_;
    char* recv_buff_;
    int recv_len_;

    SSL* ssl_handle;
};

#endif // CLIENTSOCKET_HPP

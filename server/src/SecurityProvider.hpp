#include <memory>
#include "ClientSocket.hpp"

class SecurityProvider
{
public:
    SecurityProvider();
    ~SecurityProvider();
    void makeSocketSecure(std::unique_ptr<ClientSocket>& socket);
    void initSSLContext();

private:
    SSL_CTX* ssl_context;
};

class SSLException: public std::runtime_error{  
public:
    SSLException(const std::string& msg) : std::runtime_error(msg){}
};

#include <memory>
#include "ClientSocket.hpp"

class SecurityProvider
{
public:
    SecurityProvider();
    ~SecurityProvider();
    void makeSocketSecure(std::unique_ptr<ClientSocket>& socket);
    void initSSLContext();
    void loadCertificates(SSL_CTX* ctx, char* cert_file, char* key_file);

private:
    SSL_CTX* ssl_context;
};

class SSLException: public std::runtime_error{  
public:
    SSLException(const std::string& msg) : std::runtime_error(msg){}
};

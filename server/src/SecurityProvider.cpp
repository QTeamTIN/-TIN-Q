#include"SecurityProvider.hpp"

SecurityProvider::SecurityProvider()
{
    OpenSSL_add_all_algorithms();
    SSL_load_error_strings();
    initSSLContext();
}
SecurityProvider::~SecurityProvider()
{
    SSL_CTX_free(ssl_context);
	ssl_context = nullptr;
}
void SecurityProvider::initSSLContext()
{
    ssl_context = SSL_CTX_new(TLS_server_method());
    if (ssl_context == nullptr)
    	throw SSLException("Unable to create SSL context");
}

void SecurityProvider::makeSocketSecure(std::unique_ptr<ClientSocket>& socket)
{    
    SSL* ssl_handle = SSL_new(ssl_context);
    if (ssl_handle == nullptr)
	    throw SSLException("Unable to create SSL handle");
    socket->setSSLHandle(ssl_handle);

    if (!SSL_set_fd(ssl_handle, socket->getSocketFd()))
    {
        SSL_free(ssl_handle);
        ssl_handle=nullptr;
        throw SSLException("Unable to associate SSL and plain socket");
    }
    int acc=SSL_accept(ssl_handle);
    if (acc<=0)
    {
        SSL_free(ssl_handle);
        ssl_handle=nullptr;
        throw SSLException("Error in SSL handshake");
    }

}


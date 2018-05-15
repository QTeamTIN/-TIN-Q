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

void SecurityProvider::loadCertificates(SSL_CTX* ctx, char* cert_file, char* key_file)
{    
    if ( SSL_CTX_use_certificate_file(ctx, cert_file, SSL_FILETYPE_PEM) <= 0 )
        throw SSLException("Unable to load certificate");
    if ( SSL_CTX_use_PrivateKey_file(ctx, key_file, SSL_FILETYPE_PEM) <= 0 )
        throw SSLException("Unable to load private key");
    if ( !SSL_CTX_check_private_key(ctx) )
        throw SSLException("Private key does not match the public certificate");
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


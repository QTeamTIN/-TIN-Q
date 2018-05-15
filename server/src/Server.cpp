#include "Server.hpp"

Server::Server(int conn_port)
    :connect_sock_(conn_port)
{}

void Server::run()
{
    while(1){
        std::unique_ptr<ClientSocket> sock = connect_sock_.accept();
        security_provider_.makeSocketSecure(sock);
        clients_.push_back(ClientHandler(std::move(sock)));
        clients_.rbegin()->start();
    }
}

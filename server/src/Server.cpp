#include "Server.hpp"

#include <iostream>

Server::Server(int conn_port)
    :connect_sock_(conn_port)
{}

void Server::run()
{
    while(1){
        ClientSocket *sock = connect_sock_.accept();
        clients_.push_back(new ClientHandler(sock));
        (*clients_.rbegin())->start();
    }
}

#include "Server.hpp"


Server::Server(int conn_port)
    :connect_sock_(conn_port)
{}

void Server::run()
{
    while(1){
        std::unique_ptr<ClientSocket> sock = connect_sock_.accept();

    }
}

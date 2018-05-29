#include "Server.hpp"

#include <iostream>

Server::Server(int conn_port)
    :connect_sock_(conn_port)
{}

void Server::run()
{
    int i = 0;
    while(i < 3){
        ClientSocket *sock = connect_sock_.accept();
        //security_provider_.makeSocketSecure(sock);
        ClientHandler* client_handler = new ClientHandler(sock);
        (*client_handler)();
        clients_.push_back(client_handler);
        ++i;
    }
    sleep(5);
    std::cout<<"Close server\n";
    for (auto client: clients_) {
        client->stop();
    }
    std::cout<<"Joining\n";
    for (auto client: clients_) {
        client->join();
    }
    std::cout<<"Clients closed\n";
    std::cout<<"bye!\n";

}

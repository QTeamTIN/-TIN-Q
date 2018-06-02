#include "Server.hpp"

#include <iostream>
#include "PostgresQ_DAO.hpp"

Server::Server(int conn_port)
    :connect_sock_(conn_port)
{}

void Server::run()
{
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

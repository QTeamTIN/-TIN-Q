#include "Server.hpp"

#include <iostream>
#include "PostgresQ_DAO.hpp"

Server::Server(int conn_port, Q_DAO& database)
    :connect_sock_(conn_port)
    ,database_(database)
    ,sessions_(database_)
    ,server_API_(sessions_)
{}

void Server::run()
{
    sessions_();
    int i = 0;
    while(i < 3){
        ClientSocket *sock = connect_sock_.accept();
        //security_provider_.makeSocketSecure(sock);
        ClientHandler* client_handler = new ClientHandler(sock, server_API_);
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

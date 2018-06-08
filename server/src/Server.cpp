#include "Server.hpp"

#include <iostream>
#include "PostgresQ_DAO.hpp"

Server::Server(int conn_port, Q_DAO& database)
    :connect_sock_(conn_port)
    ,sessions_(database)
    ,service_(sessions_, database)
    ,server_API_(service_)
{}

void Server::run()
{
    sessions_();
    int i = 0;
    while(!stopRequested()){
        ClientSocket *sock = connect_sock_.accept();
        if(stopRequested())
            break;
        //security_provider_.makeSocketSecure(sock);
        ClientHandler* client_handler = new ClientHandler(sock, server_API_);
        (*client_handler)();
        clients_.push_back(client_handler);
        ++i;
    }
    std::cout<<"Close server\n";
    std::cout<<"Stop client threads\n";
    for (auto client: clients_) {
        client->stop();
    }
    std::cout<<"Stop sessions table thread\n";
    sessions_.stop();
    std::cout<<"Joining\n";
    for (auto client: clients_) {
        client->join();
    }
    sessions_.join();
    std::cout<<"Clients closed\n";
    std::cout<<"bye!\n";
}

void Server::terminate()
{
    connect_sock_.shutdown();
}

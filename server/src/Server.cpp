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
        ClientHandler* client_handler = new ClientHandler(sock);
        std::thread thread(&ClientHandler::run, client_handler);

        clients_.push_back(client_handler);
        client_threads_.push_back(std::move(thread));
        ++i;
    }
    sleep(5);
    std::cout<<"Close server\n";
    for (auto client: clients_) {
        client->stop();
    }
    std::cout<<"Joining\n";
    for (auto& thread: client_threads_) {
        thread.join();
    }
    std::cout<<"Clients closed\n";
    std::cout<<"bye!\n";

}

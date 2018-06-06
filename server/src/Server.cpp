#include "Server.hpp"

#include <iostream>
#include "PostgresQ_DAO.hpp"

Server::Server(int conn_port, Q_DAO& database)
    :connect_sock_(conn_port)
    ,sessions_(database)
    ,service_(sessions_)
    ,server_API_(service_)
{}

void Server::run()
{
    sessions_();
    std::vector<std::string> string_arg;
    std::vector<int> int_arg;
    int_arg.push_back(99);
    int_arg.push_back(1);
    int_arg.push_back("jedikarix");
    
    typedef std::tuple<std::list<int>, std::list<std::string>> QueryResponse;
    QueryResponse res = server_API_.callQuery(1, int_arg, string_arg);
    QueryResponse res2 = server_API_.callQuery(2, int_arg, string_arg);
    std::cout << std::get<0>(res).size() << std::endl;
    std::cout << std::get<0>(res2).size() << std::endl;

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

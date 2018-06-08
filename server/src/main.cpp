#include "Server.hpp"

#include <cstdlib>
#include <iostream>
#include <signal.h>

Server* server;

void exitHandler(int s) {
    std::cout<<"Closing server\n";
    server->stop();
    server->terminate();
    server->join();
    delete server;
    exit(1);
}

int main(int argc, char * argv[])
{
    if(argc < 2) {
        std::cout<<"Error: Port unspecified"<<std::endl;
        return 1;
    }
    int port = std::atoi(argv[1]);
    if (port < 1024) {
        std::cout<<"Error: Invalid port"<<std::endl;
        return 1;
    }
    PostgresQ_DAO db;
    server =  new Server(port, db);

    (*server)();

    struct sigaction exit_sig;
    exit_sig.sa_handler = exitHandler;
    sigemptyset(&exit_sig.sa_mask);
    exit_sig.sa_flags = 0;

    sigaction(SIGINT, &exit_sig, NULL);

    pause();
}

#include "Server.hpp"

#include <cstdlib>
#include <iostream>

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

    Server server(port);

    server.run();
}

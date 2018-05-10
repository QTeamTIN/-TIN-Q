#include <iostream>
#include "ClientSocket.hpp"
#include "ConnectSocket.hpp"

int main()
{
    ConnectSocket main_sock(8888);

    auto cl_sock = main_sock.accept();
    cl_sock->receive();
    auto received = cl_sock->getReceivedMessage();
    std::cout<<received<<"\n";
}

#include<stdio.h> //printf
#include<string.h>    //strlen
#include<sys/socket.h>    //socket
#include<arpa/inet.h> //inet_addr

#include<iostream>
#include<unistd.h>
#include<string>

#include"cppQ.pb.h"

using Packet = packet::BasePacket;

char server_reply[2000];

void sendPacket(int sock, Packet& packet) {
    std::string msg;
    if( !packet.SerializeToString(&msg)) {
         std::cout<<"Serialization error\n";
    }
    char bts[msg.length()];
    if( send(sock , msg.c_str() , sizeof(bts) , 0) < 0)
    {
        puts("Send failed");
    }
}

void receivePacket(int sock, int scenario) {

    int recv_len;
    if ( (recv_len = recv(sock , server_reply , 2000 , 0)) < 0)
    {
        puts("recv failed");
    }
    std::string recv_str = std::string(server_reply, recv_len);

    Packet recv_pac;
    recv_pac.ParseFromString(recv_str);

    switch (scenario) {
    case 0:break;
    case 1:
        std::cout<<"User ID: "<<recv_pac.user_id().session_id()<<std::endl;
        break;
    }
}

void operationMenu(int sock) {
    
    auto operation = packet.mutable_operation();
    int oper_id;
    std::cout << "Set operation ID: ";
    std::cin >> oper_id;
    switch (oper_id) {
    case 0:
        
    }
}

int packetMenu(Packet& packet) {
    std::cout<<"Choose packet:\n"
               "0 - Alive\n"
               "1 - Login\n"
               "2 - Operation\n"
               "3 - Query\n";
    int scenario;
    std::cin >> scenario;

    if ( scenario == 0 ) {
        auto alive = packet.mutable_alive();
        int id;

        std::cout<<"Set session ID: ";
        std::cin>>id;
        alive->set_session_id(id);
    } else if ( scenario == 1 ) {
        auto login = packet.mutable_login();
        std::string name;
        std::string hash;
        std::cout << "Set username: ";
        std::cin >> name;
        std::cout << "Set hash: ";
        std::cin >> hash;
        login->set_name(name);
        login->set_hash(hash);
        std::cout<<login->hash()<<std::endl;
    } else if ( scenario == 2 ) {
        operationMenu(sock);
    }
    return scenario;
}

void receive(int scenario) {

}
int main(int argc , char *argv[])
{
    int sock;
    struct sockaddr_in server;


    //Create socket
    sock = socket(AF_INET , SOCK_STREAM , 0);
    if (sock == -1)
    {
        printf("Could not create socket");
    }
    puts("Socket created");
     
    server.sin_addr.s_addr = inet_addr("127.0.0.1");
    server.sin_family = AF_INET;
    server.sin_port = htons( 8888 );
 
    //Connect to remote server
    if (connect(sock , (struct sockaddr *)&server , sizeof(server)) < 0)
    {
        perror("connect failed. Error");
        return 1;
    }
     
    puts("Connected\n");

    while(1){
        Packet pack;
        int scenario;
        scenario = packetMenu(pack);
        sendPacket(sock, pack);
        receivePacket(sock, scenario);

    }

    sleep(20);
    close(sock);
     
    //close(sock);
    return 0;
}

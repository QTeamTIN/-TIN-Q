#ifndef CONNECTION_H
#define CONNECTION_H
#include <pqxx/pqxx>
#include <string>
#include <vector>
#include <iostream>
class Connection
{
public:
    //hardcoded values to connect TODO change
        static pqxx::connection& getConnectionInstance();
        static pqxx::result executeQuery(std::string);
    private:
        
        Connection();
        ~Connection();
};

#endif // CONNECTION_H

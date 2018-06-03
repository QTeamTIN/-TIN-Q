#include "Connection.hpp"

Connection::Connection()
{

}

//get instance of singleton
pqxx::connection& Connection::getConnectionInstance() {
	static std::string connection_string = getConnectionProp();
	static pqxx::connection con(connection_string.c_str()); 
    return con;
}  

//executes given query
pqxx::result Connection::executeQuery(std::string query) {
    pqxx::work wrk(getConnectionInstance());
	pqxx::result res = wrk.exec(query.c_str());
    wrk.commit();
    return res;
}
std::string Connection::getConnectionProp() {
    std::string line;
    std::ifstream file ("pqCon.properties");
    if(file.is_open()) {
        getline(file, line);
        file.close();
    }
    else {
        throw std::ios::failure("No pqCon.properties file found");
    }
    return line;
}

Connection::~Connection()
{
}

